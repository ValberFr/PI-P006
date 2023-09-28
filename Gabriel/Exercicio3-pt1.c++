#include <iostream>

using namespace std;

char cha1,cha2,cha3;//a)

int main (){

cout << "Forneça 2 caracteres" << endl;//b)
cin >> cha1;
cin >> cha2;
cout << endl;

cha3 = cha1 - 1;//c)
cout << "Caractere anterior em decimal: " << int(cha3) << endl;
cout << oct << "Caractere anterior em octal: " << int(cha3) << endl;
cout << hex << "Caractere anterior em hexadecimal: " << int(cha3) << endl;
cout << dec << "Caractere anterior em: " << cha3 << endl;
cout << endl;

cha3 = cha2 - 1;//d)
cout << "Caractere anterior em decimal: " << int(cha3) << endl;
cout << oct << "Caractere anterior em octal: " << int(cha3) << endl;
cout << hex << "Caractere anterior em hexadecimal: " << int(cha3) << endl;
cout << dec << "Caractere anterior em: " << cha3 << endl;
cout << endl;

cha3 = (isupper(cha1) ? 'A': ' ');//e
cout << cha3 << endl;
cout << endl;

cha3 = (islower(cha2) ? 'a' : ' ');//f
cout << cha3 << endl;
cout << endl;

cha3 = (isdigit(cha1) || isdigit(cha2) ?  1 :  ' ');//g
cout << cha3 << endl;
cout << endl;

return 0;
}