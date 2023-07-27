#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

#include <string>

class Personnage
{
public:

    void recevoirDegats(int nbDegats); /* Constructeur */
    void attaquer(Personnage& cible);
    void boirePotionDeVie(int quantitePotion);
    void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
    bool estVivant();
    void personnage(std::string nomArme, int degatsArme);
    /* On peut surcharger le Constructeur car ils s'agit d'une Methode */
private:

    int m_vie;
    int m_mana;
    std::string m_nomArme; //Pas de using namespace std, il faut donc mettre std:: devant string
    int m_degatsArme;
 

    
};

~personnage();

#endif
