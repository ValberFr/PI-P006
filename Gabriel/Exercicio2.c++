#include <iostream>
#include <cmath>

using namespace std;

int a,b,c;

int main(){

cout << "Forneça 2 numeros inteiros: " << endl;
cin >> a;
cin >> b;

c = 4 * a + b/3 - 5;
cout << "O valor da expressão 4 * a + b/3 - 5 com os valores fornecidos é: " << c << endl;
cout << endl;

c = 4 * (a + b)/(3 - 5);//Asim como na matemaática toda operação dentos de um () é executada primeiro logo nesse caso se divide (a + b) e (3 - 5)
cout << "O valor da expressão 4 * (a + b)/(3 - 5) com os valores fornecidos é: " << c << endl;
cout << endl;

cout << "O valor da expressão a² + 2 * b + c  é: " << pow(a,2) + 2 * b + c << endl;

return 0;
}