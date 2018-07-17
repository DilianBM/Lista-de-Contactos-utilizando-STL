/*Dilian Badilla, Alberto soto
  clase Contacto
  versión 1
  esta clase Contacto tiene las caracteristicas del contacto como nombre,numero,correo y un multimapa donde contiene los numeros de telegfono crea un contacto con estos atributos
*/
#include <iostream>
#include "Contacto.h"
#include<map>

Contacto::Contacto()
{
    nombre="";
}
/*
constructor que clona contactos
*/
Contacto::Contacto(Contacto *h)
{
    nombre=h->nombre;
    tipocontacto=h->tipocontacto;
    correo=h->correo;

}
Contacto::~Contacto()
{
    //dtor
}
/*
asigna los datos al contacto
*/
void Contacto::asigne(string n, string t,string co, string tc,string th, string tt)
{
    nombre=n;
    tipocontacto=t;
    correo=co;
    multmap.insert ( std::make_pair ("Celular",tc) );
    multmap.insert ( std::pair<string,string>("Hogar",th) );
    multmap.insert ( std::pair<string,string>("Trabajo",tt) );
}

string Contacto::getTel(string n)
{
    multimap<string,string>::iterator it=multmap.find(n);
    if (it==multmap.end())
        return "no lo hallo";
    else
        return "si lo hallo";
}
/*
sobrecarga el operador < para que se el sort pueda ordenar objetos
*/
bool  Contacto::operator< (const Contacto &e)
{
    if(this->nombre< e.nombre)
    {
        return true;
    }
    else
    {
        return false;
    }
}


