# ifndef BULLET_H
# define BULLET_H

# include "glut_window.h"

using namespace std;

class Bullet{
public:
    float x, y;
    bool hit;

    Bullet();
    Bullet(float x, float y);


    ~Bullet(){ 	}

    int collision();
    void display();
};

# endif
