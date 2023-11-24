#include "code.h"
#include "ui_form.h"

MaClasse::MaClasse(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MaClasse)
{
    ui->setupUi(this);
    setFixedSize(681,498);
    ui->display_type->hide();
    ui->display_result->hide();
}

MaClasse::~MaClasse()
{
    delete ui;
}


void MaClasse::on_pushButton_clicked()
{
    QString type = "";
    QString type2 = "";
    int decalage = ui->spinBox->value();
    if(ui->radioButton->isChecked()){
        type = "Chiffrement du message";
        type2 = "chiffrer";
    }else if(ui->radioButton_2->isChecked()){
        type = "Déchiffrement du message";
            type2 = "déchiffrer";
            decalage = decalage*-1;
    }
    QString message = "";
    message = ui->textEdit_1->toPlainText();
    if(message.isEmpty()){
        QMessageBox::critical(this,"Erreur","Le message à "+type2+" est vide.");
    }else{
        encrypt_decrypt(message,decalage);
    }
    ui->display_type->setText(type);
}

void MaClasse::encrypt_decrypt(QString message, int decalage){
    QString result = "";
    for(QChar lettre : message){
        if(lettre.isLetter()){
            QChar base = (lettre.isUpper()) ? 'A' : 'a';
            result += QChar((lettre.toLatin1() - base.toLatin1() + decalage)%26 + base.toLatin1());
        }else{
            result += lettre;
        }
    }
    ui->display_type->show();
    ui->display_result->setText(result);
    ui->display_result->show();
    ui->textEdit_1->setText("");
}
