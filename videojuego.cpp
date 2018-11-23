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

videojuego::videojuego(string desarrollador){
  this->desarrollador=desarrollador;
}

string videojuego::getDesarrollador(){
  return desarrollador;
}

void videojuego::setDesarrollador(string desarrollador){
  this->desarrollador=desarrollador;
}
