#include "Bullet.h"
#include "app_window.h"
#include <iostream>

Bullet::Bullet(float x, float y){	//bullet constructor
	this->x = x;
	this->y = y;
}

void Bullet::display(){	//draws bullet
	glBegin(GL_LINES);

	glVertex2f( x, y );
	glVertex2f( x, y + .035f);
	
	y += 0.0025f;	//update y value to "shoot" the bullet upwards

	glEnd();

	glutPostRedisplay();
}