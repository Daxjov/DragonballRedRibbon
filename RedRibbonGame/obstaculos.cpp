#include "obstaculos.h"

Obstaculos::Obstaculos(QObject *parent)
    : QObject{parent}
{}

Obstaculos::Obstaculos(short x, short y,short posx, short posy, short ancho, short alto)
{
    this->x=x;
    this->y=y;
    this->posx=posx;
    this->posy=posy;
    this->ancho=ancho;
    this->alto=alto;
    sprite=new QPixmap(":/Imagenes/SpritesaUsar.png");
    setPos(posx,posy);

}

QRectF Obstaculos::boundingRect() const
{
    return QRectF(0,0,ancho,alto);
}

void Obstaculos::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QRectF posicionSprite(x,y,ancho,alto);
    QRectF dibuja(0,0,ancho,alto);
    painter->drawPixmap(dibuja,*sprite,posicionSprite);
}


