#ifndef VELO_HPP
#define VELO_HPP

#include <iostream>
#include "Roue.hpp"
#include "Personne.hpp"

using namespace std;

// Interface de la classe Velo
class Velo
{
private:
    string couleur_;
    int position_;
    int vitesse_;

    Roue roue1_;
    Roue roue2_;

    Personne passager_;

public:
    Velo();
    Velo(string couleur);
    ~Velo();

    string getCouleur();
    int getPosition();
    int getVitesse();

    void avance();
    void recule();
    void accelere();
    void freine();
};

// Definition de la classe Velo
Velo::Velo()
{
    couleur_ = "rose";
    position_ = 0;
    vitesse_ = 0;
}

Velo::Velo(string couleur)
{
    couleur_ = couleur;
    position_ = 0;
    vitesse_ = 0;
}

Velo::~Velo()
{
}

string Velo::getCouleur()
{
    return couleur_;
}

int Velo::getPosition()
{
    return position_;
}

int Velo::getVitesse()
{
    return vitesse_;
}

void Velo::avance()
{
    position_ += vitesse_;
    cout << "Mon velo avance a une vitesse de: " << vitesse_ << endl;
}

void Velo::recule()
{
    cout << "Reculer avec un velo n'est pas une bonne idee!" << endl;
}

void Velo::accelere()
{
    vitesse_++;
}

void Velo::freine()
{
    vitesse_--;
}

#endif

