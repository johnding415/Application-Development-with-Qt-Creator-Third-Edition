#include <QCoreApplication>

#include "workerthread.h"

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);

	WorkerThread* thread = new WorkerThread(&a);
	thread->fetch(""https://raw.githubusercontent.com/PacktPublishing/Application-Development-with-Qt-Creator-Third-Edition/master/Chapter%204/ParsingXml/sample.xml""); // Your XML file here

	return a.exec();
}
