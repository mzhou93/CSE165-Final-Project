#include "Bullet.h"
#include "User.h"
#include "Enemy.h"
#include "app_window.h"

int lives2 = 3;
int lives3 = 3;
int lives4 = 3;
int lives5 = 3;
int lives6 = 3;
int lives7 = 3;
int lives8 = 3;
int lives9 = 3;
int lives10 = 3;

Bullet::Bullet(float x, float y){	//bullet constructor
    this->x = x;
    this->y = y;
}

int Bullet::collision(){
    float _x = (float) x;
    float _y = (float) y + .035;
    AppWindow::instance()->windowToScene(_x, _y);

    if (AppWindow::instance()->user->x <= -.55 && AppWindow::instance()->user->x  >= -.7) {

        for (int i = 0; i < AppWindow::instance()->army2.size(); i++){

            float ex =  AppWindow::instance()->army2[lives2]->x;
            float ey =  AppWindow::instance()->army2[lives2]->y;

            AppWindow::instance()->windowToScene(ex, ey);

            if (_y <= ey+0.0002 && _y >= ey-0.05f && _x >= ex && _x <= ex+0.1f){ // bullet collision
                AppWindow::instance()->army2.erase(AppWindow::instance()->army2.begin()+lives2,AppWindow::instance()->army2.end()); // change
                AppWindow::instance()->user->deletebullet();
                lives2--;
            }
        }
    }

    if (AppWindow::instance()->user->x <= -.41 && AppWindow::instance()->user->x  >= -.6) { // stay within the line.

        for (int i = 0; i < AppWindow::instance()->army3.size(); i++){ // change army

            float ex =  AppWindow::instance()->army3[lives3]->x;  // change lives and army.
            float ey =  AppWindow::instance()->army3[lives3]->y;  // change lives.

            AppWindow::instance()->windowToScene(ex, ey);

            if (_y <= ey+0.0002 && _y >= ey-0.05f && _x >= ex && _x <= ex+0.1f){ // bullet collision
                AppWindow::instance()->army3.erase(AppWindow::instance()->army3.begin()+lives3,AppWindow::instance()->army3.end()); // change lives and army
                AppWindow::instance()->user->deletebullet();
                lives3--; 
            }
        }
    }

    if (AppWindow::instance()->user->x <= -.27 && AppWindow::instance()->user->x  >= -.5) {

        for (int i = 0; i < AppWindow::instance()->army4.size(); i++){

            float ex =  AppWindow::instance()->army4[lives4]->x;
            float ey =  AppWindow::instance()->army4[lives4]->y;

            AppWindow::instance()->windowToScene(ex, ey);

            if (_y <= ey+0.0002 && _y >= ey-0.05f && _x >= ex && _x <= ex+0.1f){ // bullet collision
                AppWindow::instance()->army4.erase(AppWindow::instance()->army4.begin()+lives4,AppWindow::instance()->army4.end());
                AppWindow::instance()->user->deletebullet();
                lives4--;
            }
        }
    }

    if (AppWindow::instance()->user->x <= -.10 && AppWindow::instance()->user->x  >= -.21) {

        for (int i = 0; i < AppWindow::instance()->army5.size(); i++){

            float ex =  AppWindow::instance()->army5[lives5]->x;
            float ey =  AppWindow::instance()->army5[lives5]->y;

            AppWindow::instance()->windowToScene(ex, ey);

            if (_y <= ey+0.0002 && _y >= ey-0.05f && _x >= ex && _x <= ex+0.1f){ // bullet collision
                AppWindow::instance()->army5.erase(AppWindow::instance()->army5.begin()+lives5,AppWindow::instance()->army5.end());
                AppWindow::instance()->user->deletebullet();
                lives5--;
            }
        }
    }

    if (AppWindow::instance()->user->x >= -.04 && AppWindow::instance()->user->x  <= .05) {

        for (int i = 0; i < AppWindow::instance()->army6.size(); i++){

            float ex =  AppWindow::instance()->army6[lives6]->x;
            float ey =  AppWindow::instance()->army6[lives6]->y;

            AppWindow::instance()->windowToScene(ex, ey);

            if (_y <= ey+0.0002 && _y >= ey-0.05f && _x >= ex && _x <= ex+0.1f){ // bullet collision
                AppWindow::instance()->army6.erase(AppWindow::instance()->army6.begin()+lives6,AppWindow::instance()->army6.end());
                AppWindow::instance()->user->deletebullet();
                lives6--;
            }
        }
    }

    if (AppWindow::instance()->user->x <= .2 && AppWindow::instance()->user->x  >= .1) {

        for (int i = 0; i < AppWindow::instance()->army7.size(); i++){

            float ex =  AppWindow::instance()->army7[lives7]->x;
            float ey =  AppWindow::instance()->army7[lives7]->y;

            AppWindow::instance()->windowToScene(ex, ey);

            if (_y <= ey+0.0002 && _y >= ey-0.05f && _x >= ex && _x <= ex+0.1f){ // bullet collision
                AppWindow::instance()->army7.erase(AppWindow::instance()->army7.begin()+lives7,AppWindow::instance()->army7.end());
                AppWindow::instance()->user->deletebullet();
                lives7--;
            }
        }

    }

    if (AppWindow::instance()->user->x <= .35 && AppWindow::instance()->user->x  >= .25) {

        for (int i = 0; i < AppWindow::instance()->army8.size(); i++){

            float ex =  AppWindow::instance()->army8[lives8]->x;
            float ey =  AppWindow::instance()->army8[lives8]->y;

            AppWindow::instance()->windowToScene(ex, ey);

            if (_y <= ey+0.0002 && _y >= ey-0.05f && _x >= ex && _x <= ex+0.1f){ // bullet collision
                AppWindow::instance()->army8.erase(AppWindow::instance()->army8.begin()+lives8,AppWindow::instance()->army8.end());
                AppWindow::instance()->user->deletebullet();
                lives8--;
            }
        }
    }

    if (AppWindow::instance()->user->x <= .5 && AppWindow::instance()->user->x  >= .4) {

        for (int i = 0; i < AppWindow::instance()->army9.size(); i++){

            float ex =  AppWindow::instance()->army9[lives9]->x;
            float ey =  AppWindow::instance()->army9[lives9]->y;

            AppWindow::instance()->windowToScene(ex, ey);

            if (_y <= ey+0.0002 && _y >= ey-0.05f && _x >= ex && _x <= ex+0.1f){ // bullet collision
                AppWindow::instance()->army9.erase(AppWindow::instance()->army9.begin()+lives9,AppWindow::instance()->army9.end());
                AppWindow::instance()->user->deletebullet();
                lives9--;
            }
        }
    }

    if (AppWindow::instance()->user->x <= .65 && AppWindow::instance()->user->x  >= .55) {

        for (int i = 0; i < AppWindow::instance()->army10.size(); i++){

            float ex =  AppWindow::instance()->army10[lives10]->x;
            float ey =  AppWindow::instance()->army10[lives10]->y;

            AppWindow::instance()->windowToScene(ex, ey);

            if (_y <= ey+0.0002 && _y >= ey-0.05f && _x >= ex && _x <= ex+0.1f){ // bullet collision
                AppWindow::instance()->army10.erase(AppWindow::instance()->army10.begin()+lives10,AppWindow::instance()->army10.end());
                AppWindow::instance()->user->deletebullet();
                lives10--;
            }
        }
    }



    return false;
}




void Bullet::display(){	//draws bullet
    glBegin(GL_LINES);

    glVertex2f( x, y );
    glVertex2f( x, y + .035f);

    y += 0.009f;	//update y value to "shoot" the bullet upwards

    glEnd();

	if (y >= 0.9f) {
        AppWindow::instance()->user->deletebullet();
    }
	else collision();
    glutPostRedisplay();

}
