#include <iomanip>
#include <iostream>

using namespace std;

int main() {

    int konwers;

    cout << "wybierz sposob konwersji:";
    cin >> konwers;

    if (konwers=1) {

        float temperatura,b;

        cout << "podaj temperature: ";
        cin >> temperatura;
        if (temperatura<0) {

            cout << "za zimno";
            return 1;
        }

        b= (temperatura*1.8) + 32;
        cout << fixed << setprecision(2);
        cout << temperatura << "st. celsjusza to" << b << "st. farenheita";

        
    }
    if (konwers=2) {

        float temperatura,b;

        cout << "podaj temperature: ";
        cin >> temperatura;
        if (temperatura<0) {

            cout << "za zimno";
            return 1;
        }

        b= (temperatura-32)*5/9;
        cout << fixed << setprecision(2);
        cout << temperatura << "st. farenheita to" << b << "st. celsjusza";

    
}
return 0;
}