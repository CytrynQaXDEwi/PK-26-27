#include <iostream>

using namespace std;
int main () {

    int a,b,c,pole;

    cout << "Podaj a" << endl;
    cin >> a;
    cout << "Podaj b" << endl;
    cin >> b;
    cout << "podaj c" << endl;
    cin >> c;

    if (a<=0) {

        cout << "nieprawidlowe wymiary";
        return 1;



    }
    else if (b<=0) {

        cout << "npw";
        return 1;
    }
    else if (c<=0) {

        cout << "npw";
        return 1;
    }
    pole= a*b*c;

    cout << "pole: " << pole;

    return 0;

}







