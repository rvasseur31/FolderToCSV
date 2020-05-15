#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDir>
#include <QThread>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    QDir *directory;
    QDir *outputDirectory;
    QString outputFilename = "output";
    QThread folderToCSVThread;

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_open_folder_clicked();

    void on_lineEdit_textChanged(const QString &arg1);

    void on_pushButton_select_output_folder_clicked();

    void on_pushButton_start_clicked();

    void setMaxProgress(int value);

    void displayProgress(int value);

    void threadFinished();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
