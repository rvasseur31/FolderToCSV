#ifndef FOLDERTOCSV_H
#define FOLDERTOCSV_H

#include <QThread>
#include <QDirIterator>
#include <QTextStream>
#include <QDateTime>

class FolderToCSV : public QThread
{
    Q_OBJECT
    QDir *directory;
    QDir *outputDirectory;
    QString outputFilename = "output";
public:
    FolderToCSV(QDir *directory, QDir *outputDirectory, QString outputFileName);
protected:
    void run();

signals:
    void setMaxProgress(int value);
    void displayProgress(int value);
    void threadFinished();
};



#endif // FOLDERTOCSV_H
