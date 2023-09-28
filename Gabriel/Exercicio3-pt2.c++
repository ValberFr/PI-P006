#include <iostream>

using namespace std;

int num1,num2;


int main (){

cout << "Forneça 2 numeros inteiros: " << endl;//a) e b)
cin >> num1;
cin >> num2;
cout << endl;

(num1 > num2) ? cout << num1 << " é maior." << endl : num1 < num2 ? cout << num2 << " é maior." << endl : cout <<"Estes números são iguais" << endl;

int maiornum = (num1 > num2) ? num1 : num2;//c)

maiornum % 2 == 0 ? cout << maiornum << " é par." << endl : cout << maiornum << " é impar." << endl;

return 0;
}