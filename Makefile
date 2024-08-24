CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic

SRCS = main.c gates.c bus.c

OBJS = $(SRCS:.c=.o)

TARGET = nand

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<
