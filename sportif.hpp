#pragma once

#include <cstdlib>
#include <iostream>
#include <string>
#include <fstream> 
#include "carte.hpp"

class Sportif:public Carte{
    public:
        virtual ~Sportif(){};
        bool operator==(const Carte& carte) const;
        std::string getNom() const {return this->_nom;};
        virtual void affichage() const =0;
        virtual int getAttaque() const{return 0;};
        virtual int getDefense() const{return 0;};
        virtual int getGoal() const{return 0;};
        virtual int getCharisme() const {return 0;};
    protected:
        std::string _nationalite;
};