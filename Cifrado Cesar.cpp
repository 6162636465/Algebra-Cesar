#include <iostream>
#include <string>
#include "Cesar.h"

using namespace std;

int main()
{
    int clave_n;
    string mensaje;
    cout << "Introduzca el mensaje: ";
    getline(cin, mensaje);
    cout << "Introduzca la clave: ";
    cin >> clave_n;
    Cesar algo(clave_n);
    string mensajecifrado, mensajedescifrado;
    mensajecifrado = algo.cifrado(mensaje);
    cout << mensajecifrado << endl;
    mensajedescifrado = algo.descifrado(mensajecifrado);
    cout << mensajedescifrado;
    return 0;
}

