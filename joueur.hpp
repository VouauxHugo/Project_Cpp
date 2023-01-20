#pragma once
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
#include <fstream>
#include <list>
#include <vector>
#include "deck.hpp"

class Joueur{
	public:
		Joueur(const std::string& nom, std::vector<Carte*> cartes);
		~Joueur(){};
      	void affichage() const;
      	void setDeck(Deck* deck1, Deck* deck2);
      	Deck* getDeck(const int indice);
      	void newCarte(Carte* carte);
      	Deck newDeck();
      	Deck newDeck(Deck* other);
	private :
		std::string _nom;
		std::vector<Carte*> _lCartes;
		std::list<Deck*> _lDeck;
};