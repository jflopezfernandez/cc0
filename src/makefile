CC := gcc
CFLAGS :=-g -Wall -Wextra
PROGRAM :=test

SRCS := $(wildcard *.c)
OBJS := $(patsubst %.c,%.o,$(wildcard *.c))


$(PROGRAM):$(OBJS)
	$(CC) -o  $(PROGRAM) $(CFLAGS) $(OBJS)
	
$(OBJS):$(SRCS)
	$(CC) -c $(CFLAGS) $(SRCS)