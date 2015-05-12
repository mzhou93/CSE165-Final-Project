# include <iostream>
# include "app_window.h"
# include "Text.h"
# include <string>

AppWindow* AppWindow::window = NULL;

AppWindow::AppWindow ( const char* label, int x, int y, int w, int h )
    :GlutWindow ( label, x, y, w, h )
{
    window = this;
    _markx = 0;
    _marky = 0;

    float increment = -0.75f;

    user = new User(0.0f, -0.7f, 0.1f, 0.05f);
	gameover = false;

    for (int i = 0; i < 10; i++) { // create the aliens

        if (i == 1) {
            army2.push_back(new Enemy(increment, 0.85f, 0.1f, 0.05f, 0.0f, 0.0f, 0.7f));
            army2.push_back(new Enemy(increment, 0.72f, 0.1f, 0.05f, 0.7f, 0.0f, 0.0f));
            army2.push_back(new Enemy(increment, 0.59f, 0.1f, 0.05f, 0.0f, 0.7f, 0.0f));
            army2.push_back(new Enemy(increment, 0.46f, 0.1f, 0.05f, 0.7f, 0.0f, 0.7f));
        }

        if (i == 2) {
            army3.push_back(new Enemy(increment, 0.85f, 0.1f, 0.05f, 0.0f, 0.0f, 0.7f));
            army3.push_back(new Enemy(increment, 0.72f, 0.1f, 0.05f, 0.7f, 0.0f, 0.0f));
            army3.push_back(new Enemy(increment, 0.59f, 0.1f, 0.05f, 0.0f, 0.7f, 0.0f));
            army3.push_back(new Enemy(increment, 0.46f, 0.1f, 0.05f, 0.7f, 0.0f, 0.7f));
        }

        if (i == 3) {
            army4.push_back(new Enemy(increment, 0.85f, 0.1f, 0.05f, 0.0f, 0.0f, 0.7f));
            army4.push_back(new Enemy(increment, 0.72f, 0.1f, 0.05f, 0.7f, 0.0f, 0.0f));
            army4.push_back(new Enemy(increment, 0.59f, 0.1f, 0.05f, 0.0f, 0.7f, 0.0f));
            army4.push_back(new Enemy(increment, 0.46f, 0.1f, 0.05f, 0.7f, 0.0f, 0.7f));
        }

        if (i == 4) {
            army5.push_back(new Enemy(increment, 0.85f, 0.1f, 0.05f, 0.0f, 0.0f, 0.7f));
            army5.push_back(new Enemy(increment, 0.72f, 0.1f, 0.05f, 0.7f, 0.0f, 0.0f));
            army5.push_back(new Enemy(increment, 0.59f, 0.1f, 0.05f, 0.0f, 0.7f, 0.0f));
            army5.push_back(new Enemy(increment, 0.46f, 0.1f, 0.05f, 0.7f, 0.0f, 0.7f));
        }

        if (i == 5) {
            army6.push_back(new Enemy(increment, 0.85f, 0.1f, 0.05f, 0.0f, 0.0f, 0.7f));
            army6.push_back(new Enemy(increment, 0.72f, 0.1f, 0.05f, 0.7f, 0.0f, 0.0f));
            army6.push_back(new Enemy(increment, 0.59f, 0.1f, 0.05f, 0.0f, 0.7f, 0.0f));
            army6.push_back(new Enemy(increment, 0.46f, 0.1f, 0.05f, 0.7f, 0.0f, 0.7f));
        }

        if (i == 6) {
            army7.push_back(new Enemy(increment, 0.85f, 0.1f, 0.05f, 0.0f, 0.0f, 0.7f));
            army7.push_back(new Enemy(increment, 0.72f, 0.1f, 0.05f, 0.7f, 0.0f, 0.0f));
            army7.push_back(new Enemy(increment, 0.59f, 0.1f, 0.05f, 0.0f, 0.7f, 0.0f));
            army7.push_back(new Enemy(increment, 0.46f, 0.1f, 0.05f, 0.7f, 0.0f, 0.7f));
        }

        if (i == 7) {
            army8.push_back(new Enemy(increment, 0.85f, 0.1f, 0.05f, 0.0f, 0.0f, 0.7f));
            army8.push_back(new Enemy(increment, 0.72f, 0.1f, 0.05f, 0.7f, 0.0f, 0.0f));
            army8.push_back(new Enemy(increment, 0.59f, 0.1f, 0.05f, 0.0f, 0.7f, 0.0f));
            army8.push_back(new Enemy(increment, 0.46f, 0.1f, 0.05f, 0.7f, 0.0f, 0.7f));
        }

        if (i == 8) {
            army9.push_back(new Enemy(increment, 0.85f, 0.1f, 0.05f, 0.0f, 0.0f, 0.7f));
            army9.push_back(new Enemy(increment, 0.72f, 0.1f, 0.05f, 0.7f, 0.0f, 0.0f));
            army9.push_back(new Enemy(increment, 0.59f, 0.1f, 0.05f, 0.0f, 0.7f, 0.0f));
            army9.push_back(new Enemy(increment, 0.46f, 0.1f, 0.05f, 0.7f, 0.0f, 0.7f));
        }

        if (i == 9) {
            army10.push_back(new Enemy(increment, 0.85f, 0.1f, 0.05f, 0.0f, 0.0f, 0.7f));
            army10.push_back(new Enemy(increment, 0.72f, 0.1f, 0.05f, 0.7f, 0.0f, 0.0f));
            army10.push_back(new Enemy(increment, 0.59f, 0.1f, 0.05f, 0.0f, 0.7f, 0.0f));
            army10.push_back(new Enemy(increment, 0.46f, 0.1f, 0.05f, 0.7f, 0.0f, 0.7f));
        }

	    increment += 0.15f;
    }
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

	std::string scoreText;
	scoreText = "CSE165 Final Project by John, JP and Michelle";
	displayScore->drawText(scoreText.data(),scoreText.length(), -0.8, 0.7);

	user->draw();

    for (int i = 0; i < army2.size(); i++) {
        army2[i]->draw();
    }

    for (int i = 0; i < army3.size(); i++) {
        army3[i]->draw();
    }

    for (int i = 0; i < army4.size(); i++) {
        army4[i]->draw();
    }

    for (int i = 0; i < army5.size(); i++) {
        army5[i]->draw();
    }

    for (int i = 0; i < army6.size(); i++) {
        army6[i]->draw();
    }

    for (int i = 0; i < army7.size(); i++) {
        army7[i]->draw();
    }

    for (int i = 0; i < army8.size(); i++) {
        army8[i]->draw();
    }

    for (int i = 0; i < army9.size(); i++) {
        army9[i]->draw();
    }

    for (int i = 0; i < army10.size(); i++) {
        army10[i]->draw();
    }

	if (army2.empty() && army3.empty() && army4.empty() && army5.empty() && army6.empty() && army7.empty() && army8.empty() && army9.empty() && army10.data()){ 
		gameover = true; //gameover if all enemies have been deleted
	}

    glFlush();
    glutSwapBuffers();
}
