main:	main.o obra.o literatura.o escultura.o diseno.o
	g++ obra.o main.o literatura.o escultura.o diseno.o -o main
	rm *.o

main.o:	main.cpp obra.h 
	g++ -c main.cpp

obra.o:	obra.h	obra.cpp
	g++ -c obra.cpp

literatura.o:	obra.h	obra.cpp literatura.h literatura.cpp
	g++ -c literatura.cpp

escultura.o:	obra.h	obra.cpp escultura.h escultura.cpp
	g++ -c escultura.cpp

diseno.o:	obra.h	obra.cpp diseno.h diseno.cpp
	g++ -c diseno.cpp				
