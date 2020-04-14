#include "Cesar.h"
#include <iostream>
#include <string>

using namespace std;
Cesar::Cesar(int clave_n) {
    clave = clave_n;
}

string Cesar::cifrado(string mensaje) {
    string cifrado;
    int maximo;
    for (int i = 0; i < mensaje.size(); ++i) {
        maximo = alfabeto.find(mensaje[i]);
        maximo += clave;

        if (maximo >= alfabeto.size())
            maximo = modulo(maximo, alfabeto.size());
        cifrado.push_back(alfabeto[maximo]);
    }
    return cifrado;
}


string Cesar::descifrado(string mensaje) {
    string descifrado;
    int maximo;
    for (int i = 0; i < mensaje.size(); ++i) {
        maximo = alfabeto.find(mensaje[i]);
        maximo -= clave;

        if (maximo >= alfabeto.size()) {
            maximo = modulo(maximo, alfabeto.size());
        }
        descifrado.push_back(alfabeto[maximo]);
    }
    return descifrado;
}

int Cesar::modulo(int a, int b) {
    if (a >= 0)
        return a - (a / b) * b;
    else
        return a - ((a / b) - 1) * b;
}
