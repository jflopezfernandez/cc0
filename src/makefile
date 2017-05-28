CC 		:= gcc
CFLAGS 	:=-g -std=c11 -Wall -Wextra
PROGRAM :=test

SRCS 	:= $(wildcard *.c)
OBJS 	:= $(patsubst %.c,%.o,$(wildcard *.c))


$(PROGRAM):$(OBJS)
	$(CC) -o  $(PROGRAM) $(CFLAGS) $(OBJS)
	
$(OBJS):$(SRCS)
	$(CC) -c $(CFLAGS) $(SRCS)