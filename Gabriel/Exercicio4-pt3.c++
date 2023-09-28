#include <iostream>

using namespace std;

double x,y; 

int main (){

cout << "Informe o valor de X e Y:" << endl;
cin >> x;
cin >> y;

x > 0 && y > 0 ? cout << "Está no 1 quadrante." << endl: x < 0 && y > 0 ? cout << "Está no 2 quadrante." << endl : x < 0 && y < 0 ? cout 
<< "Está no 3 quadrante." << endl : x > 0 && y < 0 ? cout << "Está no 4 quadrante." << endl : cout << "Está sobre um dos eixos" << endl;

return 0 ;
}