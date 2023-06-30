#ifndef SENDMESSAGEUSER_DIALOG_H
#define SENDMESSAGEUSER_DIALOG_H

#include <QDialog>
#include "api.h"
#include <QFile>
#include <QTextStream>


namespace Ui {
class sendmessageuser_Dialog;
}

class sendmessageuser_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit sendmessageuser_Dialog(QWidget *parent = nullptr);
    ~sendmessageuser_Dialog();

private slots:
    void on_confirm_pushButton_clicked();
    void on_back_pushButton_clicked();
    void on_back_chat_pushButton_clicked();
    void UserChatLoader(QByteArray *data);
    void UserChatError(QNetworkReply *rep);
    void on_send_pushButton_clicked();
    void UserSendLoader(QByteArray *data);
    void UserSendError(QNetworkReply *rep);

private:
    Ui::sendmessageuser_Dialog *ui;
    API *ap;
    //یه وکتور از مسیج ها که داخل تابع userchatloader ، به تعداد پیام های موجود، پر بشه

};

#endif // SENDMESSAGEUSER_DIALOG_H
