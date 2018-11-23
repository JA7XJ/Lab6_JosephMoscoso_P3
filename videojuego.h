#ifndef VIDEOJUEGO_H
#define VIDEOJUEGO_H

#include "electronicos.h"

#include <string>
using std::string;

class videojuego : public electronicos{
  private:
    string desarrollador;
  public:
    videojuego();
    ~videojuego();
    videojuego(string,string,string,double,string);
    string getDesarrollador();
    void setDesarrollador(string);
};

#endif
