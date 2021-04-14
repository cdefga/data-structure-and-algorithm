CC = g++
CFLAGS = -Wall

PROG = sort 
SRCS = *.cpp *.hpp

all: $(PROG)
	@./sort

$(PROG):	$(SRCS)
	@$(CC) $(CFLAGS) -o $(PROG) $(SRCS)

clean:
	rm -f *.o
