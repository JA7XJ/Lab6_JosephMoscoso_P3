#ifndef ELECTRONICOS_H
#define ELECTRONICOS_H

#include <string>
using std::string;

#include "Productos.h"

class electronicos : public Productos{
  protected:
    string fragil;
    string tipo;
  public:
    electronicos();
    ~electronicos();
    electronicos(string,string);
    string getFragil();
    void setFragil(string);
    string getTipo();
    void setTipo(string);
};

#endif
