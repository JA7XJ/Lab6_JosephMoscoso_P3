#ifndef CAJA_H
#define CAJA_H

#include <string>
using std::string;

#include <vector>
using std::vector;

#include "Productos.h"

class caja{
  private:
    vector<Productos*> lista;
    string fragil;
    double peso;
  public:
    caja();
    ~caja();
    caja(string, double);
    string getFragil();
    void setFragil(string);
    double getPeso();
    void setPeso(double);
    void setList(vector <Productos*>);
    void add(Productos*);
};

#endif
