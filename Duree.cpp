#include "Duree.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
using namespace std;

Duree::Duree(int heures ,int minutes int secondes ):m_heures (heures),m_minutes(minutes),m_secondes(secondes)
{

}

int main(){
int Duree,resultat, duree1(0,10,28),duree2(0,15,2);
resultat =duree1 + duree2;
std::cout<<resultat<<std::endl;

bool opertaor==(Duree const& duree1,Duree const& duree2);
return 0;
}
