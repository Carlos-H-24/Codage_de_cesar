# Codage_de_cesar

## Fonctionnalités Principales

Ce projet implémente un programme de chiffrement de César à l'aide de l'interface graphique Qt. Il offre une interface utilisateur simple pour chiffrer et déchiffrer des messages en utilisant le célèbre chiffrement de César.

- Chiffrement et déchiffrement de messages en temps réel.
- Interface graphique intuitive avec options de configuration du décalage.
- Facile à utiliser, adapté aux utilisateurs novices comme aux experts en sécurité.

## Contenu du Projet

Le code source est contenu dans les fichiers suivants :
- `code.h` : Contient les déclarations des classes et des fonctions nécessaires.
- `form.ui` : Fichier de conception pour l'interface utilisateur créé avec Qt Designer.
- `main.cpp` : Le point d'entrée du programme, contenant la fonction `main`.

## Utilisation

1. Clonez ce dépôt Git. `git clone https://github.com/Carlos-H-24/Codage_de_cesar.git`
2. Assurez-vous d'avoir les bibliothèques Qt installées.
3. Compilez le projet avec votre environnement de développement préféré.

## Comment Utiliser l'Application

1. Lancez l'application.
2. Saisissez le message que vous souhaitez chiffrer ou déchiffrer dans la zone de texte.
3. Sélectionnez le type d'opération (Chiffrement ou Déchiffrement) et spécifiez le décalage.
4. Cliquez sur le bouton "Valider" pour effectuer l'opération choisie.

## Exemple de Code

Le code source fourni illustre la mise en œuvre du chiffrement de César avec Qt. La classe `MaClasse` contient les méthodes nécessaires pour gérer l'interface utilisateur et effectuer le chiffrement.

```cpp
#include "code.h"
#include "ui_form.h"

MaClasse::MaClasse(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MaClasse)
{
    // Initialisation de l'interface utilisateur
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
    // Gestion du clic sur le bouton
    // ...
}

void MaClasse::encrypt_decrypt(QString message, int decalage)
{
    // Fonction de chiffrement/déchiffrement
    // ...
}
