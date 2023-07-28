#include "Arme.hpp" /* implementer la Methode  contenue dans la Classe*/

using namespace std;

Arme::Arme() :m_nom("Epee rouille"), m_degats(10)

{

}
Arme::Arme(string nom, int degats) : m_nom(nom), m_degats(degats)
{

}

void Personnage::afficherEtat()const
{
    cout << "vie:" << m_vie << endll;
    cout << "Mana :" << m_mama << endl;
    m_arme.afficher();
}
void Arme::changer(string nom, int degats)
{
    m_nom = nom;
    m_degats = degats;
}
void Arme::afficher()const
{
    cout << "Arme :" << m - nom << "degats" << m_degats << endl;
}



/*
Les lignes de code qui declarent correctement une Classe */

class point() {

public:

    point(int x, int y);

private:

    int m_x;
    int m_y;
}; /* ou */

class point() {

public:
    set_x(int x);
    set_y(int y);

private:
    int m_x;
    int m_y;

};



/* considerons la classe point qui contient la Methode getX() la bonne definition de la Methode getX() est */

int point::getX() {


    return m_x;

}



/* Appelez afficher Etat dans le main()*/

int main()
{
    /*  Creation des personnages */

    personnage David, goliath("Epee aiguisee", 20)

        /* Au combats */

        goliath, attaquer(david)
        david, boirepotionDeVie(20)
        goliath.attaquer(david);
    david.atttaquer(goliath);
    goliath.changerArme(" Double hache tranchante veneuse de la mort ", 40);
    goliath.attaquer(david);

   /*Temps mort !Voyons voir de la Vie de Chacun...*/
    cout << "David" << endl
        david.afficherEtat();
    cout << endl << "Goliath" << endl;
    goliath.afficherEtat();

    return 0;
}
