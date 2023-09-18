#include <iostream>

using namespace std;

int main(void)
{
    char ch1, ch2, ch3;
    int a, b;

    cout << "Digite o valor de Ch1: ";
    cin >> ch1;

    cout << "Digite o valor de Ch2: ";
    cin >> ch2;

    ch3 = ch1 - 1;

    if (ch3 > 32)
    {
        cout << "\'" << ch3 << "\'"
             << " - " << dec << int(ch3) << " - " << oct << int(ch3) << " - " << hex << int(ch3) << endl;
    }
    else
    {
        ch3 = '_';
        cout << "\'" << ch3 << "\'"
             << " - " << dec << int(ch3) << " - " << oct << int(ch3) << " - " << hex << int(ch3) << endl;
    }

    ch3 = ch2 - 1;

    if (ch3 > 32)
    {
        cout << "\'" << ch3 << "\'"
             << " - " << dec << int(ch3) << " - " << oct << int(ch3) << " - " << hex << int(ch3) << dec << endl;
    }
    else
    {
        ch3 = '_';
        cout << "\'" << ch3 << "\'"
             << " - " << dec << int(ch3) << " - " << oct << int(ch3) << " - " << hex << int(ch3) << dec << endl;
    }

    isupper(ch1) ? ch3 = 'A' : ch3 = ' ';
    cout << "Ch3: " << ch3 << endl;

    islower(ch2) ? ch3 = 'a' : ch3 = ' ';
    cout << "Ch3: " << ch3 << endl;

    isdigit(ch1) || isdigit(ch2) ? ch3 = '1' : ch3 = ' ';
    cout << "Ch3: " << ch3 << endl;

    cout << "Digite o primeiro valor: ";
    cin >> a;

    cout << "Digite o segundo valor: ";
    cin >> b;

    a > b ? cout << a << " eh maior que " << b << endl : a < b ? cout << b << " eh maior que " << a << endl
                                                               : cout << "Estes numeros sao iguais" << endl;

    return 0;
}