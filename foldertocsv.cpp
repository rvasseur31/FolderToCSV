#include "foldertocsv.h"

FolderToCSV::FolderToCSV(QDir *directory, QDir *outputDirectory, QString outputFileName) :
    directory(directory), outputDirectory(outputDirectory), outputFilename(outputFileName)
{

}

void FolderToCSV::run()
{
    QDir *totalFile = new QDir(directory->absolutePath());
    totalFile->setFilter(QDir::Files);
    emit setMaxProgress(int(totalFile->count()));
    QDirIterator *iterator = new QDirIterator(directory->absolutePath(), QDir::Files);

    QFile *outputCSV = new QFile(outputDirectory->absolutePath() + "/" + outputFilename + ".csv");
    if (outputCSV->open(QIODevice::WriteOnly)) {
        QTextStream textStream(outputCSV);
        textStream << QString("Nom du fichier;Date de création\n");
        int indexProgressBar = 1;
        while (iterator->hasNext()) {
            QFile file(iterator->next());
            emit displayProgress(indexProgressBar);
            indexProgressBar++;
            if (file.open(QIODevice::ReadOnly)) {
                textStream <<  QString(QFileInfo(file).fileName()) + ";" + QString(QFileInfo(file).birthTime().toString("dd-MM-yyyy hh:mm:ss")) + "\n";
            }
        }
    }
    outputCSV->close();
    emit threadFinished();
}
