#ifndef DEF_ARME
#define DEF_ARME

#include <iostream>
#include <string>

class Arme {

	/*Ce fichier contient la Definition  de la Classe */

	/* Definition de la Mode */

public:
	Arme();
	Arme(std::string nom, int degats);
	void changer(std::string nom, int degats);
	void afficher() const;
	void afficherEtat() const;


private:
	std::string m_nom;
	int m_degats;

};



#endif
