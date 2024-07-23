
CC=clang
Cflags=-g -Wall
src=src/LinkedList
objs=obj/main.o obj/linkedlist.o
bin=bin/main


$(bin): $(objs)
	$(CC) $(objs) -o $@

obj/%.o: $(src)/%.c
	$(CC) -c $^ -o $@

run: $(bin)
	./$(bin)

clean:
	rm -f bin/* obj/*
