#ifndef CONTACTO_H
#define CONTACTO_H

#include <string>
#include <map>
using namespace std;
class Contacto
{
public:
    Contacto();
    Contacto(Contacto *h);
    virtual ~Contacto();
    void asigne(string, string,string, string,string, string);
    bool  operator< (const Contacto &);
    string getTel(string);
    string nombre="";
    string tipocontacto="";
    string correo="";
    multimap<string,string> multmap;


protected:

private:
};

#endif // CONTACTO_H
