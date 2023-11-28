#ifndef MACLASSE_H
#define MACLASSE_H

#include <QMainWindow>
#include <QtWidgets>

QT_BEGIN_NAMESPACE
namespace Ui { class MaClasse; }
QT_END_NAMESPACE

class MaClasse : public QMainWindow
{
    Q_OBJECT

public:
    MaClasse(QWidget *parent = nullptr);
    void encrypt_decrypt(QString message, int decalage);
    ~MaClasse();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MaClasse *ui;
};
#endif // MACLASSE_H
