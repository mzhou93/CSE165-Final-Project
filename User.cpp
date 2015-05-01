#include "User.h"
#include "app_window.h"

static bool shoot;

User::User(float x, float y, float l, float h){	
	this->x = x;
	this->y = y;
	this->l = l;
	this->h = h;
}

void User::draw(){
	//draw rectangle of user (body of user)
	glBegin(GL_POLYGON);
	glColor3d(0.0f, 0.8f, 0.8f);
	glVertex2d(x, y);
	glVertex2d(x + l, y);
	glVertex2d(x + l, y - h);
	glVertex2d(x, y - h);
	glEnd();

	//draw triangle of user (where bullets shoot out of)
	glBegin(GL_TRIANGLES);
	glColor3d(0.0f, 0.8f, 0.8f);
	glVertex3f( x + 0.025f, y, -1.0f);
	glVertex3f( x + 0.05f, y + 0.035f, -1.0f);
	glVertex3f( x + 0.075f, y, -1.0f);
	glEnd();
	
	if (shoot){
		for (int i = 0; i < bullets.size(); i++){
			bullets[i]->display();
		}
	}
}

void User::handle (const GlutWindow::Event& e){
   const float incx=0.025f;

   if ( e.type == GlutWindow::SpecialKey )
    switch ( e.key )
    { case GLUT_KEY_LEFT:	//handles left key  
		if(x > -1.0f)  
			x-=incx;
		break;
      case GLUT_KEY_RIGHT:	//handles right key
		if (x < 0.9f)
			x+=incx; 
		break;
	}

    if ( e.type == GlutWindow::Keyboard ){ 
		if (e.key == ' '){	//space bar
			shoot = true;
			bullets.push_back(new Bullet(x + .05f, y + .035f));	//create a bullet 
		}
	}
}
