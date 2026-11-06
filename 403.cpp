#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int a,n;
    int suma=0;
    cout << "podaj n";
    cin >> n;
    if (n<0) {

        cout << "n musi byc wieksze od 0";
        return 1;
    }

    cout << "podaj a";
    cin >> a;
    if (a<=0) {

        cout << "a nie jest naturalne";
        return 1;
    }
    while (n>0) {
        
        a= a + 1;
        suma=suma+a;
        n= n- 1;
    }
    cout << suma;

return 0;
}