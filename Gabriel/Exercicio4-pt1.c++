#include <iostream>

using namespace std;
//a)
double x,y,z; 

int main (){

cout << "Forneça 2 numeros de ponto flutuante:" << endl;//b)
cin >> x;
cin >> y;

z = x + y;//c)
cout << "Soma de x + y: " << z << endl;

z = (x + y)/2;//d)
cout << "Média de x + y: " << z << endl;

z = x * y;//e)
cout << "Produto de x + y: " << z << endl;

z = x > y ? x : y;//f)
cout << "Maior valor: " << z;
cout << endl;

z = x < y ? x : y;//g)
cout << "Menor valor: " << z;
cout << endl;

return 0;
}