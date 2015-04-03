#include "User.h"
#include "app_window.h"

#include <iostream>

void User::draw(){
	//if (!shoot){
	glBegin(GL_POLYGON);
	glColor3d(0.0, 0.8, 0.8);
	glVertex2d(x, y);
	glVertex2d(x + l, y);
	glVertex2d(x + l, y - h);
	glVertex2d(x, y - h);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3d(0.0, 0.8, 0.8);
	glVertex3f( x + 0.025, y, -1.0);
	glVertex3f( x + 0.05, y + 0.035, -1.0);
	glVertex3f( x + 0.075, y, -1.0);

	glEnd();
	/*}

	if (shoot){
		   glBegin(GL_LINE_STRIP);
		   glColor3d(0.0, 0.8, 0.8);
		   glVertex2f( x + 0.06, y + 0.035);
		   glVertex2f( x + 0.06, y + 0.07);
		   glEnd();

	}
	*/

}

void User::handle (const GlutWindow::Event& e){
   const float incx=0.02f;
   const float incy=0.02f;
   
   if ( e.type == GlutWindow::SpecialKey )
    switch ( e.key )
    { case GLUT_KEY_LEFT:  
		if(x > -1.0)  
			x-=incx;
		break;
      case GLUT_KEY_RIGHT: 
		if (x < 0.9)
			x+=incx; 
		break;
	}

   //if ( e.type == GlutWindow::Keyboard ){ 

}
