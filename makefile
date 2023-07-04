CC = gcc
CFLAGS = -Wall -O2

CFILES = addition.c soustraction.c multiplication.c division.c

build: $(CFILES)
	$(CC) $(CFLAGS) -o operation main.c $(CFILES)

test: $(CFILES)
	$(CC) $(CFLAGS) -o test test.c $(CFILES)

deploy: $(CFILES)
	$(CC) $(CFLAGS) -o app main.c $(CFILES)
