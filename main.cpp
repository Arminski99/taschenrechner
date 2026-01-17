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
<<<<<<< Updated upstream
            cout << "Gruppenmitglied 1 kann hier die Subtraktion implementieren."  << endl;
        double zahl1sub, zahl2sub, ergebnissub;
        cout << "Subtraktion" << endl;
        cout << "Gib die erste Zahl ein: ";
        cin >> zahl1sub;
        cout << "Gib die zweite Zahl ein: ";
        cin >> zahl2sub;
        ergebnissub = zahl1sub - zahl2sub;
        cout << "Ergebnis:" << zahl1sub << "-" << zahl2sub << "= " << ergebnissub << endl;


=======
            double zahl1sub, zahl2sub, ergebnissub;
            cout << "Subtraktion" << endl;
            cout << "Gib die erste Zahl ein: ";
            cin >> zahl1sub;
            cout << "Gib die zweite Zahl ein: ";
            cin >> zahl2sub;
            ergebnissub = zahl1sub - zahl2sub;
            cout << "Ergebnis:" << zahl1sub << "-" << zahl2sub << "= " << ergebnissub << endl;
>>>>>>> Stashed changes
            break;
        case 3:
            cout << "Gruppenmitglied 1 kann hier die Multiplikation implementieren."  << endl;
            // hier die Funktion für die Multiplikation einfügen
            break;
        case 4:
            cout << "Gruppenmitglied 1 kann hier die Division implementieren."  << endl;
        double zahl1div, zahl2div, ergebnisdiv;
        cout << "Division" << endl;
        cout << "Gib die erste Zahl ein: ";
        cin >> zahl1div;
        cout << "Gib die zweite Zahl ein: ";
        cin >> zahl2div;
        ergebnisdiv = zahl1div / zahl2div;
        cout << "Ergebnis:" << zahl1div << "/" << zahl2div << "= " << ergebnisdiv << endl;
            break;

        default:
            cout << "Falsche Auswahl, das Programm wird beendet."  << endl;
            break;
    }


    return 0;
}