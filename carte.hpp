#pragma once

#include <cstdlib>
#include <iostream>
#include <string>
#include <fstream> 

typedef enum CategorieType{pays, supporters, coach, sponsors, gardien, attaquant, defenseur, defaut} Type;

class Carte{
    //La classe n'est pas déclarée virtuelle pure car nous devons créer un tableau de carte dans le MAIN
    public:
        virtual ~Carte(){};
        bool operator==(Carte* carte) const;
        std::string getNom() const {return this->_nom;};
        virtual void affichage() const;
        Type getType() const{return _typeCarte;};
        virtual int getAttaque() const {return 0;};
        virtual int getDefense() const {return 0;};
        virtual int getGoal() const {return 0;};
        virtual int getCharisme() const {return 0;};
    protected:
        std::string _nom;
        Type _typeCarte;
};