#ifndef PRODUCTOS_H
#define PRODUCTOS_H

#include <string>
using std::string;

class Productos{
  protected:
    string nombre;
    double peso;
    string fragil;
  public:
    Productos();
    ~Productos();
    Productos(string,double,string);
    string getNombre();
    void setNombre(string);
    double getPeso();
    void setPeso(double);
    string getFragil();
    void setFragil(string);
};

#endif
