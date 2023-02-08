#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace WIN {
	QT_BEGIN_NAMESPACE
	namespace WIN { class mainWindow; }
	QT_END_NAMESPACE


	class mainWindow : public QMainWindow {
		Q_OBJECT
	public:
		explicit mainWindow(QWidget*parent = 0);
		~mainWindow();

	private:
		UI::mainWindow *ui;
	};
}

#endif // MAINWINDOW_H