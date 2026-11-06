#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int podstawa,wykladnik;
    long long wynik=1;
    cout << "podaj podstawe";
    cin >> podstawa;
    cout << "podaj wykladnik";
    cin >> wykladnik;
    if (wykladnik<0) {
        cout << "zle";
        return 1;
    }
    for (int i=0;wykladnik>i;i++) {
        wynik= wynik*podstawa;


    }
    cout << wynik;
    return 0;



}