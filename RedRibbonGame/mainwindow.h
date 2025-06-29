#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QList>
#include <fstream>
#include <iostream>
#include <QKeyEvent>
#include "muros.h"
#include "obstaculos.h"
#include "personajes.h"
#include "nivel.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void keyPressEvent(QKeyEvent *event);
private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene1;
    short x,y,ancho,alto;
    QList <Muros*> muros;
    QList <Obstaculos*>obstaculos;
    QList <Personajes*>personajes;
    QList <Nivel*>corazones;
    Nivel *niveles;
    Personajes *goku;
    void cargarMuros(const QString& nombreArchivo);
    void cargarObjetos(const QString& nombreArchivo);
    void cargarPersonajes(const QString& nombreArchivo);
    void cargarCorazones(const QString& nombreArchivo);
    bool evaluarColision();
};
#endif // MAINWINDOW_H
