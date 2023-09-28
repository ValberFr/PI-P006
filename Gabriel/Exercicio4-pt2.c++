#include <iostream>
#include <cmath>

using namespace std;

double raio; 

int main (){

cout << "Informe o raio do circulo: ";
cin >> raio;

cout << "O diâmetro do circulo é de: " << raio * 2 << endl;
cout << "A circunferência do circulo é de: " << raio * 2 * 3.14 << endl;
cout << "A área do circulo é de: " << 3.14*pow(raio,2) << endl;

return 0;
}