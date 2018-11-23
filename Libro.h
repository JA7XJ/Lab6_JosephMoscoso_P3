#ifndef LIBRO_H
#define LIBRO_H

#include <string>
using std::string;

#include "Productos.h"

class Libro : public Productos{
  private:
    string codigo;
  public:
    Libro();
    ~Libro();
    Libro(string,string,double,string);
    string getCodigo();
    void setCodigo(string);
};

#endif
