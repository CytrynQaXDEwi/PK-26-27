#include <iostream>
#include <iomanip>

using namespace std;

int main () {

    int liczba;

    cout << "podaj liczbe: " << endl;
    cin >> liczba;

    if (liczba%2!=0) {

        cout << "Parzysta: NIE";
    }
    cout << "Parzysta: TAK";

    if (liczba%8!=0) {

        cout << "Podzielna przez 8: NIE";
    }
    else {

        cout << "Podzielna przez 8: TAK";
    }

    if (liczba%16!=0) {

        cout << "Podzielna przez 16: NIE";
    }
    else {

        cout << "Podzielna przez 16: TAK";

    }

    cout << "osemkowo:" << showbase << oct << liczba << endl;
    cout << "szesnastkowo:" << showbase << hex << liczba << endl;

    return 0;

    





}