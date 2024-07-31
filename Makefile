
CC=clang
Cflags=-g -Wall
src=src/Stacks
objs=obj/reverseStack.o obj/stack.o
bin=bin/main


$(bin): $(objs)
	$(CC) $(objs) -o $@

obj/%.o: $(src)/%.c
	$(CC) -c $^ -o $@

run: $(bin)
	./$(bin)

clean:
	rm -f bin/* obj/*
