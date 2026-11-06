#include <iostream>
#include <iomanip>
using namespace std;

main () {

    float p,r,i;
    int t,ai;

    cout << "wpisz p: " << endl;
    cin >> p;
    cout << "wpisz r: " << endl;
    cin >> r;
    cout << "wpisz t: " << endl;
    cin >> t;

    i= (p*r*t)/100;
    ai= (p*r*t)/100;
    
    cout << fixed << setprecision(2);
    cout << "I: " << i << endl;
    cout << "ai: " << ai << endl;

    return 0;
    



}