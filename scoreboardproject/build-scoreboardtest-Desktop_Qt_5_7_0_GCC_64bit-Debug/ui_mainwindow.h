/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *timout_1;
    QPushButton *timeout_2;
    QPushButton *buzzer;
    QPushButton *start_stop;
    QPushButton *reset;
    QPushButton *home_plus2;
    QPushButton *home_plus3;
    QPushButton *home_plus1;
    QPushButton *home_min1;
    QPushButton *visit_plus2;
    QPushButton *visit_min1;
    QPushButton *visit_plus1;
    QTextEdit *score_visitor_2;
    QPushButton *visit_plus3;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QLCDNumber *score_visitor;
    QLCDNumber *score_home;
    QLCDNumber *period_time;
    QLCDNumber *shotClock;
    QPushButton *shot_start;
    QPushButton *reset1;
    QPushButton *reset2;
    QLCDNumber *period;
    QPushButton *period_p1;
    QPushButton *period_m1;
    QSpinBox *shot_set;
    QPushButton *set;
    QLCDNumber *home_foul;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLCDNumber *home_toi;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLCDNumber *visi_toi;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QLCDNumber *visit_foul;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QLCDNumber *player_number;
    QLCDNumber *lcdNumber_7;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(768, 490);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        timout_1 = new QPushButton(centralWidget);
        timout_1->setObjectName(QStringLiteral("timout_1"));
        timout_1->setGeometry(QRect(180, 40, 80, 22));
        timeout_2 = new QPushButton(centralWidget);
        timeout_2->setObjectName(QStringLiteral("timeout_2"));
        timeout_2->setGeometry(QRect(180, 70, 80, 22));
        buzzer = new QPushButton(centralWidget);
        buzzer->setObjectName(QStringLiteral("buzzer"));
        buzzer->setGeometry(QRect(270, 41, 80, 51));
        start_stop = new QPushButton(centralWidget);
        start_stop->setObjectName(QStringLiteral("start_stop"));
        start_stop->setGeometry(QRect(490, 40, 80, 22));
        reset = new QPushButton(centralWidget);
        reset->setObjectName(QStringLiteral("reset"));
        reset->setGeometry(QRect(490, 70, 80, 22));
        home_plus2 = new QPushButton(centralWidget);
        home_plus2->setObjectName(QStringLiteral("home_plus2"));
        home_plus2->setGeometry(QRect(30, 200, 41, 22));
        home_plus3 = new QPushButton(centralWidget);
        home_plus3->setObjectName(QStringLiteral("home_plus3"));
        home_plus3->setGeometry(QRect(90, 200, 41, 22));
        home_plus1 = new QPushButton(centralWidget);
        home_plus1->setObjectName(QStringLiteral("home_plus1"));
        home_plus1->setGeometry(QRect(140, 170, 41, 22));
        home_min1 = new QPushButton(centralWidget);
        home_min1->setObjectName(QStringLiteral("home_min1"));
        home_min1->setGeometry(QRect(140, 130, 41, 22));
        visit_plus2 = new QPushButton(centralWidget);
        visit_plus2->setObjectName(QStringLiteral("visit_plus2"));
        visit_plus2->setGeometry(QRect(690, 200, 41, 22));
        visit_plus2->setAutoFillBackground(false);
        visit_plus2->setCheckable(false);
        visit_min1 = new QPushButton(centralWidget);
        visit_min1->setObjectName(QStringLiteral("visit_min1"));
        visit_min1->setGeometry(QRect(580, 130, 41, 22));
        visit_plus1 = new QPushButton(centralWidget);
        visit_plus1->setObjectName(QStringLiteral("visit_plus1"));
        visit_plus1->setGeometry(QRect(580, 170, 41, 22));
        score_visitor_2 = new QTextEdit(centralWidget);
        score_visitor_2->setObjectName(QStringLiteral("score_visitor_2"));
        score_visitor_2->setGeometry(QRect(1160, 180, 104, 61));
        visit_plus3 = new QPushButton(centralWidget);
        visit_plus3->setObjectName(QStringLiteral("visit_plus3"));
        visit_plus3->setGeometry(QRect(630, 200, 41, 22));
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(180, 100, 391, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(570, 30, 20, 71));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(160, 30, 20, 71));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(centralWidget);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(180, 10, 391, 20));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        score_visitor = new QLCDNumber(centralWidget);
        score_visitor->setObjectName(QStringLiteral("score_visitor"));
        score_visitor->setGeometry(QRect(630, 130, 101, 61));
        score_visitor->setAutoFillBackground(true);
        score_visitor->setFrameShape(QFrame::WinPanel);
        score_visitor->setDigitCount(3);
        score_home = new QLCDNumber(centralWidget);
        score_home->setObjectName(QStringLiteral("score_home"));
        score_home->setGeometry(QRect(30, 130, 101, 61));
        score_home->setAutoFillBackground(true);
        score_home->setFrameShape(QFrame::WinPanel);
        score_home->setDigitCount(3);
        period_time = new QLCDNumber(centralWidget);
        period_time->setObjectName(QStringLiteral("period_time"));
        period_time->setGeometry(QRect(370, 40, 101, 51));
        period_time->setInputMethodHints(Qt::ImhNone);
        period_time->setDigitCount(4);
        period_time->setMode(QLCDNumber::Hex);
        period_time->setSegmentStyle(QLCDNumber::Filled);
        shotClock = new QLCDNumber(centralWidget);
        shotClock->setObjectName(QStringLiteral("shotClock"));
        shotClock->setGeometry(QRect(210, 169, 81, 71));
        shotClock->setSmallDecimalPoint(false);
        shotClock->setDigitCount(2);
        shotClock->setSegmentStyle(QLCDNumber::Filled);
        shot_start = new QPushButton(centralWidget);
        shot_start->setObjectName(QStringLiteral("shot_start"));
        shot_start->setGeometry(QRect(210, 250, 81, 31));
        reset1 = new QPushButton(centralWidget);
        reset1->setObjectName(QStringLiteral("reset1"));
        reset1->setGeometry(QRect(300, 169, 80, 22));
        reset2 = new QPushButton(centralWidget);
        reset2->setObjectName(QStringLiteral("reset2"));
        reset2->setGeometry(QRect(300, 199, 80, 22));
        period = new QLCDNumber(centralWidget);
        period->setObjectName(QStringLiteral("period"));
        period->setGeometry(QRect(410, 170, 83, 71));
        period->setDigitCount(3);
        period->setSegmentStyle(QLCDNumber::Flat);
        period_p1 = new QPushButton(centralWidget);
        period_p1->setObjectName(QStringLiteral("period_p1"));
        period_p1->setGeometry(QRect(500, 170, 41, 31));
        period_m1 = new QPushButton(centralWidget);
        period_m1->setObjectName(QStringLiteral("period_m1"));
        period_m1->setGeometry(QRect(500, 210, 41, 31));
        shot_set = new QSpinBox(centralWidget);
        shot_set->setObjectName(QStringLiteral("shot_set"));
        shot_set->setGeometry(QRect(300, 250, 81, 31));
        set = new QPushButton(centralWidget);
        set->setObjectName(QStringLiteral("set"));
        set->setGeometry(QRect(300, 230, 80, 22));
        home_foul = new QLCDNumber(centralWidget);
        home_foul->setObjectName(QStringLiteral("home_foul"));
        home_foul->setGeometry(QRect(30, 320, 64, 61));
        home_foul->setDigitCount(2);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(100, 320, 51, 22));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(100, 360, 51, 22));
        home_toi = new QLCDNumber(centralWidget);
        home_toi->setObjectName(QStringLiteral("home_toi"));
        home_toi->setGeometry(QRect(160, 320, 64, 61));
        home_toi->setDigitCount(2);
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(230, 360, 51, 22));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(230, 320, 51, 22));
        visi_toi = new QLCDNumber(centralWidget);
        visi_toi->setObjectName(QStringLiteral("visi_toi"));
        visi_toi->setGeometry(QRect(610, 320, 64, 61));
        visi_toi->setDigitCount(2);
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(680, 360, 51, 22));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(680, 320, 51, 22));
        visit_foul = new QLCDNumber(centralWidget);
        visit_foul->setObjectName(QStringLiteral("visit_foul"));
        visit_foul->setGeometry(QRect(480, 320, 64, 61));
        visit_foul->setDigitCount(2);
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(550, 360, 51, 22));
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(550, 320, 51, 22));
        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(290, 320, 16, 20));
        checkBox_2 = new QCheckBox(centralWidget);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(460, 320, 16, 20));
        player_number = new QLCDNumber(centralWidget);
        player_number->setObjectName(QStringLiteral("player_number"));
        player_number->setGeometry(QRect(320, 342, 41, 41));
        player_number->setDigitCount(2);
        lcdNumber_7 = new QLCDNumber(centralWidget);
        lcdNumber_7->setObjectName(QStringLiteral("lcdNumber_7"));
        lcdNumber_7->setGeometry(QRect(390, 340, 41, 41));
        lcdNumber_7->setDigitCount(2);
        spinBox = new QSpinBox(centralWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(320, 380, 41, 23));
        spinBox_2 = new QSpinBox(centralWidget);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setGeometry(QRect(390, 380, 41, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 768, 19));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        timout_1->setText(QApplication::translate("MainWindow", "Timeout 1", 0));
        timeout_2->setText(QApplication::translate("MainWindow", "Timeout 2", 0));
        buzzer->setText(QApplication::translate("MainWindow", "Buzzer", 0));
        start_stop->setText(QApplication::translate("MainWindow", "Start / Stop", 0));
        reset->setText(QApplication::translate("MainWindow", "Reset", 0));
        home_plus2->setText(QApplication::translate("MainWindow", "+ 2", 0));
        home_plus3->setText(QApplication::translate("MainWindow", "+ 3", 0));
        home_plus1->setText(QApplication::translate("MainWindow", "+ 1", 0));
        home_min1->setText(QApplication::translate("MainWindow", "- 1", 0));
        visit_plus2->setText(QApplication::translate("MainWindow", "+ 2", 0));
        visit_min1->setText(QApplication::translate("MainWindow", "- 1", 0));
        visit_plus1->setText(QApplication::translate("MainWindow", "+ 1", 0));
        visit_plus3->setText(QApplication::translate("MainWindow", "+ 3", 0));
        shot_start->setText(QApplication::translate("MainWindow", "Start / Stop", 0));
        reset1->setText(QApplication::translate("MainWindow", "Reset 1", 0));
        reset2->setText(QApplication::translate("MainWindow", "Reset 2", 0));
        period_p1->setText(QApplication::translate("MainWindow", "+ 1", 0));
        period_m1->setText(QApplication::translate("MainWindow", "- 1", 0));
        set->setText(QApplication::translate("MainWindow", "Set", 0));
        pushButton->setText(QApplication::translate("MainWindow", "+ 1", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "- 1", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "- 1", 0));
        pushButton_4->setText(QApplication::translate("MainWindow", "+ 1", 0));
        pushButton_5->setText(QApplication::translate("MainWindow", "- 1", 0));
        pushButton_6->setText(QApplication::translate("MainWindow", "+ 1", 0));
        pushButton_7->setText(QApplication::translate("MainWindow", "- 1", 0));
        pushButton_8->setText(QApplication::translate("MainWindow", "+ 1", 0));
        checkBox->setText(QString());
        checkBox_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
