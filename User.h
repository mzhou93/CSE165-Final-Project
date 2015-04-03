#ifndef USER_H
#define USER_H

# include "glut_window.h"
# include "Bullet.h"

class User{
public:
	float x, y, l, h;
	Bullet* bullet;	//create instance of bullet
	
	User(){}

	User(float x, float y, float l, float h);
	
	~User(){}

	void draw();
	void handle ( const GlutWindow::Event& e );
};

#endif

