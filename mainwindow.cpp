#include "foldertocsv.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_open_folder_clicked()
{
    QUrl folder = QFileDialog::getExistingDirectoryUrl(this, "Selectionner un dossier", QUrl("D"));
    directory = new QDir(folder.toLocalFile());
    ui->label_selected_folder->setText(directory->absolutePath());
}

void MainWindow::on_pushButton_select_output_folder_clicked()
{
    QUrl folder = QFileDialog::getExistingDirectoryUrl(this, "Selectionner un dossier", QUrl("D"));
    outputDirectory = new QDir(folder.toLocalFile());
    ui->label_selected_output_folder->setText(outputDirectory->absolutePath());
}

void MainWindow::on_lineEdit_textChanged(const QString &arg1)
{
    outputFilename = arg1;
    ui->label_selected_output_filename->setText(outputFilename + ".csv");
}


void MainWindow::on_pushButton_start_clicked()
{
    FolderToCSV *workerThread = new FolderToCSV(directory, outputDirectory, outputFilename);
        connect(workerThread, SIGNAL(setMaxProgress(int)),
                              SLOT(setMaxProgress(int)));
        connect(workerThread, SIGNAL(displayProgress(int)),
                              SLOT(displayProgress(int)));
        connect(workerThread, SIGNAL(threadFinished()),
                              SLOT(threadFinished()));
        workerThread->start();
        workerThread->setPriority(QThread::TimeCriticalPriority);
}

void MainWindow::setMaxProgress(int value)
{
    ui->progressBar->setMaximum(value);
}

void MainWindow::displayProgress(int value)
{
    ui->progressBar->setValue(value);
}

void MainWindow::threadFinished()
{
    ui->label_status->setText("Opération terminé");
}
