#include "videojuego.h"

#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

videojuego::videojuego(){
  desarrollador="";
}

videojuego::~videojuego(){

}

videojuego::videojuego(string desarrollador, string tipo, string nombre, double peso, string fragil):electronicos(tipo, nombre, peso, fragil){
  this->desarrollador=desarrollador;
}

/*videojuego::videojuego(string desarrollador){
  this->desarrollador=desarrollador;
}*/

string videojuego::getDesarrollador(){
  return desarrollador;
}

void videojuego::setDesarrollador(string desarrollador){
  this->desarrollador=desarrollador;
}
