#ifndef ENEMY_H
#define ENEMY_H

#include <vector>

class Enemy{
public:

    float x, y, l, h, r, g, b;

	Enemy(){}

    Enemy(float x, float y, float l, float h) { // default constructor will be red
        this->x = x;
        this->y = y;
        this->l = l;
        this->h = h;
    }

    Enemy(float x, float y, float l, float h, float r, float g, float b) { // new constructor with changing the color
        this->x = x;
        this->y = y;
        this->l = l;
        this->h = h;
        this->r = r;
        this->g = g;
        this->b = b;
    }

    ~Enemy(){}

    void draw();
    void movement(int animate);

};


#endif // ENEMY_H
