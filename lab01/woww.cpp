#include <iostream>

using namespace std;

int main() {

    int n, a;

    cout << "Wczytaj n: ";
    cin >> n;

    if (n<=0) {
        cout << "N musi byc wieksze od 0";

        return 1;

    } 
        cout << "Wczytaj a: ";
        cin >> a;

        if (a<0) {

            cout << "A musi byc wieksze od 0";

            return 1;
        
        } 

        int suma = a;

        while (n>1) {

            a++;
            suma = suma + a;
            n--;
            
        }

        cout << "suma: " << suma;

        return 0;
    }
