#ifndef PLAINTEXTLIST_H
#define PLAINTEXTLIST_H

#include <QDialog>

namespace Ui {
class PlainTextList;
}

class PlainTextList : public QDialog
{
    Q_OBJECT

public:
    explicit PlainTextList(QWidget *parent = nullptr);
    ~PlainTextList();

private slots:
    void on_pushButton_exit_plaintext_clicked();

    void on_pushButton_generate_plaintext_clicked();

private:
    Ui::PlainTextList *ui;
};

#endif // PLAINTEXTLIST_H
