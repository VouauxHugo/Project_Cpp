#pragma once

#include <cstdlib>
#include <iostream>
#include <string>
#include <fstream> 
#include "carte.hpp"

class Booster:public Carte{
    public:
        virtual ~Booster(){};
        bool operator==(const Carte& carte) const;
        std::string getNom() const {return this->_nom;};
        int getRarete() const {return this->_rarete;};
        virtual void affichage() const =0;
        virtual int getAttaque() const{return 0;};
        virtual int getDefense() const{return 0;};
        virtual int getGoal() const{return 0;};
        virtual int getCharisme() const {return 0;};
    protected:
        int _rarete;
};