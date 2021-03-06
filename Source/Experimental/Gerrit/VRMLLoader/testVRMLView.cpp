#include <OSGConfig.h>

#include <iostream>

#include <OSGGLUT.h>

#include <OSGFieldContainerFactory.h>
#include <OSGSFSysTypes.h>
#include <OSGVector.h>
#include <OSGQuaternion.h>
#include <OSGMatrix.h>
#include <OSGMatrixUtility.h>
#include <OSGBoxVolume.h>
#include <OSGNode.h>
#include <OSGGroup.h>
#include <OSGThread.h>
#include <OSGTransform.h>
#include <OSGAttachment.h>
#include <OSGMFVecTypes.h>
#include <OSGAction.h>
#include <OSGDrawAction.h>
#include <OSGSimpleGeometry.h>
#include <OSGSceneFileHandler.h>

#include <OSGDirectionalLight.h>

#include "OSGViewport.h"
#include "OSGCamera.h"
#include "OSGWindow.h"
#include "OSGGLUTWindow.h"
#include "OSGCamera.h"
#include "OSGPerspectiveCamera.h"
#include "OSGSolidBackground.h"
//#include "OSGUniformBackground.h"

#include <OSGVRMLNode.h>
#include <OSGVRMLObjectFactory.h>
#include <OSGVRMLLoader.h>
#include <OSGVRMLToOSGAction.h>

#include "OSGTrackball.h"

using namespace OSG;

DrawAction * ract;

NodePtr  root;

NodePtr  file;

PerspectiveCameraPtr cam;
ViewportPtr vp;
WindowPtr win;

TransformPtr cam_trans;

Trackball tball;

int mouseb = 0;
int lastx=0, lasty=0;

ExternalThread *pVSCThread = NULL;

void 
display(void)
{
    Matrix m1, m2, m3;
    Quaternion q1;

#ifdef PAR_SCHEDULER
    if(pVSCThread == NULL)
    {
        pVSCThread = ExternalThread::find("VSCScheduler");
    }

    VSC::VSCScheduler::the()->enterSyncBarrier(2);

    pVSCThread->getChangeList()->applyToCurrent();
    pVSCThread->getChangeList()->clearAll();

//    VSC::vsc_sleep(100);

    VSC::VSCScheduler::the()->enterSyncBarrier(2);
#endif

//    tball.getRotation().getValue(m3);

//    q1.setValue(m3);

//    m1.setRotate(q1);
    
//    cout << "TBROT" << endl << tball.getRotation() << endl;
//    cout << "M3" << endl << m3 << endl;
//    cout << "Q1" << endl << q1 << endl;
//    cout << "M1" << endl << m1 << endl;

//  m1.setRotate( tball.getRotation() );
//    m2.setTranslate( tball.getPosition() );
    
//cout << "Pos: " << tball.getPosition() << ", Rot: " << tball.getRotation() << endl;

//    cout << tball.getRotation() << endl;

//    m1.mult( m2 );

    cam_trans->getSFMatrix()->setValue(tball.getFullTrackballMatrix());

/*
    fprintf(stderr, "%d %d %d %d | %d | %d\r",
            glutGet(GLUT_WINDOW_RED_SIZE),
            glutGet(GLUT_WINDOW_GREEN_SIZE),
            glutGet(GLUT_WINDOW_BLUE_SIZE),
            glutGet(GLUT_WINDOW_ALPHA_SIZE),
            glutGet(GLUT_WINDOW_DEPTH_SIZE),
            glutGet(GLUT_WINDOW_STENCIL_SIZE));
*/

    win->draw( ract );
}

void reshape( int w, int h )
{
    std::cerr << "Reshape: " << w << "," << h << endl;
    win->resize( w, h );
}


void
animate(void)
{
    glutPostRedisplay();
}

// tballall stuff


void
motion(int x, int y)
{   
    Real32 w = win->getWidth(), h = win->getHeight();
    

    Real32  a = -2. * ( lastx / w - .5 ),
                b = -2. * ( .5 - lasty / h ),
                c = -2. * ( x / w - .5 ),
                d = -2. * ( .5 - y / h );

    if ( mouseb & ( 1 << GLUT_LEFT_BUTTON ) )
    {
        tball.updateRotation( a, b, c, d );     
    }
    else if ( mouseb & ( 1 << GLUT_MIDDLE_BUTTON ) )
    {
        tball.updatePosition( a, b, c, d );     
    }
    else if ( mouseb & ( 1 << GLUT_RIGHT_BUTTON ) )
    {
        tball.updatePositionNeg( a, b, c, d );  
    }
    lastx = x;
    lasty = y;
}

void
mouse(int button, int state, int x, int y)
{
    if ( state == 0 )
    {
        switch ( button )
        {
        case GLUT_LEFT_BUTTON:  break;
        case GLUT_MIDDLE_BUTTON:tball.setAutoPosition(true);
                                break;
        case GLUT_RIGHT_BUTTON:     tball.setAutoPositionNeg(true);
                                break;
        }
        mouseb |= 1 << button;
    }
    else if ( state == 1 )
    {
        switch ( button )
        {
        case GLUT_LEFT_BUTTON:  break;
        case GLUT_MIDDLE_BUTTON:tball.setAutoPosition(false);
                                break;
        case GLUT_RIGHT_BUTTON:     tball.setAutoPositionNeg(false);
                                break;
        }       
        mouseb &= ~(1 << button);
    }
    lastx = x;
    lasty = y;
}

void
vis(int visible)
{
    if (visible == GLUT_VISIBLE) 
    {
        glutIdleFunc(animate);
    } 
    else 
    {
        glutIdleFunc(NULL);
    }
}

void key(unsigned char key, int x, int y)
{
    switch ( key )
    {
        case 27:    osgExit(); exit(0);
        case 'a':   glDisable( GL_LIGHTING );
            std::cerr << "Lighting disabled." << endl;
            break;
        case 's':   glEnable( GL_LIGHTING );
            std::cerr << "Lighting enabled." << endl;
            break;
        case 'z':   glPolygonMode( GL_FRONT_AND_BACK, GL_POINT);
            std::cerr << "PolygonMode: Point." << endl;
            break;
        case 'x':   glPolygonMode( GL_FRONT_AND_BACK, GL_LINE);
            std::cerr << "PolygonMode: Line." << endl;
            break;
        case 'c':   glPolygonMode( GL_FRONT_AND_BACK, GL_FILL);
            cerr << "PolygonMode: Fill." << endl;
            break;
        case 'r':   cerr << "Sending ray through " << x << "," << y << endl;
            Line l;
            cam->calcViewRay( l, x, y, *vp );
            cerr << "From " << l.getPosition() << ", dir " << l.getDirection() << endl;
            break;
    }
}


int main (int argc, char **argv)
{
    osgInit(argc,argv);

    FieldContainerPtr pProto = Geometry::getClassType().getPrototype();

    GeometryPtr pGeoProto = GeometryPtr::dcast(pProto);

    if(pGeoProto != NullFC)
    {
        pGeoProto->setDlistCache(false);
    }

    // GLUT init

    glutInit(&argc, argv);
    glutInitDisplayMode( GLUT_RGB | GLUT_DEPTH | GLUT_DOUBLE | GLUT_STENCIL);
    int winid = glutCreateWindow("OpenSG");
    glutKeyboardFunc(key);
    glutVisibilityFunc(vis);
    glutReshapeFunc(reshape);
    glutDisplayFunc(display);       
    glutMouseFunc(mouse);   
    glutMotionFunc(motion); 
    
    glutIdleFunc(display);  

    // glPolygonMode( GL_FRONT_AND_BACK, GL_LINE );
    
    glEnable( GL_DEPTH_TEST );
    glEnable( GL_LIGHTING );
//    glEnable( GL_LIGHT0 );
    glEnable(GL_NORMALIZE);

    // OSG

    SceneFileHandler::the().print();

    // create the graph

    // beacon for camera and light  
    NodePtr b1n = Node::create();
    GroupPtr b1 = Group::create();
    beginEditCP(b1n);
    b1n->setCore( b1 );
    endEditCP(b1n);

    // transformation
    NodePtr t1n = Node::create();
    TransformPtr t1 = Transform::create();
    beginEditCP(t1n);
    t1n->setCore( t1 );
    t1n->addChild( b1n );
    endEditCP(t1n);

    cam_trans = t1;

    // light
    
//#define OSG_HLIGHT

    NodePtr dlight = Node::create();
#ifdef OSG_HLIGHT
    DirectionalLightPtr dl = DirectionalLight::create();
#else
    GroupPtr dl = Group::create();
#endif

    beginEditCP(dlight);
    dlight->setCore( dl );
    endEditCP(dlight);
    
#ifdef OSG_HLIGHT
    beginEditCP(dl);
    dl->setAmbient( .2, .2, .2, 1 );
    dl->setDiffuse( .8, .8, .8, 1 );
    dl->setDirection(0,0,1);
    dl->setBeacon( b1n);
    endEditCP(dl);
#endif

    // root
    root = Node::create();
    GroupPtr gr1 = Group::create();
    beginEditCP(root);
    root->setCore( gr1 );
    root->addChild( t1n );
    root->addChild( dlight );
    endEditCP(root);

    // Load the file

    NodePtr file = NullFC;
    
/*
    if ( argc > 1 )
        file = SceneFileHandler::the().read(argv[1]);
    
    if ( file == NullFC )
    {
        cerr << "Couldn't load file, ignoring" << endl;
        file = makeTorus( .5, 2, 16, 16 );
    }
*/

    VRMLLoader *pFile = new VRMLLoader;

    pFile->scanFile(argv[1], 0);

    VRMLToOSGAction                      aVRMLToOSG;

    FieldContainerPtr           pFC         = NullFC;
    VRMLBindings::NodeBinderPtr pNodeBinder = NULL;

    fprintf(stderr, "Resnode %p\n", pFile->getFileTree());
    
    aVRMLToOSG.setNameNodeMap(pFile->getNameNodeMap());
    aVRMLToOSG.setDataTransferMode(VRMLToOSGAction::SwapData);
    aVRMLToOSG.apply(pFile->getFileTree());

/*    
    pNodeBinder = (pFile->getFileTree())->getBinder();
    
    if(pNodeBinder != NULL)
    {
        pFC = pNodeBinder->getFCPtr();  
        
        if(pFC != NullFC)
        {
            file = NodePtr::dcast(pFC);
        }
        else
        {
            fprintf(stderr, "FCPtr NULL\n");
        }
    }
    else
    {
        fprintf(stderr, "Binder NULL\n");
    }
    */

    file = aVRMLToOSG.getRoot();

    if(file == NullFC)
        return 0;
 
    file->updateVolume();

    Vec3f min,max;
    file->getVolume().getBounds( min, max );
    
    cout << "Volume: from " << min << " to " << max << endl;

    beginEditCP(dlight);
    dlight->addChild( file );
    endEditCP(dlight);

    cerr << "Tree: " << endl;
//  root->dump();

    // Camera
    
    cam = PerspectiveCamera::create();
    cam->setBeacon( b1n );
    cam->setFov( deg2rad( 90 ) );
    cam->setNear( 0.1 );
    cam->setFar( 10000 );

    // Background
    SolidBackgroundPtr bkgnd = SolidBackground::create();

    // Viewport

    vp = Viewport::create();
    vp->setCamera( cam );
    vp->setBackground( bkgnd );
    vp->setRoot( root );
    vp->setSize( 0,0, 1,1 );

    // Window
    cout << "GLUT winid: " << winid << endl;

    GLUTWindowPtr gwin;

    GLint glvp[4];
    glGetIntegerv( GL_VIEWPORT, glvp );

    gwin = GLUTWindow::create();
    gwin->setId(winid);
    gwin->setSize( glvp[2], glvp[3] );

    win = gwin;

    win->addPort( vp );

    win->init();

    // Action
    
    ract = DrawAction::create();

    // tball

    Vec3f pos(min[0] + ((max[0] - min[0]) * 0.5), 
              min[1] + ((max[1] - min[1]) * 0.5), 
              max[2] + ( max[2] - min[2] ) * 1.5 );

    float scale = (max[2] - min[2] + max[1] - min[1] + max[0] - min[0]) / 6;

    Pnt3f tCenter(min[0] + (max[0] - min[0]) / 2,
                  min[1] + (max[1] - min[1]) / 2,
                  min[2] + (max[2] - min[2]) / 2);

    tball.setMode( Trackball::OSGObject );
    tball.setStartPosition( pos, true );
    tball.setSum( true );
    tball.setTranslationMode( Trackball::OSGFree );
    tball.setTranslationScale(scale);
    tball.setRotationCenter(tCenter);
    // run...

#ifdef PAR_SCHEDULER
    Thread::getCurrent()->getChangeList()->applyTo(1);

    VSC::VSCScheduler::the()->run();
#endif
    
    glutMainLoop();
    
    return 0;
}

