CFLAGS = -Wno-implicit-function-declaration

all: final

final: main.o push.o pop.o display.o
	echo "Compiling final"
	gcc $(CFLAGS) main.o push.o pop.o display.o -o final
	chmod +x final
	
main.o: main.c
	echo "Compiling main"
	gcc $(CFLAGS) -c main.c

push.o: push.c
	echo "Compiling push"
	gcc $(CFLAGS) -c push.c

pop.o: pop.c
	echo "Compiling pop"
	gcc $(CFLAGS) -c pop.c

display.o: display.c
	echo "Compiling display"
	gcc $(CFLAGS) -c display.c



clean:
	echo: "Removing all but the source files"
	rm *.o