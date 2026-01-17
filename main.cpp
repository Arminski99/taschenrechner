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
            break;
        case 3:
            cout << "Gruppenmitglied 1 kann hier die Multiplikation implementieren."  << endl;
            break;
        case 4:
            cout << "Gruppenmitglied 1 kann hier die Division implementieren."  << endl;
            break;
        default:
            cout << "Falsche Auswahl, das Programm wird beendet."  << endl;
            break;
    }

    return 0;
}