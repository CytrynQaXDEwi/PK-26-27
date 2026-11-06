#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int n,a;
    int liczba=1;
    int max=a;
    cout << "podaj n";
    cin >> n;
    cout << "podaj a";
    cin >> a;
   while (liczba<n) {
    cin >> a;

    liczba=liczba+1;
    if (a>max) {
        max=a;
    }
}
cout << "max" << max;
return 0;
}