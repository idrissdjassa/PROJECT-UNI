// Testat 4.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <string>
#include <vector>
#include<cmath>


using namespace std;

#define colum 9
#define line 4


class Artikel {

public:

    /* kontruktor */



   Artikel(){

       string name = "";
       int menge;

    }
   void setItemData(string Itemname, int Itemmenge)
   {
       string name = Itemname; /* ich gebe mal dem Name den Value Itemname*/
       
       int menge = Itemmenge;/* ich gebe mal der Menge den Value Itemmenge*/
   }
   string getname() {

       return "name";
   }

   string getAmount(){

       return "menge";
   }
   
  void resetItemData() /* reset hilf,damit ich die Objekte in der Klasse löscht*/
  {  string name = "";
      int menge = 0;
   }

};

/* deklariere ich mal printlager*/

void printlager(int R, int a, Artikel M[colum][line]);

/*Starting Function*/


void printlager(int R, int a, Artikel M[colum][line]) {


    string lagerplatz;
    string Artilelname = "";

    int Artikelmenge;

    std::cout << "lagerbelegung " << std::endl;

    for (int i = 0; i < line; ++i) {

        for (int j = 0; j < colum; ++j) {

            string Artikelname = M[line][colum].getname();
            int Artikelmenge = M[colum][line].getAmout(); /*nicht klar*/
            string Lagerplatz = "[" + to_string(i) + "," + to_string(j) + "j"; /* da muss ich ein  Kommentar einegeben */

            std::cout << Lagerplatz << Artikelname << Artikelmenge << std::endl;


            /* da deklariere ich mal die Funktion determineFreecapacity ()*/

            int determineFreeCapacity(int R, int a, Artikel M[colum][line])
            {

                float frei = O;

                int i = 0;
                int j = 0;

                do
                {
                    printf 
                    
                    (i, j)

                        int ++i;

                    int ++j;

                } while (i < line, j < colum);

                if (M[line][colum].getname == "") {

                    frei++;
                }


                return frei;
            }

            void addItem(int R, int a, Artikel M[colum][line])
            {

                string Artikelname;
                int Artikelmenge;
                int andere;

                std::cout << " le nom de article s`appelle :" << Artikelmenge << std:::endl;
                std::cout << " la quantite de article est exactement:" << Artikelmenge << std::endl;
                do {
                    if (determineFreecapacity(R, a, M) == 0) {

                        std::cout << "Es sind keine frei Kapazität " << std::endl;
                    }   for (int i = 0; i < line; i++)
                    {

                        for (int j = 0; j < colum; j++)
                        {
                            if (
                                M[line][colum].getname() == 0)
                            {

                                M[line][colum].setItemData(Artikelname, Artikelmenge);
                                std::cout << "Artikel aingelagert/n"<< Artikelmenge << Artikelname << std::endl;
                                return;

                            }
                        }
                    }
                    std::cout << "andere angabe eingeben/n" << std::endl;

                    cin >> andere;

                    switch (andere) {

                        case 1;
                            std::cout << "nächster angabe eingeben /n" << endl;
                            case 2;
                                std::cout << "Abbruch" << std::endl;

                            default: std::cout << "Fehler !n" << std::endl;
                    }
                } while (andere != 2) {
                    std::cout << "!angabe beenden" << std::endl;
                }
            }

            void removeItem ()

            {
                string artikelname;
                int artikelmenge;
                int angabe;


                std::cout << " artikelname remove " << std::endl;
                std::cout << "remove artikelmenge /n" << std::endl;  




                do  
                
                {
                    for (int i = 0; i < line; i++)
                    {
                        for (int j = 0; j < colum; i++)
                        {
                            if (M[line][colum].getname() == "")
                            {
                                M[line][colum].removeItem(arteikelname, artikelmenge);

                                std::cout << "artikel remove " << std::endl;


                            }ednl;
                        }
                    }
                    std::cout << " andere angabe remove /n" << std::endl;










                    int main (){
                        
                        string lager;
                        string determineFreeCapacity;


                        /*   Matrix */

                        /*  const int line = 4 */

                        /*   const colum = 9  */

                        int artikel; int  lager[line][colum];

                        /*   int arreal [line ][colum] */


                        /* Benutzeroberfläche */


                     

                        do {
                            string  Auswahl;

                            string  lager;
                            string addItem;
                            int removeItem;

                            printlager(line, colum, lager);
                            determineFreeCapacity(line, colum, lager);

                            std::cout << "\n bitte wählen sie eine action" << std::endl;
                            std::cout << "1.Grafische Ausgabe der Lagerbelegung " << std::endl;
                            std::cout << "2.Artikel einlagern " << std::endl;
                            std::cout << "3.Artikel auslagern " << std::endl;
                            std::cout << "4.inventurliste ausgeben " << std::endl;
                            std::cout << "5.Anzahl freier lagerplaetze ausgen" << std::endl;
                            std::cout << "  Abbruch " << std::endl;

                            cin >> Auswahl;

                            switch (Auswahl)

                            {
                            case1:

                                printlager(line, colum, lager);
                                break;

                            case2:
                                addItem(line, colum, lager);
                                break;

                            case3:
                                removeItem();
                                break;

                            case4:
                                listInventory();

                                break;
                            case5:
                                determineFreeCapacity(line, colum, lager);

                                std::cout << determineFrrecapacity(line, colum, lager) << std::endl;

                            case6:
                                std::cout << "/n Abgebrochen " << std::endl;

                            default:cout << "/n Fehler " << "nur [1-5] erlaubt "
                                << endl;
                            }
                        } while (Auswahl != 6)

                            return 0;
















                    

                        
                    
               


                  




















































































































































































































































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
//   6. Um dieses Projekt später erneut zu öffnen, wechseln Sie zu "Datei" > "Öffnen" > "Projekt", und wählen Sie die SLN-Datei aus.
