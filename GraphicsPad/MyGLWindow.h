#ifndef MY_GL_WINDOW
#define MY_GL_wINDOW

#include <QtWidgets\qopenglwidget.h>

class MyGLWindow : public QOpenGLWidget
{
protected:
	void initializeGL();
	void paintGL();
public:

};

#endif