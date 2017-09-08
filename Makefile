CC=gcc
FLAGS=-Wall -O
LIBMATH=-lm


test_sigmoid: test_sigmoid.o sigmoid.o
	$(CC) $(FLAGS) -o $@ $^ $(LIBMATH)

.c.o:
	$(CC) $(FLAGS) -c $<

test_sigmoid.o: sigmoid.h
sigmoid.c: sigmoid.h
