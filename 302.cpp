#include <iostream>
#include <iomanip>

using namespace std;
int main() {

    int liczba;
    unsigned long long silnia=1;
    cout << "podaj liczbe: ";
    cin >> liczba;

    int i=1;
    
    while (liczba>=i) {

        silnia= silnia*i;
        i++;

    }
    cout << liczba << "!" << silnia << endl;
    return 0;
}