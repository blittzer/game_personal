#include "mainWindow.h"
#include <QApplication>

int main(int argc, char *argv[]) {
	
	QApplication a(argc, argv);
	mainWindow game;
	game.show();

	return a.exec;
}