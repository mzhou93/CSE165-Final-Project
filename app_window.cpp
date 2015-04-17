
# include <iostream>
# include "app_window.h"

AppWindow::AppWindow ( const char* label, int x, int y, int w, int h )
    :GlutWindow ( label, x, y, w, h )
{
    _markx = 0;
    _marky = 0;
    addMenuEntry ( "Option 0", evOption0 );
    addMenuEntry ( "Option 1", evOption1 );

    double increment = 0.0; // double

    user = new User(-0.05, -0.7, 0.1, 0.05);

    for (int i = 0; i < 10; i++) { // create the aliens
        army1.push_back(new Enemy(-.9+increment, .85, 0.1, 0.05,0,0,.7));
        army2.push_back(new Enemy(-.9+increment, 0.72, 0.1, 0.05,.7,0,0));
        army3.push_back(new Enemy(-.9+increment, 0.59, 0.1, 0.05,0,.7,0));
        army4.push_back(new Enemy(-.9+increment, 0.46, 0.1, 0.05,.7,0,.7));
        increment = increment + .15;
    }

    //animate(army1);



}

// mouse events are in window coordinates, but your scene is in [0,1]x[0,1],
// so make here the conversion when needed
void AppWindow::windowToScene ( float& x, float &y )
{
    x = (2.0f*(x/float(_w))) - 1.0f;
    y = 1.0f - (2.0f*(y/float(_h)));
}

// Called every time there is a window event
void AppWindow::handle ( const Event& e )
{
    bool rd=true;
    user->handle(e);

    if ( e.type == Keyboard ){
        if (e.type == ' ') {

        }
    }

    if (rd) redraw(); // ask the window to be rendered when possible

}

void AppWindow::resize ( int w, int h )
{
    // Define that OpenGL should use the whole window for rendering
    glViewport( 0, 0, w, h );
    _w=w; _h=h;
}

// here we will redraw the scene according to the current state of the application.
void AppWindow::draw ()
{
    glClear ( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );
    glMatrixMode( GL_MODELVIEW );
    glLoadIdentity();

    user->draw();

    for (int i = 0; i < 10; i++) {
        army1[i]->draw();
        army2[i]->draw();
        army3[i]->draw();
        army4[i]->draw();
    }


    glFlush();
    glutSwapBuffers();
}

