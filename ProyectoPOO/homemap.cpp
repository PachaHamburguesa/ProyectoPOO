#include "homemap.h"
#include "ui_homemap.h"
#include <QPixmap>

HomeMap::HomeMap(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HomeMap)
{
    ui->setupUi(this);
    QPixmap placeres("/home/pacha/Escritorio/PROYECTO POO/Cerro.png");
    int w = ui->label_placeresMap->width();
    int h = ui->label_placeresMap->height();
    ui->label_placeresMap->setPixmap(placeres.scaled(w, h, Qt::KeepAspectRatio));
}

HomeMap::~HomeMap()
{
    delete ui;
}

void HomeMap::on_pushButton_plainText_clicked()
{
    hide();
    plainText = new PlainTextList(this);
    plainText->show();
}

