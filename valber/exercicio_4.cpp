#include <iostream>
#include <math.h>

using namespace std;

int main(void)
{
    double x, y, z, raio, ponto_y, ponto_x;

    cout << "Digite o valor de X: ";
    scanf("%lf", &x);

    cout << "Digite o valor de Y: ";
    scanf("%lf", &y);

    z = x + y;
    cout << "Soma dos valores: " << z << endl;

    z = (x + y) / 2;
    cout << "Media dos valores: " << z << endl;

    z = x * y;
    cout << "Produtos dos valores: " << z << endl;

    x > y ? z = x : x < y ? z = y
                          : z = x;
    cout << "Maior valor: " << z << endl;

    x > y ? z = y : x < y ? z = x
                          : z = x;
    cout << "Menor valor: " << z << endl;

    cout << "Digite o valor do raio: ";
    scanf("%lf", &raio);

    cout << "Diametro: " << raio * 2 << endl;
    cout << "Perimetro: " << 3.14 * raio * 2 << endl;
    cout << "Area: " << 3.14 * pow(raio, 2) << endl;

    cout << "Digite o valor de X: ";
    scanf("%lf", &ponto_x);

    cout << "Digite o valor de Y: ";
    scanf("%lf", &ponto_y);

    (ponto_x > 0 && ponto_y > 0) ? cout << "O ponto está no primeiro quadrante!" << endl : (ponto_x < 0 && ponto_y > 0) ? cout << "O ponto está no segundo quadrante!" << endl
                                                                                        : (ponto_x < 0 && ponto_y < 0)   ? cout << "O ponto está no terceiro quadrante!" << endl
                                                                                        : (ponto_x > 0 && ponto_y < 0)   ? cout << "O ponto está no quarto quadrante!" << endl
                                                                                                                         : cout << "O ponto está sobre um dos eixos!" << endl;

    return 0;
}