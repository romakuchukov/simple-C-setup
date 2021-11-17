CC=clang
CFLAGS=`pkg-config --libs --cflags raylib`

all: app

app: utils.o main.o
	$(CC) $(CFLAGS) utils.o main.o -o app && rm utils.o main.o

utils.o: utils.c
	$(CC) -c utils.c

main.o: main.c
	$(CC) -c main.c

clean:
	rm *.o app