#include <iostream>

using namespace std;

// Program ma wczytac dwie liczby i wypisac ich sume, np.:
//   Podaj 1 liczbe: 2
//   Podaj 2 liczbe: 3
//   Suma liczb 2 i 3 to 5
// TODO: w programie sa 3 bledy. Znajdz je i popraw.

int main()
{
    int a, b, suma;

    suma = a + b;

    cout << "Podaj 1 liczbe: ";
    cin >> a;
    cout << "Podaj 2 liczbe: ";
    cin >> b;

    cout << "Suma liczb" << a << "i" << b << "to" << "suma" << endl;

    return 0;
}
