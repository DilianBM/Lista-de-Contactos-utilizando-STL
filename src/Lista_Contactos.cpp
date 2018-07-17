/*Dilian Badilla,Alberto soto
  clase Lista_Contactos
  versión 1
  esta clase se insetan contactos al vector, tambien se manejan modificaciones,inclusiones de contactos,etc
*/
#include "Lista_Contactos.h"
#include <vector>
#include <iostream>
#include <algorithm>
#include "Contacto.h"
#include <cstring>
using namespace std;
Lista_Contactos::Lista_Contactos()
{
}

Lista_Contactos::~Lista_Contactos()
{
    vect.clear();
}

void print (Contacto c)
{
    cout << c.nombre <<endl;
}
/*
no recibe ni retorna nada y muestra la lista por nombres
*/
void Lista_Contactos::show()
{
    cout<<"Lista "<<"("<<vect.size()<<" elementos):"<<endl;
    for_each(vect.begin(), vect.end(), print);
}

/*
no retorna nada y agrega al vector los contactos
*/
void Lista_Contactos::agrega(Contacto h)
{
    vect.push_back(h);
    sort(vect.begin(),vect.end());
}
/*
no retorna nada y recibe el nombre de la persona a borrar
*/
void Lista_Contactos::borracontacto(string nom)
{
    bool encontrado = false;

    for(int i=0; i<vect.size() && encontrado!=true; i++)
    {
        if(vect[i].nombre==nom)
        {
            vect.erase (vect.begin()+i);
            encontrado=true;
        }
    }
}
/*
no retorna nada y Muestra una lista de todos los contactos que pertenezcan a esa categoria.
*/
void Lista_Contactos::categoria(string tipocont)
{
    string result="";
    vector<Contacto>::iterator iter;
    int contador = 0;

    for(iter=vect.begin(); iter!=vect.end(); iter++)
    {
        if(iter->tipocontacto==tipocont)
        {
            result= result+iter->nombre+"\n";
            contador++;
        }
    }
    cout<<"Contactos de tipo "<< tipocont<<" ("<<contador<<" elementos):"<<endl;
    cout<<result<<endl;
}

/*
no retorna nada y muestra la imformacion del contacto que busca
*/
void Lista_Contactos::buscacontacto(string nom)
{
    string result="";
    bool encontrado=false;
    string fhone;
    vector<Contacto>::iterator iter;
    multimap<string,string>::iterator itera;
    string num="";
    iter=vect.begin();
    while(iter!=vect.end() && encontrado!=true)
    {
        if(iter->nombre.compare(nom)==0)
        {
            for(itera=iter->multmap.begin(); itera!=iter->multmap.end(); itera++)
            {
                num+=itera->first+": "+itera->second+" ";
            }
            result="Nombre: " +iter->nombre+"\n"+ "Correo electronico: " +iter->correo+"\n"+"Tipo de contacto: "+iter->tipocontacto+"\n"+num;
            encontrado=true;
        }
        iter++;
    }
    cout<<result<<endl;
}
/*
no retorna nada y
Permite modificar atributos del contacto a escoger.
*/
void Lista_Contactos::modificar(string nom, int dato, string valor)
{
    multimap<string,string>::iterator iterador;
    vector<Contacto>::iterator iter;

    for(iter=vect.begin(); iter!=vect.end(); iter++)
    {
        if(iter->nombre == nom)
        {
            if(dato==1)
            {
                iter->correo = valor;
            }
            if(dato==2)
            {
                iter->tipocontacto = valor;
            }

            if(dato ==3 || dato==4 || dato==5)

                for(iterador=iter->multmap.begin(); iterador!=iter->multmap.end(); iterador++)
                {
                    if(iterador->first=="Celular" && dato ==3)
                    {
                        iterador->second = valor;
                    }
                    if(iterador->first=="Hogar" && dato ==4)
                    {
                        iterador->second = valor;
                    }
                    if(iterador->first=="Trabajo" && dato ==5)
                    {
                        iterador->second = valor;
                    }
                }
        }
    }
}


