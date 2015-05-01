
# include <iostream>
# include "app_window.h"

AppWindow* AppWindow::window = NULL;

AppWindow::AppWindow ( const char* label, int x, int y, int w, int h )
    :GlutWindow ( label, x, y, w, h )
{
	window = this;
    _markx = 0;
    _marky = 0;

    float increment = -0.75f; 

    user = new User(-0.05f, -0.7f, 0.1f, 0.05f);

    for (int i = 0; i < 10; i++) { // create the aliens
        army1.push_back(new Enemy(increment, 0.85f, 0.1f, 0.05f, 0.0f, 0.0f, 0.7f));
        army2.push_back(new Enemy(increment, 0.72f, 0.1f, 0.05f, 0.7f, 0.0f, 0.0f));
        army3.push_back(new Enemy(increment, 0.59f, 0.1f, 0.05f, 0.0f, 0.7f, 0.0f));
        army4.push_back(new Enemy(increment, 0.46f, 0.1f, 0.05f, 0.7f, 0.0f, 0.7f));
        increment += 0.15f;
    }

    //animate(army1);
}

AppWindow* AppWindow::instance(){
	if(!window)
		window = new AppWindow("Space Invaders", 300, 300, 640, 480);
	return window;
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
	/*
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < user->bullets.size(); j++){
			cout << army1[i]->x << " " << army1[i]->y << endl;
			if (army1[i]->y == user->bullets[j]->y){
				user->bullets[i]->hit = true;
			}
		}
		*/


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

