
#include "Enemy.h"
#include "app_window.h"

#include <iostream>
#include <unistd.h>
#include <time.h>

using namespace std;

void Enemy::draw(){

    glBegin(GL_POLYGON);
    glColor3d(r, g, b);
    glVertex2d(x, y);
    glVertex2d(x + l, y);
    glVertex2d(x + l, y - h);
    glVertex2d(x, y - h);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3d(r, g, b);
    glVertex3f( x + 0.025, y+h-.05, 1.0);
    glVertex3f( x + 0.05, y-0.1, -1.0);
    glVertex3f( x + 0.075, y+h-.05, -1.0);

    glEnd();

    movement(1);

}

void Enemy::movement(int animate) { // -.85 < x < .85 and y < -1

    y -= .001f;
    cout << x << endl;

    if (x <= .002)
        glutPostRedisplay();

}

/*
 * from down to border
 *      from right to border
 *          increment right
 */



