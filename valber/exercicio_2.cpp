#include <iostream>
#include <math.h>

using namespace std;

int main(void)
{
    int a, b, c;

    cout << "Digite o valor de A: " << endl;
    cin >> a;

    cout << "Digite o valor de B: " << endl;
    cin >> b;

    c = 4 * a + b / 3 - 5;
    
    cout << "C = " << c << endl;

    c = 4 * (a + b) / (3 - 5);

    // O resultado é diferente, pois na expressão ocorrem a precedência dos parentesis
    cout << "C = " << c << endl;

    // Outra variação poderia ser, onde a subtração seria feita antes da divisão, gerando sempre uma
    // subtração por um número negativo.
     c = (4 * a + b) / (3 - 5);

    cout << "Resultado = " << pow(a, 2) + 2 * b + c << endl;

    return 0;
}