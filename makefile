execute:	main.o caja.o Libro.o Productos.o Ropa.o electronicos.o videojuego.o computadora.o
	g++ main.o caja.o Libro.o Productos.o Ropa.o electronicos.o videojuego.o computadora.o -o execute

caja.o: caja.h caja.cpp
	g++ -c caja.cpp

Libro.o: Libro.h Libro.cpp
	g++ -c Libro.cpp

Productos.o: Productos.h Productos.cpp
	g++ -c Productos.cpp

Ropa.o: Ropa.h Ropa.cpp
	g++ -c Ropa.cpp

electronicos.o: electronicos.h electronicos.cpp
	g++ -c electronicos.cpp

videojuego.o: videojuego.h videojuego.cpp
	g++ -c videojuego.cpp

computadora.o: computadora.h computadora.cpp
	g++ -c computadora.cpp

main.o: main.cpp
	g++ -c main.cpp
