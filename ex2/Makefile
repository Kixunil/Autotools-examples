CFLAGS=-W -Wall

helloworld: main.o hello.o
	$(CC) $(LDFLAGS) -o helloworld main.o hello.o

hello.o: hello.c
	$(CC) $(CFLAGS) -c -o hello.o hello.c

main.o: main.c
	$(CC) $(CFLAGS) -c -o main.o main.c
