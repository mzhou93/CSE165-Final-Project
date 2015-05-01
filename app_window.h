
// Ensure the header file is included only once in multi-file projects
#ifndef APP_WINDOW_H
#define APP_WINDOW_H

# include "glut_window.h"
# include "User.h"
# include "Enemy.h"
# include <vector>

// The functionality of your application should be implemented inside AppWindow
class AppWindow : public GlutWindow
 { private :
	static AppWindow* window;
    float _markx, _marky;
    int _w, _h;

 public:
    User* user;
    std::vector< Enemy* > army1;
    std::vector< Enemy* > army2;
    std::vector< Enemy* > army3;
    std::vector< Enemy* > army4;

   public :
	static AppWindow* instance();
    AppWindow ( const char* label, int x, int y, int w, int h );
    void windowToScene ( float& x, float &y );

   private : // functions derived from the base class
    virtual void handle ( const Event& e );
    virtual void draw ();
    virtual void resize ( int w, int h );
 };

#endif // APP_WINDOW_H
