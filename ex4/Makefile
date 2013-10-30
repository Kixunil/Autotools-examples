CFLAGS=-W -Wall

all: helloworld

clean:
	rm -f *.o helloworld

helloworld: main.o hello.o
	$(CC) $(LDFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

.PHONY: all clean
