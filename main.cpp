#include <iostream>

using namespace std;

int main() {
    int wahl = 0;

    cout << "Taschenrechner"  << endl;
    cout << "1 fuer Addition"  << endl;
    cout << "2 fuer Subtraktion"  << endl;
    cout << "3 fuer Multiplikation"  << endl;
    cout << "4 fuer Division"  << endl;

    cin >> wahl;

    switch (wahl) {
        case 1:
            cout << "Gruppenmitglied 1 kann hier die Addition implementieren."  << endl;
            // hier Funktion für Addition einfügen
            break;
        case 2:
            cout << "Gruppenmitglied 1 kann hier die Subtraktion implementieren."  << endl;
            // hier Funktion für die Subtraktion einfügen
            break;
        case 3:
            cout << "Gruppenmitglied 1 kann hier die Multiplikation implementieren."  << endl;
            int Zahl1mul;
            int Zahl2mul;
            int Zahl3mul;


            cout << "Zahl 1" << endl;
            cin >> Zahl1mul;
            cout << "Zahl 2" << endl;
            cin >> Zahl2mul;
            Zahl3mul = Zahl1mul * Zahl2mul;

            cout << Zahl3mul << endl;

            break;
        case 4:
            cout << "Gruppenmitglied 1 kann hier die Division implementieren."  << endl;
            // hier die Funktion für die Division einfügen
            break;
        default:
            cout << "Falsche Auswahl, das Programm wird beendet."  << endl;
            break;
    }


    return 0;
}