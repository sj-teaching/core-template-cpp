CC        := g++
LD        := g++
CFLAGS    := -g -Wall

PROG      := Tokenizer
OBJS      := Main.o Token.o Tokenizer.o

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(PROG): $(OBJS)
	$(LD) $^ -o $(PROG)

clean:
	$(RM) $(OBJS) $(PROG)
