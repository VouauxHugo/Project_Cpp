#pragma once

#include <cstdlib>
#include <iostream>
#include <string>
#include <fstream> 
#include "carte.hpp"
#include "fcatt.hpp"
#include "fcdef.hpp"
#include "fcgoal.hpp"

class Pays:public Carte, public FcAtt, public FcDef, public FcGoal{
    public:
        Pays()=delete;
        Pays(const std::string& nom, const int attaque, const int defense, const int goal, const int charisme);
        ~Pays(){};
        bool operator==(const Carte& carte) const;
        std::string getNom() const {return this->_nom;};
        void affichage() const;
        int getAttaque() const{return 0;};
        int getDefense() const{return 0;};
        int getGoal() const{return 0;};
        int getCharisme() const {return this->_charisme;};
    private:
        int _charisme;
};