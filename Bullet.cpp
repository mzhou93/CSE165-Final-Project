#include "Bullet.h"
#include "app_window.h"

Bullet::Bullet(float x, float y){	//bullet constructor
	this->x = x;
	this->y = y;
}

void Bullet::draw(){	//draws bullet
   glBegin(GL_LINE_STRIP);
   glColor3d(0.0, 0.8, 0.8);
   glVertex2f( x + 0.05, y + 0.035);
   glVertex2f( x + 0.05, y + 0.07);
   glEnd();
}
