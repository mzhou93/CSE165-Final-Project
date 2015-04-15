#ifndef ENEMY_H
#define ENEMY_H

class Enemy{
public:
    float x, y, l, h;

    Enemy(){}

    Enemy(float x, float y, float l, float h) {
        this->x = x;
        this->y = y;
        this->l = l;
        this->h = h;
    }

    ~Enemy(){}

    void draw();
	void handle();
};


#endif // ENEMY_H
