#include <QCoreApplication>
#include <QDebug>
#include <QProcess>

int main(int argc, char *argv[]) {
  //  QProcess::startDetached("explorer.exe", QStringList() << ".");

  //  QProcess::startDetached("cmd", QStringList() << "/C"
  //                                               << "explorer.exe"
  //                                               << ".");

  QProcess::startDetached("cmd", QStringList() << "/C"
                                               << "start"
                                               << "cmd");

  return 0;
}
