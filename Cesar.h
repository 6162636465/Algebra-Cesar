#pragma once
#include <iostream>
#include <string>

using namespace std;
class Cesar
{
public:
    Cesar(int);
    int clave;
    string cifrado(string);
    string descifrado(string);
    int modulo(int, int);
    string alfabeto = "abcdefghijklmnopqrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    string mensaje;
};

