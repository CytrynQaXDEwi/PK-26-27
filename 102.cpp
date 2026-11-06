#include <iostream>
#include <iomanip>

using namespace std;

main () {

    char znak;

    cout << "podaj znak: ";
    cin >> znak;
    cout << "znak: " << znak << endl;
    cout << int(znak) << showbase << hex << "(" << int(znak) << showbase << dec << ")";
    return 0;



}