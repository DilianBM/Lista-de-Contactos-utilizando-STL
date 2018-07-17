#ifndef INTERFAZ_H
#define INTERFAZ_H
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <Interfaz.h>
#include "Lista_Contactos.h"
#include <cstring>

class Interfaz
{
public:
    Interfaz();
    virtual ~Interfaz();
    void menu(Lista_Contactos h);
protected:

private:
};

#endif // INTERFAZ_H
