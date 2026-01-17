#include <iostream>

using namespace std;

int main() {
    int wahl = 0;

    cout << "Taschenrechner"  << endl;
    cout << "1 fuer Addition"  << endl;
    cout << "2 fuer Subtraktion"  << endl;
    cout << "3 fuer Multiplikation"  << endl;
    cout << "4 fuer Division"  << endl;

    if (!(cin >> wahl)) return 1;

    switch (wahl) {
        case 1: { 
            float* values = new float[2];
            cout << "Erste Zahl: "  << endl;
            cin >> values[0];
            cout << "Zweite Zahl: "  << endl;
            cin >> values[1];
            
            cout << "Resultat: " << values[0] + values[1] << endl;

            delete[] values; 
            break;
        } 
            
        case 2:
            cout << "Gruppenmitglied 1 kann hier die Subtraktion implementieren."  << endl;
        double zahl1sub, zahl2sub, ergebnissub;
        cout << "Subtraktion" << endl;
        cout << "Gib die erste Zahl ein: ";
        cin >> zahl1sub;
        cout << "Gib die zweite Zahl ein: ";
        cin >> zahl2sub;
        ergebnissub = zahl1sub - zahl2sub;
        cout << "Ergebnis:" << zahl1sub << "-" << zahl2sub << "= " << ergebnissub << endl;



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