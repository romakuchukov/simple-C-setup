CC=clang
CFLAGS=`pkg-config --libs --cflags raylib`

all: app

app: utils.o main.o
	$(CC) $(CFLAGS) utils.o main.o -o app

%.o: %.c
	$(CC) -c $^

clean:
	rm *.o app
