#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

#include "Duree.hpp"
using namespace std;


int main()
{
    Duree duree1(0,24,25),duree2(0,25,24);
    Duree resultat;
    
    duree1.afficher();
    std::cout <<"ET"<<endl;
    duree2.afficher ();
    
    duree1+=duree2;
    
    std::cout <<"done "<<endl;
    duree1.afficher ();


    class personnage (){
        
    public:  /*..Quelques  methodes ...*/
        
    private:
        
        Arme *m_arme;
        
        /* L'Arme est un pointeur l'Object n'est plus coontenue dans Personnage */
    });

    /* allocation memoire pour un Object */

    Personnage::Personnage() : m_arme(0),m_vie(100),m_mama(450)
    {
        m_mama=new mama();
    }
    personnage::personnage(string nomArme,int degatsArme);m_arme(0),
    m_vie(34),m_mama(45);

    nomArme = new nomArme(nomArme,degatsArme);

    /* ne appelle le Constructeur par default */
    /* new nomArme (nomArme ,degatsArme )  */ appelle le constructeur

    par default surcharger

    new /* "renvoi l'adresse de l'object creer ,l'adresse qui est stocke  dans le pointeur " */

    personnage ::~personnage {
        
        delete :m_Arme ;
        
    }

    void personnage::attaquer(personnage &cible)

    {
        cible.recevoirDegats(m_arme->getDegats());
    }

    /* Utilisez  le Pointeur this */

    /* Puisqu'on */

