CC=clang
Cflags=-g -Wall
DEPFLAGS= -MP -MD
src=src/Queue
objs=obj/main.o obj/Queue.o
build=build/a.out
RM = rm -rf

# build: $(build)
# 	./$(build)

$(build): $(objs)
	$(CC) $(objs) -o $@ $(Cflags) $(DEPFLAGS)

obj/%.o: $(src)/%.c
	$(CC) -c $^ -o $@

run: $(build)
	./$(build)

clean:
	$(RM) build/*.out obj/*.o

