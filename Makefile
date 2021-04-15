CC = g++
CFLAGS = -Wall

PROG = main 
SRCS = *.cpp *.hpp

all: $(PROG)
	@./$(PROG)

$(PROG):	$(SRCS)
	@$(CC) $(CFLAGS) -o $(PROG) $(SRCS)

clean:
	rm -f *.o
