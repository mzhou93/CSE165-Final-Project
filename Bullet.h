# ifndef BULLET_H
# define BULLET_H

# include "glut_window.h"

class Bullet{
public:
	float x, y;

	Bullet() {	}
	Bullet(float x, float y);

	~Bullet(){	}
	void draw();
};

# endif
