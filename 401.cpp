#include <iostream>

using namespace std;

main (){

float r,pole,obwod;
float pi = 3.14;


cout << "podaj r";
cin >> r;
pole = pi * (r*r);
obwod = 2 * pi * r;

cout << "pole: " << pole << endl;
cout << "obwod: " << obwod << endl;

return 0;


}