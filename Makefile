all: sieve.o driver.o
	gcc -o test sieve.o driver.o -lm

driver.o: driver.c sieve.h
	gcc -c driver.c

sieve.o: sieve.c sieve.h
	gcc -c sieve.c

run:
	./test

clean:
	rm test
	rm *.o
