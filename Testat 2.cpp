#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include "../es 17/Testat 4/Testat 4.cpp"
#include <list>
#include <list>



using namespace std;

#define colum 9
#define line 4
#define lager 

class Artikel {


public:

    /*  Konstruktor */

    Artikel () {
        
        
        string name = "";
        int menge;
        string setItemdata();
        string getname();
        string getAmount;
        string resetItemData;
        string determineFreecapacity ;
    }
    void setItemData(string Itemname, int ItemMenge) {

        string name = Itemname ; /*  da geb ich  mal den Name von dem Value Itemname */
        int menge = ItemMenge ;  /*  da geb ich mal den Name von dem Value Itemmenge */
    }
    string getname() {            /* The get method return the value of variable name */

        return "name";

    }
    string getAmount() { /*da get method return the value of variable name */

        return "menge ";
        
    }
    void resetItemData() {

        string name = "";
        int menge  = 0;

    }
};
/* da deklariere ich mal die Printlager */

void printlager(int R, int a, Artikel M[colum][line]);

    /*Starting Function */

void printlager(int R, int a, Artikel M[colum][line]) {

    string lagerplatz;
    string Artikelname = "";

    int Artikelmenge;

    std::cout << "lagerbelegung" << std::endl;
    for (int i = 0; i < line; i++) {

        for (int j = 0; j < colum; ++j) {

            string Artikelname = M[line][colum].getname();
            int Artikelmenge; M[colum][line].getAmount();
            string lagerplatz = "[" + to_string(i) + "," + to_string(j) + "j"; /*   da muss ich mal ein kommentar eingeben  */

            std::cout << lagerplatz << Artikelmenge << Artikelname << std::endl;

            /* da deklariere ich mal die Funktion determineFreecapacity () */

            int determineFreeCapacity(int R, int a, Artikel M[colum][line]); {

                float frei = 0;

                int i = 0;
                int j = 0;

                do {


                    printf("i,j");

                    int i = i++;

                    int j = j++;

                } while (i < line, j < colum);

                if (M[line][colum].getname() == "") {

                    frei++;
                }
                return;
            }
            void addItem(int R, int a, Artikel M[colum][line]); /* da deklariere ich mal die Funktion damit ich mal andere Artikel hinzufügen soll*/
            {
                string Artikelname;
                int Artikelmenge;
                int andere;

                std::cout << "le nom de article s`appelle :" << Artikelname << std::endl;
                std::cout << "la Quantite de article exacte est :" << Artikelmenge << std::endl;

                do {
                    if (determineFreeCapacity(R, a, M) == 0)
                        /* da deklariere ich die frei Kapazität von dem Artikel M */
                    {

                        std::cout << "Es sind keine frei Kapazität :" << std::endl;
                    }
                    for (int i = 0; i < line; i++)
                    {
                        for (int j = 0; j < colum; j++)
                        {

                            if (M[line][colum].getname() == "")/* The get.method return the value of the variable name */
                            {
                                M[line][colum].setItemData(Artikelname, Artikelmenge); /* The set.methode assign a value to the variable Data*/
                                std::cout << "Artikel eingelagert" << Artikelname << Artikelmenge << std::endl;

                                return;

                            }
                        }



                    }std::cout << "andere angabe eingeben /n" << std::endl;
                    cin >> andere;
                    switch (andere) {

                    case 1:
                        std::cout << "nächster angabe eingeben /n " << endl;
                    case 2:
                        std::cout << "Abbruch " << std::endl;

                    default: std::cout << "Fehler ! n " << std::endl;

                    }

                } while (andere != 2); {
                    std::cout << "!angbabe beenden " << std::endl;
                }



            }
            void removeItem(string Artikelname, int Artikelmenge);
            {
                string Artikelname;
                int Artikelmenge;
                int angabe;

                std::cout << "artikelname remove " << std::endl;
                std::cout << " remove artikelmange /n " << std::endl;




            }
        }

        do

        {

            for (int i = 0; i < line; i++)
            {
                for (int j = 0; j < colum; i++)
                {
                    if (M[line][colum].getname() == "")
                    {
                        M[line][colum].removeItem();

                        std::cout << "artkel remove " << std::endl;
                    }

                }

            }
            std::cout << "andere angabe remove / n " << std::endl;






            int main(); {

                string  lager;
                int determineFreeCapacity;

                /*     Matrix   */
                /* const int line =4 */
                /*  cont colum = 9   */

                int artikel; int lager[line][colum];

                /* int arreal [line ][colum ] */

                /* Benutzeroberfläche   */

                do {

                    string Auswahl;

                    int determineFreeCapacity = 0;

                    string lager;

                    string addItem;

                    int removeItem;

                    printlager(line, colum, lager
                        determineFreeCapacity(line, colum, lager);

                    std::cout << "\n bitte wähle sie eine action " << std::endl;
                    std::cout << "\n 1.GrafischeAusgabe der Lagerbelegung " << std::endl;
                    std::cout << "\n 2.Artikel einlagern " << std::endl;
                    std::cout << "\n 3.Artikel auslagern " << std::endl;
                    std::cout << "\n 4.inventurliste ausgeben " << std::endl;
                    std::cout << "\n 5.Anzahl freier lagerplaetze ausgeben " << std::endl;
                    std::cout << "\n Abbruch" << std::endl;

                    cin >> Auswahl;

                    switch ("Auswahl")

                    {
                    case1:
                        printlager(line, colum, lager);
                        break;

                    case2: addItem(line, colum, lager);
                        break;



                    case3:
                        removeItem();
                        break;

                    case4:
                        listInventory();

                        break;

                    case5:
                      int determineFreeCapacity(line, colum, lager
                        std::cout << determineFreeCapacity(line, colum, lager) << std::endl;
                    case6:
                        std::cout << "/nAbgebrochen " << std::endl;
                    }

                    return 0;







                }
            }
        }
    }

// Programm ausführen: STRG+F5 oder Menüeintrag "Debuggen" > "Starten ohne Debuggen starten"
// Programm debuggen: F5 oder "Debuggen" > Menü "Debuggen starten"

// Tipps für den Einstieg: 
//   1. Verwenden Sie das Projektmappen-Explorer-Fensterechseln Sie zu "Datei" > "Öffnen" > "Projekt", und wählen Sie die SLN-Datei aus.