/*Dilian Badilla,Alberto soto
  clase Interfaz
  versión 1
  esta clase es la encargada de mostrar el menu al usuario y de llamar a los metodos de todas las clases
*/
#include "Interfaz.h"
#include <iostream>
#include <stdio.h>
#include <string.h>
#include "Contacto.h"
#include <cstdlib>
#include <cstring>


Interfaz::Interfaz()
{
    //ctor
}

Interfaz::~Interfaz()
{
    //dtor
}

/*
menu el cual recibe un objeto de la clase Lista_Contactos.
*/
void Interfaz::menu(Lista_Contactos prue)
{

    string cel;
    string hogar;
    string trabajo;
    string nom=" ";
    string tipcon= " ";
    string correo=" ";
    int dato;
    cout << "Ingrese la opcion que desea ejecutar: \n 1.Agregar un contacto. \n 2.Buscar datos de contacto. \n 3.Modificar datos de contacto. \n 4.Borrar Contacto. \n 5.Mostrar lista de contactos  ordenada. \n 6.Mostrar contactos por categoria. \n 8. Salir.";
    string numero;
    cin >>numero;
    int opcion=atoi(numero.c_str());
    Contacto p;

    string nuevovalor;
    while(opcion!=7)
    {
        switch (opcion)
        {
        case 1:

            cout << "Ingrese el nombre y el apellido sin espacio y presione enter."<<endl;
            cin>>nom;

            cout << "Si desea agregar un correo electronico, ingreselo. Sino, ingrese un guion (-) y presione enter."<<endl;
            cin>>correo;

            cout << "Si desea agregar un tipo de contacto, ingreselo (familiar, hogar o trabajo). Sino, ingrese un guion (-) y presione enter."<<endl;
            cin>>tipcon;

            cout << "Si desea agregar un numero de celular, ingreselo. Sino, ingrese un guion (-) y presione enter."<<endl;
            cin>>cel;

            cout << "Si desea agregar un numero de hogar, ingreselo. Sino, ingrese un guion (-) y presione enter."<<endl;
            cin>>hogar;

            cout << "Si desea agregar un numero de trabajo, ingreselo. Sino, ingrese un guion (-) y presione enter."<<endl;
            cin>>trabajo;

            for(int i = 0; i < nom.length(); i++)
            {
                nom[i] = tolower(nom[i]);
            }
            p=new Contacto();
            p.asigne(nom,tipcon,correo,cel,hogar,trabajo);
            prue.agrega(p);
            menu(prue);

            break;

        case 2:

            cout<< "Ingrese el nombre y el apellido de la persona que desea buscar sin espacio y presione enter."<<endl;
            cin>>nom;
            for(int i = 0; i < nom.length(); i++)
            {
                nom[i] = tolower(nom[i]);
            }
            prue.buscacontacto(nom);
            menu(prue);

            break;

        case 3:

            cout<<"Ingrese el nombre y el apellido de la persona que desea modificar sin espacio."<<endl;
            cin>>nom;

            cout<<"Escoja mediante el indice, que quiere modificar de ese contacto. \n 1.Correo electronico. \n 2.Tipo de contacto (familiar, hogar o trabajo). \n 3.Numero de celular. \n 4.Numero de hogar. \n 5.Numero de trabajo."<<endl;
            cin>>dato;

            cout<<"Ingrese el nuevo valor para el atributo escojido"<<endl;
            cin>>nuevovalor;
            for(int i = 0; i < nom.length(); i++)
            {
                nom[i] = tolower(nom[i]);
            }
            prue.modificar(nom, dato, nuevovalor);
            menu(prue);

            break;

        case 4:
            cout<<"Ingrese el nombre y apellido sin espacios del contacto que desea borrar"<<endl;
            cin>>nom;
            for(int i = 0; i < nom.length(); i++)
            {
                nom[i] = tolower(nom[i]);
            }
            prue.borracontacto(nom);

            menu(prue);
            break;

        case 5:
            prue.show();
            menu(prue);
            break;

        case 6:

            cout<<"Ingrese el tipo de contacto y se mostrara la lista esta categoria(familiar,hogar,trabajo)."<<endl;
            cin>>nom;

            for(int i = 0; i < nom.length(); i++)
            {
                nom[i] = tolower(nom[i]);
            }
            prue.categoria(nom);
            menu(prue);
            break;

        case 7:
            opcion = 7;
            break;


        default :
            exit(0);

        }
    }
}
