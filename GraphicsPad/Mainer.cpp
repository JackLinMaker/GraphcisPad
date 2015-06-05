#include <QtWidgets\qapplication.h>
#include <MyGLWindow.h>


int main(int argc, char* argv[])
{
	QApplication app(argc, argv);
	MyGLWindow window;
	window.show();
	return app.exec();
}