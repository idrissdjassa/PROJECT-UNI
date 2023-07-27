#include "personnage.hpp"
#include <iostream>
#include <string>
using namespace std;

/* Personnage.hpp est le header de classe Personnnage */

/* Un constructeur est apppele pour initialiser les attributs qui ne sont pas des objects */

/*La Methode ne doit rien renvoyer */


personnage::~personnage() {  /* Prototype de Destructeur */



}


personnage::personnage() /* Constructeur */ {
    m_vie  =  100;
    m_mama  = 100;
    m_nomArme  =  "Epee rouillee";
    m_degatsArme  =  10;
}

personnage::personnage(std::string nomArme, int degatsArme) {
    m_vie =       100;
    m_mama =      100;
    m_nomArme =    "nomArme";
    m_degatsArme = "degatsArme";
}


void  Personnage::recevoirDegats(int nbDegats)
{

    Personnage::m_vie -= nbDegats;

    /*nbre de Degats recu directement par le Personnage*/
    if (m_vie < 0)/*pour eviter d'avoir une Vie negative */
    {
        m_vie = 0; //on met la vie a 0 cela veut dire mort)
    }
}
void    Personnage::attaquer(Personnage& cible)
{
    cible.recevoirDegats(m_degatsArme);
}

void  Personnage::boirePotionDeVie(int quatitepotion) {

    /*     */
    m_vie += quatitepotion;

    if (m_vie > 100)
    {
        m_vie = 100;
    }
}



void Personnage::changerArme(string nomNouvelleArme, int degatsNouvelleArme) {

    m_nomArme = nomNouvelleArme;
    m_degatsArme = degatsNouvelleArme;

}
bool Personnage::estVivant() {
    return m_vie > 0;
}



int main()
{
    std::cout << "Hello World!\n";
}

// Programm ausführen: STRG+F5 oder Menüeintrag "Debuggen" > "Starten ohne Debuggen starten"
// Programm debuggen: F5 oder "Debuggen" > Menü "Debuggen starten"

// Tipps für den Einstieg: 
//   1. Verwenden Sie das Projektmappen-Explorer-Fenster zum Hinzufügen/Verwalten von Dateien.
//   2. Verwenden Sie das Team Explorer-Fenster zum Herstellen einer Verbindung mit der Quellcodeverwaltung.
//   3. Verwenden Sie das Ausgabefenster, um die Buildausgabe und andere Nachrichten anzuzeigen.
//   4. Verwenden Sie das Fenster "Fehlerliste", um Fehler anzuzeigen.
//   5. Wechseln Sie zu "Projekt" > "Neues Element hinzufügen", um neue Codedateien zu erstellen, bzw. zu "Projekt" > "Vorhandenes Element hinzufügen", um dem Projekt vorhandene Codedateien hinzuzufügen.
//   6. Um dieses Projekt später erneut zu öffnen, wechseln Sie zu "D
