#ifndef ROPA_H
#define ROPA_H

#include "Productos.h"

#include <string>
using std::string;

class Ropa : public Productos{
  private:
    string tipo;
  public:
    Ropa();
    ~Ropa();
    Ropa(string,string,double,string);
    string getTipo();
    void setTipo(string);
};

#endif
