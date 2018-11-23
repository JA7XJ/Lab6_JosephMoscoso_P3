#ifndef PRODUCTOS_H
#define PRODUCTOS_H

#include <string>
using std::string;

class Productos{
  private:
    string nombre;
    double peso;
    string fragil;
  public:
    Productos();
    ~Productos();
    string getNombre();
    void setNombre(string);
    double getPeso();
    void setPeso(double);
    string getFragil();
    void setFragil(string);
};

#endif
