# ifndef BULLET_H
# define BULLET_H

# include "glut_window.h"

# include <iostream>;
using namespace std;

class Bullet{
public:
	float x, y;
	bool hit;

	Bullet();
	Bullet(float x, float y);

	~Bullet(){ cout << "bullet deleted" <<endl;	}

	bool collision();
	void display();
};

# endif