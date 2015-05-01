#include "Bullet.h"
#include "Enemy.h"
#include "app_window.h"

Bullet::Bullet(float x, float y){	//bullet constructor
	this->x = x;
	this->y = y;
}


bool Bullet::collision(){
	float _x = (float) x;
	float _y = (float) y + .035;
	AppWindow::instance()->windowToScene(_x, _y);

	for (int i = 0; i < AppWindow::instance()->army4.size(); i++){
		float ex =  AppWindow::instance()->army4[0]->x;
		float ey =  AppWindow::instance()->army4[0]->y;
		AppWindow::instance()->windowToScene(ex, ey);

		if (_y <= ey+0.0002 && _y >= ey-0.05f && _x >= ex && _x <= ex+0.1f){
			cout << "hit"<< endl;
			return true;
		}
	}
	return false;
}


void Bullet::display(){	//draws bullet
	glBegin(GL_LINES);

	glVertex2f( x, y );
	glVertex2f( x, y + .035f);
	
	y += 0.0008f;	//update y value to "shoot" the bullet upwards

	glEnd();
	
	if (collision()){
		delete this;
	}
	else if (y > 0.9f)
		delete this;	//delete instance of bullet

	glutPostRedisplay();
}