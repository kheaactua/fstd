.SUFFIXES: .c .o

#INC:=-I/usr/include/mongo-client -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include
#LIBS:=-L/usr/lib -lmongoclient -L/usr/lib/x86_64-linux-gnu -lmongo-client

INCS:=-I/opt/mongo/include
LIBS:=-L/opt/mongo/lib -lmongoc

all: matt

.PHONY: all

.c.o:
	gcc --std=c99 -c $< ${INCS}

matt: matt.o
	gcc -o $@ $< ${INCS} ${LIBS}

example: example.o
	gcc -o $@ $< ${INCS} ${LIBS}

tutorial: tutorial.o
	gcc -o $@ $< ${INCS} ${LIBS}

clean:
	rm -f *.o example tutorial
