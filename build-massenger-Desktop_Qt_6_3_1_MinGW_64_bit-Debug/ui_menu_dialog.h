/********************************************************************************
** Form generated from reading UI file 'menu_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_DIALOG_H
#define UI_MENU_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_menu_Dialog
{
public:
    QPushButton *logout_pushButton;
    QPushButton *pushButton;
    QSplitter *splitter;
    QPushButton *joingroup_pushButton;
    QPushButton *joinchannel_pushButton;
    QSplitter *splitter_2;
    QPushButton *creategroup_pushButton;
    QPushButton *createchannel_pushButton;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QPushButton *SMS_user_pushButton;
    QPushButton *SMS_group_pushButton;
    QPushButton *SMS_channel_pushButton;
    QWidget *widget1;
    QGridLayout *gridLayout;
    QPushButton *getuserlist_pushButton;
    QPushButton *getgrouplist_pushButton;
    QPushButton *getchannellist_pushButton;

    void setupUi(QDialog *menu_Dialog)
    {
        if (menu_Dialog->objectName().isEmpty())
            menu_Dialog->setObjectName(QString::fromUtf8("menu_Dialog"));
        menu_Dialog->resize(1132, 631);
        menu_Dialog->setStyleSheet(QString::fromUtf8("background-image: url(:/Source/@metawalls.jpg);"));
        logout_pushButton = new QPushButton(menu_Dialog);
        logout_pushButton->setObjectName(QString::fromUtf8("logout_pushButton"));
        logout_pushButton->setGeometry(QRect(560, 510, 141, 41));
        QFont font;
        font.setPointSize(14);
        logout_pushButton->setFont(font);
        pushButton = new QPushButton(menu_Dialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(420, 510, 131, 41));
        pushButton->setFont(font);
        splitter = new QSplitter(menu_Dialog);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(440, 350, 236, 40));
        splitter->setOrientation(Qt::Horizontal);
        joingroup_pushButton = new QPushButton(splitter);
        joingroup_pushButton->setObjectName(QString::fromUtf8("joingroup_pushButton"));
        joingroup_pushButton->setFont(font);
        splitter->addWidget(joingroup_pushButton);
        joinchannel_pushButton = new QPushButton(splitter);
        joinchannel_pushButton->setObjectName(QString::fromUtf8("joinchannel_pushButton"));
        joinchannel_pushButton->setFont(font);
        splitter->addWidget(joinchannel_pushButton);
        splitter_2 = new QSplitter(menu_Dialog);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setGeometry(QRect(420, 290, 286, 40));
        splitter_2->setOrientation(Qt::Horizontal);
        creategroup_pushButton = new QPushButton(splitter_2);
        creategroup_pushButton->setObjectName(QString::fromUtf8("creategroup_pushButton"));
        creategroup_pushButton->setFont(font);
        splitter_2->addWidget(creategroup_pushButton);
        createchannel_pushButton = new QPushButton(splitter_2);
        createchannel_pushButton->setObjectName(QString::fromUtf8("createchannel_pushButton"));
        createchannel_pushButton->setFont(font);
        splitter_2->addWidget(createchannel_pushButton);
        widget = new QWidget(menu_Dialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(110, 100, 230, 136));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        SMS_user_pushButton = new QPushButton(widget);
        SMS_user_pushButton->setObjectName(QString::fromUtf8("SMS_user_pushButton"));
        SMS_user_pushButton->setFont(font);

        gridLayout_2->addWidget(SMS_user_pushButton, 0, 0, 1, 1);

        SMS_group_pushButton = new QPushButton(widget);
        SMS_group_pushButton->setObjectName(QString::fromUtf8("SMS_group_pushButton"));
        SMS_group_pushButton->setFont(font);

        gridLayout_2->addWidget(SMS_group_pushButton, 1, 0, 1, 1);

        SMS_channel_pushButton = new QPushButton(widget);
        SMS_channel_pushButton->setObjectName(QString::fromUtf8("SMS_channel_pushButton"));
        SMS_channel_pushButton->setFont(font);

        gridLayout_2->addWidget(SMS_channel_pushButton, 2, 0, 1, 1);

        widget1 = new QWidget(menu_Dialog);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(810, 100, 155, 136));
        gridLayout = new QGridLayout(widget1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        getuserlist_pushButton = new QPushButton(widget1);
        getuserlist_pushButton->setObjectName(QString::fromUtf8("getuserlist_pushButton"));
        getuserlist_pushButton->setFont(font);

        gridLayout->addWidget(getuserlist_pushButton, 0, 0, 1, 1);

        getgrouplist_pushButton = new QPushButton(widget1);
        getgrouplist_pushButton->setObjectName(QString::fromUtf8("getgrouplist_pushButton"));
        getgrouplist_pushButton->setFont(font);

        gridLayout->addWidget(getgrouplist_pushButton, 1, 0, 1, 1);

        getchannellist_pushButton = new QPushButton(widget1);
        getchannellist_pushButton->setObjectName(QString::fromUtf8("getchannellist_pushButton"));
        getchannellist_pushButton->setFont(font);

        gridLayout->addWidget(getchannellist_pushButton, 2, 0, 1, 1);


        retranslateUi(menu_Dialog);

        QMetaObject::connectSlotsByName(menu_Dialog);
    } // setupUi

    void retranslateUi(QDialog *menu_Dialog)
    {
        menu_Dialog->setWindowTitle(QCoreApplication::translate("menu_Dialog", "Dialog", nullptr));
        logout_pushButton->setText(QCoreApplication::translate("menu_Dialog", "logout", nullptr));
        pushButton->setText(QCoreApplication::translate("menu_Dialog", "back", nullptr));
        joingroup_pushButton->setText(QCoreApplication::translate("menu_Dialog", "joingroup", nullptr));
        joinchannel_pushButton->setText(QCoreApplication::translate("menu_Dialog", "joinchannel", nullptr));
        creategroup_pushButton->setText(QCoreApplication::translate("menu_Dialog", "creategroup", nullptr));
        createchannel_pushButton->setText(QCoreApplication::translate("menu_Dialog", "createchannel", nullptr));
        SMS_user_pushButton->setText(QCoreApplication::translate("menu_Dialog", "sendmessageuser", nullptr));
        SMS_group_pushButton->setText(QCoreApplication::translate("menu_Dialog", "sendmessagegroup", nullptr));
        SMS_channel_pushButton->setText(QCoreApplication::translate("menu_Dialog", "sendmessagechannel", nullptr));
        getuserlist_pushButton->setText(QCoreApplication::translate("menu_Dialog", "getuserlist", nullptr));
        getgrouplist_pushButton->setText(QCoreApplication::translate("menu_Dialog", "getgrouplist", nullptr));
        getchannellist_pushButton->setText(QCoreApplication::translate("menu_Dialog", "getchannellist", nullptr));
    } // retranslateUi

};

namespace Ui {
    class menu_Dialog: public Ui_menu_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_DIALOG_H
