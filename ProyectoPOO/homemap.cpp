#include "homemap.h"
#include "ui_homemap.h"
#include <QPixmap>
#include "placereslabel.h"

HomeMap::HomeMap(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HomeMap)
{
    ui->setupUi(this);
    QPixmap placeres("/home/pacha/Escritorio/PROYECTO POO/Cerro.png");
    int w = ui->label_placeresMap->width();
    int h = ui->label_placeresMap->height();
    ui->label_placeresMap->setPixmap(placeres.scaled(w, h, Qt::KeepAspectRatio));

    connect(ui->label_placeresMap, SIGNAL(Mouse_Pos()), this, SLOT(Mouse_current_pos()));
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

void HomeMap::Mouse_current_pos()
{
    if(ui->label_placeresMap->x == 10 && ui->label_placeresMap->y == 10){
        ui->label_streetname_exit->setText(QString("Matta 36"));
        ui->label_rent_exit->setText(QString("120k"));
        ui->label_distanceto_exit->setText(QString("2 cuadras"));
        ui->label_phone_exit->setText(QString("+56993739082"));
    }
    else if(ui->label_placeresMap->x == 30 && ui->label_placeresMap->y == 30){
        ui->label_streetname_exit->setText(QString("Placeres 204"));
        ui->label_rent_exit->setText(QString("150k"));
        ui->label_distanceto_exit->setText(QString("3 cuadras"));
        ui->label_phone_exit->setText(QString("+56901439538"));
    }
    else
    {
        ui->label_streetname_exit->setText(QString("---"));
        ui->label_rent_exit->setText(QString("---"));
        ui->label_distanceto_exit->setText(QString("---"));
        ui->label_phone_exit->setText(QString("---"));
    }
}
