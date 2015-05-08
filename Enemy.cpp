#include "Enemy.h"
#include "app_window.h"

#include <iostream>
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
    glVertex3f( x + 0.025f, y + h -.05f, 1.0f);
    glVertex3f( x + 0.05f, y - 0.1f, -1.0f);
    glVertex3f( x + 0.075f, y + h - .05f, -1.0f);

    glEnd();

    movement(1);

    //cout << x+l << endl;

}

void Enemy::movement(int animate) { // -.85 < x < .85 and y < -1

    y -= .0001f;
    //    cout << x << endl;

    //    if (x <= .002f)
    glutPostRedisplay();

}

/*
 * from down to border
 *      from right to border
 *          increment right
 */
