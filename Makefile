main : main.cpp Aquarium.o Bestiole.o Milieu.o Comportement.o Kamikaze.o Peureuse.o Prevoyante.o Gregaire.o
	g++ -Wall -std=c++11 -o main main.cpp Aquarium.o Bestiole.o Milieu.o Comportement.o Kamikaze.o Peureuse.o Prevoyante.o Gregaire.o -I . -lX11 -lpthread

Aquarium.o : Aquarium.h Aquarium.cpp
	g++ -Wall -std=c++11  -c Aquarium.cpp -I .

Bestiole.o : Bestiole.h Bestiole.cpp
	g++ -Wall -std=c++11  -c Bestiole.cpp -I .

Milieu.o : Milieu.h Milieu.cpp
	g++ -Wall -std=c++11  -c Milieu.cpp -I .

Comportement.o : Comportement.h Comportement.cpp
	g++ -Wall -std=c++11  -c Comportement.cpp -I .

Kamikaze.o : Comportement/Kamikaze.h Comportement/Kamikaze.cpp
	g++ -Wall -std=c++11  -c Comportement/Kamikaze.cpp -I .

Peureuse.o : Comportement/Peureuse.h Comportement/Peureuse.cpp
	g++ -Wall -std=c++11  -c Comportement/Peureuse.cpp -I .

Gregaire.o : Comportement/Gregaire.h Comportement/Gregaire.cpp
	g++ -Wall -std=c++11  -c Comportement/Gregaire.cpp -I .

Prevoyante.o : Comportement/Prevoyante.h Comportement/Prevoyante.cpp
	g++ -Wall -std=c++11  -c Comportement/Prevoyante.cpp -I .

clean:
	rm -rf *.o main

