/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_open_folder;
    QLabel *label_selected_folder;
    QPushButton *pushButton_start;
    QProgressBar *progressBar;
    QLabel *label_status;
    QPushButton *pushButton_select_output_folder;
    QLabel *label_selected_output_folder;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_selected_output_filename;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_open_folder = new QPushButton(centralwidget);
        pushButton_open_folder->setObjectName(QString::fromUtf8("pushButton_open_folder"));
        pushButton_open_folder->setGeometry(QRect(0, 90, 251, 61));
        label_selected_folder = new QLabel(centralwidget);
        label_selected_folder->setObjectName(QString::fromUtf8("label_selected_folder"));
        label_selected_folder->setGeometry(QRect(290, 90, 541, 61));
        pushButton_start = new QPushButton(centralwidget);
        pushButton_start->setObjectName(QString::fromUtf8("pushButton_start"));
        pushButton_start->setGeometry(QRect(250, 380, 221, 101));
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setEnabled(true);
        progressBar->setGeometry(QRect(250, 480, 221, 23));
        progressBar->setValue(0);
        progressBar->setTextVisible(true);
        label_status = new QLabel(centralwidget);
        label_status->setObjectName(QString::fromUtf8("label_status"));
        label_status->setGeometry(QRect(480, 470, 211, 41));
        pushButton_select_output_folder = new QPushButton(centralwidget);
        pushButton_select_output_folder->setObjectName(QString::fromUtf8("pushButton_select_output_folder"));
        pushButton_select_output_folder->setGeometry(QRect(0, 250, 251, 61));
        label_selected_output_folder = new QLabel(centralwidget);
        label_selected_output_folder->setObjectName(QString::fromUtf8("label_selected_output_folder"));
        label_selected_output_folder->setGeometry(QRect(290, 250, 541, 61));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(250, 10, 531, 61));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label->setLayoutDirection(Qt::LeftToRight);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(250, 170, 531, 61));
        label_2->setFont(font);
        label_2->setLayoutDirection(Qt::LeftToRight);
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(0, 310, 251, 31));
        label_selected_output_filename = new QLabel(centralwidget);
        label_selected_output_filename->setObjectName(QString::fromUtf8("label_selected_output_filename"));
        label_selected_output_filename->setGeometry(QRect(290, 290, 541, 61));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 31));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_open_folder->setText(QCoreApplication::translate("MainWindow", "Ouvrir un dossier", nullptr));
        label_selected_folder->setText(QCoreApplication::translate("MainWindow", "Aucun dossier selectionn\303\251", nullptr));
        pushButton_start->setText(QCoreApplication::translate("MainWindow", "Executer", nullptr));
        label_status->setText(QString());
        pushButton_select_output_folder->setText(QCoreApplication::translate("MainWindow", "Selectionner un dossier de sortie", nullptr));
        label_selected_output_folder->setText(QCoreApplication::translate("MainWindow", "Aucun dossier selectionn\303\251", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Dossier \303\240 analyser", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Fichier de sortie", nullptr));
        lineEdit->setText(QCoreApplication::translate("MainWindow", "output", nullptr));
        label_selected_output_filename->setText(QCoreApplication::translate("MainWindow", "output.csv", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
