CC=gcc
FLAGS=-Wall -O
LIBMATH=-lm

test_readfile: readfile.o
	$(CC) $(FLAGS) -o $@ $^
test_sigmoid: test_sigmoid.o sigmoid.o
	$(CC) $(FLAGS) -o $@ $^ $(LIBMATH)

.c.o:
	$(CC) $(FLAGS) -c $<

test_sigmoid.o: sigmoid.h
sigmoid.c: sigmoid.h

clean:
	rm -f *~ *.o test_sigmoid
