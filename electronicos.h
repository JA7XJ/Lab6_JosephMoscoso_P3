#ifndef ELECTRONICOS_H
#define ELECTRONICOS_H

#include <string>
using std::string;

#include "Productos.h"

class electronicos : public Productos{
  protected:
    //string fr;
    string tipo;
  public:
    electronicos();
    ~electronicos();
    electronicos(string,string,double,string);
    //string getFr();
    //void setFr(string);
    string getTipo();
    void setTipo(string);
};

#endif
