all: mymaths mymathd mains maind

mymaths: basicMath.o power.o myMath.h
	ar -rcs libmyMath.a basicMath.o power.o

mymathd: basicMath.o power.o myMath.h
	gcc -shared -o libmyMath.so basicMath.o power.o

mains: main.o mymaths
	gcc -Wall -fPIC -o mains main.o libmyMath.a

maind: main.o mymathd
	gcc -Wall -fPIC -o maind main.o ./libmyMath.so

basicMath.o: basicMath.c myMath.h
	gcc -Wall -fPIC -c basicMath.c

power.o: power.c myMath.h
	gcc -Wall -fPIC -c power.c

main.o: main.c 
	gcc -Wall -fPIC -c main.c

clean: 	
	rm -f basicMath.o libmyMath.a libmyMath.so main.o power.o mains maind

.PHONY: clean all

