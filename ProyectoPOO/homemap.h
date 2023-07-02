#ifndef HOMEMAP_H
#define HOMEMAP_H

#include <QDialog>
#include "plaintextlist.h"

namespace Ui {
class HomeMap;
}

class HomeMap : public QDialog
{
    Q_OBJECT

public:
    explicit HomeMap(QWidget *parent = nullptr);
    ~HomeMap();

private slots:
    void on_pushButton_plainText_clicked();

private:
    Ui::HomeMap *ui;
    PlainTextList *plainText;
};

#endif // HOMEMAP_H
