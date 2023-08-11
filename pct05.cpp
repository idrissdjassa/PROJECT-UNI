#include <iostream>
#include "Duree.hpp"

using namespace std;

Duree::Duree(int heures,int minutes,int secondes):m_heures(heures),m_minutes(minutes),m_secondes(secondes){
    
    bool operator==(Duree const& a , Duree  const& b);
    
    if (duree1 != duree2){
        std::cout<<"les Duree sont pas inegaux !"<< std::endl;
    }
    /* De la meme Maniere que on peut ecrire */
    int a(8),b(8);
    if (a==b){
        std::vout <<"a et b sont pas Egaux"<<std::endl;
    }
    bool opoerator==(Duree const& a, Duree const& b)
    if(a.m_heures==b.m_heures && a.m_minutes==b.m_minutes && a.m_secondes==b.m_minutes){
        return true;
        else
            return false;
    }
    
    int main (){
        Duree operator (Duree const& a,Duree const& b);
        Duree resultat ;
        resultat = a.calculeAddition(b);
        /* utilise une Methode pour effectuer l'Addiction */        return resultat ;
    }
    class Duree(){
        void operator +=(Duree const& a);
        
        Duree a (0,20,89),b (0,50,55);
        a+=b;
        
        /* Ce donc le Compilateur Traduira est donc */
        
        Duree a (0,20,89),b(0,50,55);
        a.operator+=(b);
        
        
    }
    
    void Duree::operator
    +=(Duree const& b ){
        
    /* Ajouter les Secondes */
        m_secondes+=b.m_secondes ;
        /* On met le nombre de   Secondes inferieur a 60 s*/
        m_secondes+=m_secondes /60;
        
        /*Ajouter les minutes*/
        m_minutes +=b.m_minutes;
        /* On met le nombre de minutes inferieur a 60 */
        
        /*Ajouter les heures */
        m_heures=b.m_heures;
        
        
    }
    
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
        return 0;
        
        /* Notre Operator ne devrait ps retourner Void mais une reference sur Duree*/
        
    }
    Duree operator+(Duree const& a,Duree const& b){
        Duree resultat ;
        resultat=a.calculeaddiction(b);
        /* on utilise une methode de duree pour effectuer Addiction  ou on Utilise une reference calculeAddiction pour calculer Addition */
        return resultat;
    }
    class operator+(Duree const& a ,  Duree const& b ){
        Duree resultat ;
        resultat =a.calculeAddiction(b); /*on utilise la methode de Duree pour effectuer Addiction */
        return resultat;}
    
    /* Creation d'une Copie de a  et Ensuite Utilisation d' un racourcir sur cette Copie */
    
    
    Duree operator+(Duree const& a ,Duree const& b)
    
    Duree copie(a); //On utilise le Constructeur de la copie de la Classe
    
    copie(a)+=b ;/*On appelle la methode d'addiction qui modifie Object de la Copie */
    
    
    return copie (a); Eton renvoi le resultat .Ni a ni b n'ont change .
    
    
    /* Proposition de Cloner le Project */
    
/* autres Operateur de  Soustraction - Operator -() Operator-=()
                        multiplication *   Operator *() Opeartor *=()
                        division /          Operator /() Operator /=()
                        modulo %            opERATOR %() Operator %=()
     */
        
    }

/* Utilisation des Operateurs de Flux */

