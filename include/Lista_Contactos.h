#ifndef LISTA_CONTACTOS_H
#define LISTA_CONTACTOS_H
#include "Contacto.h"
#include <vector>

class Lista_Contactos
{
public:
    Lista_Contactos();
    virtual ~Lista_Contactos();
    void agrega(Contacto);
    void borracontacto(string nom);
    void categoria(string tipocont);
    void  buscacontacto(string nom);
    void modificar(string nom, int dato, string valor);
    void ordena();
    void show();
    void show2();
    vector<Contacto> vect;


protected:

private:
};

#endif // LISTA_CONTACTOS_H
