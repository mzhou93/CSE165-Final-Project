#ifndef USER_H
#define USER_H

# include "glut_window.h"
# include "Bullet.h"
# include <vector>

using namespace std;

class User{
public:
	float x, y, l, h;
	vector <Bullet*> bullets;

	User(){}

	User(float x, float y, float l, float h);  
	
	~User(){}

	void draw();
	void handle ( const GlutWindow::Event& e );
};

#endif

