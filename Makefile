all : add-nbo


main.o:
	gcc -c main.cpp
add-nbo:
	gcc -o add-nbo main.cpp

