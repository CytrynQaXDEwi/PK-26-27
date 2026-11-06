#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int opcja;

    cout << "wybierz opcje";
    cin >> opcja;

    if (opcja==1) {

        float a,b,suma,roznica,iloczyn,iloraz;

        cout << "podaj a: ";
        cin >> a;
        cout << "podaj b: ";
        cin >> b;

        if (b==0) {

            cout << "nie mozna";
        }

        suma= a+b;
        roznica= a-b;
        iloczyn= a*b;
        iloraz= a/b;

        cout << fixed << setprecision(12);
        cout << "suma: " << suma << endl;
        cout << "roznica: " << roznica << endl;
        cout << "iloczyn: " << iloczyn << endl;
        cout << "iloraz: " << iloraz << endl;

    }
    if (opcja==2) {

        double a,b,suma,roznica,iloczyn,iloraz;

        cout << "podaj a: ";
        cin >> a;
        cout << "podaj b: ";
        cin >> b;

        if (b==0) {

            cout << "nie mozna";
        }

        suma= a+b;
        roznica= a-b;
        iloczyn= a*b;
        iloraz= a/b;

        cout << fixed << setprecision(12);
        cout << "suma: " << suma << endl;
        cout << "roznica: " << roznica << endl;
        cout << "iloczyn: " << iloczyn << endl;
        cout << "iloraz: " << iloraz << endl;


    }
    else if (opcja==3) {

        cout << "zle";

        return 1;

    }

    return 0;





}