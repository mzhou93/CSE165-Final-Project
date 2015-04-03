#include "User.h"
#include "app_window.h"


User::User(float x, float y, float l, float h){	
	this->x = x;
	this->y = y;
	this->l = l;
	this->h = h;
	bullet = new Bullet(x + 0.05, y + 0.035);
}

void User::draw(){
	//draw rectangle of user (body of user)
	glBegin(GL_POLYGON);
	glColor3d(0.0, 0.8, 0.8);
	glVertex2d(x, y);
	glVertex2d(x + l, y);
	glVertex2d(x + l, y - h);
	glVertex2d(x, y - h);
	glEnd();

	//draw trinagle of user (where bullets shoot out of)
	glBegin(GL_TRIANGLES);
	glColor3d(0.0, 0.8, 0.8);
	glVertex3f( x + 0.025, y, -1.0);
	glVertex3f( x + 0.05, y + 0.035, -1.0);
	glVertex3f( x + 0.075, y, -1.0);
	glEnd();
}

void User::handle (const GlutWindow::Event& e){
   const float incx=0.02f;
   const float incy=0.02f;
   
   if ( e.type == GlutWindow::SpecialKey )
    switch ( e.key )
    { case GLUT_KEY_LEFT:	//handles left key  
		if(x > -1.0)  
			x-=incx;
		break;
      case GLUT_KEY_RIGHT:	//handles right key
		if (x < 0.9)
			x+=incx; 
		break;
	}

   if ( e.type==GlutWindow::Keyboard ) 
    if (e.key == ' '){
		bullet->draw();
		}
}
