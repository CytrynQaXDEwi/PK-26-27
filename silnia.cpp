#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int n;
    int silnia=1;
    cout << "podaj n";
    cin >> n;
    if (n<0) {

        cout << "zle";
    }
    while (n>1) {
        silnia*=n;
        n=n-1;

        
    }
    cout << silnia;
    return 0;



}