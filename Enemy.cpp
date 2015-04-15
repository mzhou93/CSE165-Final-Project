#include "Enemy.h"
#include "app_window.h"

#include <iostream>

void Enemy::draw(){
    glBegin(GL_POLYGON);
    glColor3d(0.9, 0.0, 0.0);
    glVertex2d(x, y);
    glVertex2d(x + l, y);
    glVertex2d(x + l, y - h);
    glVertex2d(x, y - h);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3d(0.9, 0.0, 0.0);
    glVertex3f( x + 0.025, y+h-.05, 1.0);
    glVertex3f( x + 0.05, y-0.1, -1.0);
    glVertex3f( x + 0.075, y+h-.05, -1.0);

    glEnd();
}

void Enemy::handle(){

}
