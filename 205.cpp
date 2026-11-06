#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    float liczba;

    cout << "podaj liczbe";
    cin >> liczba;

    if (liczba>= 0.0 && liczba<=4.4) {

        cout << "ocena: niedostateczny " << "2.0";
    }
    else if (liczba>=4.5 && liczba<=5.2) {

        cout << "ocena: dostateczny " << "3.0";
    }
    else if (liczba>=5.3 && liczba<=6.2) {

        cout << "ocena ponad dost " << "3.5";
    
    }
    else if (liczba>=6.3 && liczba<=7.2) {

        cout << "ocena dobry " << "4.0";
    }
    else if (liczba>=7.3 && liczba<=8.2) {

        cout << "ocena ponad dobry " << "4.5";
    }
    else if (liczba>=8.3 && liczba<=9) {

        cout << "ocena bdb " << "5.0";
    }
    else {

        cout << "nieprawidlowa liczba";
        return 1;
    }
}