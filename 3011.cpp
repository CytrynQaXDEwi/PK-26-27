#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    char jednostka,f,c,k;
    float temperatura;

    cout << "wczytaj temp: " << endl;
    cin >> temperatura;

    cout << "wybierz jednostke: " << endl;
    cin >> jednostka;


    if (jednostka==f) {

        double tc,tk,tf;
        tf=temperatura;
        tc=(temperatura-32)*5/9;
        tk=tc+273.15;
        cout << fixed << setprecision(2);

        cout << "tf: " << tf << endl;
        cout << "tc: " << tc << endl;
        cout << "tk: " << tk << endl;
    }
    else if (jednostka==k) {

        double tc,tf,tk;
        tk=temperatura;
        tc=temperatura-273.15;
        tf=(tc*9/5)+32;
        cout << fixed << setprecision(2);

        cout << "tk: " << tk << endl;
        cout << "tc: " << tc << endl;
        cout << "tf: " << tf << endl;
        return 0;
    }
    else if (jednostka==c) {

        double tf,tk,tc;
        tc=temperatura;
        tf=(tc*9/5)-32;
        tk=tc+273.15;
        cout << fixed << setprecision(2);

        cout << "tc: " << tc << endl;
        cout << "tf: " << tf << endl;
        cout << "tk: " << tk << endl;


    }
    else {

        cout << "zla jednostka";
        return 1;
    }
}