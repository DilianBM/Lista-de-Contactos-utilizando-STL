/*Dilian Badilla,Alberto soto
  clase main
  versión 1
  esta clase se llama a la interfaz para que se ingresen los datos y contiene los datos de prueba
*/
#include <iostream>
#include <map>
#include <iterator>
#include "Contacto.h"
#include "Lista_Contactos.h"
#include <vector>
#include "Interfaz.h"
using namespace std;

int main()
{
    Lista_Contactos lista;

    Interfaz interfaz;
    interfaz.menu(lista);
    //pruebas
    /*Contacto p;
    Contacto q;
    Contacto t;
    Contacto r;
    Contacto s;
    Contacto h;
    p.asigne("carlos","familiar","@gfdf","56","89","23");
    q.asigne("marta","familiar","alaas","56","43","09");
    t.asigne("luis","hogar","alaas","2768956","2312123","787878");
    r.asigne("ale","trabajo","@hotma","89","8","203");
    s.asigne("dilian","trabajo","@fdf","34","12","009");
    h.asigne("diana","familiar","alaas","90090","1123456","2345");
    lista.agrega(p);
    lista.agrega(q);
    lista.agrega(t);
    lista.agrega(r);
    lista.agrega(s);
    lista.agrega(h);


    lista.show();
    lista.borracontacto("ale");
    lista.borracontacto("luis");
    lista.borracontacto("marta");
    lista.show();
    lista.borracontacto("diana");
    lista.show();
    lista.categoria("trabajo");
    lista.buscacontacto("dilian");
    lista.modificar("carlos",2,"trabajo");
    lista.modificar("marta",1,"@hotmail.com");

    lista.show();
    lista.buscacontacto("marta");
    lista.buscacontacto("carlos");
    lista.categoria("trabajo");**/


    return 0;

}
