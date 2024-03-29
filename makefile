CC=gcc
AR=ar
OBJECTS_MAIN=main.o
OBJECTS_MATH=basicMath.o
OBJECTS_POW=power.o
FLAGS= -Wall -g

all: mymaths mymathd mains maind
maind: $(OBJECTS_MAIN)
	$(CC) $(FLAGS) -o maind $(OBJECTS_MAIN) ./libmyMath.so
mains: $(OBJECTS_MAIN) libmyMath.a
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) libmyMath.a
mymathd: $(OBJECTS_MATH) $(OBJECTS_POW)
	$(CC) -shared -o libmyMath.so $(OBJECTS_MATH) $(OBJECTS_POW)
mymaths: $(OBJECTS_MATH) $(OBJECTS_POW)
	$(AR) -rcs libmyMath.a $(OBJECTS_MATH) $(OBJECTS_POW)
power.o: power.c myMath.h
	$(CC) $(FLAGS) -c power.c 
basicMath.o: basicMath.c myMath.h
	$(CC) $(FLAGS) -c basicMath.c
main.o: main.c myMath.h
	$(CC) $(FLAGS) -c main.c 

.PHONY: clean all

clean:
	rm -f *.o *.a *.so mains maind
