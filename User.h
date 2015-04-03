#ifndef USER_H
#define USER_H

# include "glut_window.h"

class User{
public:
	float x, y, l, h;
	//bool shoot;
	
	User(){}

	User(float x, float y, float l, float h) {	
		this->x = x;
		this->y = y;
		this->l = l;
		this->h = h;
	}
	
	~User(){}

	void draw();
	void handle ( const GlutWindow::Event& e );
};

#endif

