CC=gcc
OPT=-O3

BINARY=bin
CODEDIRS=. src
INCDIRS=. include

DEPFLAGS=-MD -MP
CFLAGS=-Wall -Wextra -g $(foreach DIR, $(INCDIRS), -I$(DIR)) $(OPT) $(DEPFLAGS)

# the `wildcard` combines each value from DIR with every *.c file iside the directory
# indicated by it (by DIR).
CFILES=$(foreach DIR, $(CODEDIRS), $(wildcard $(DIR)/*.c))
OBJECTS=$(patsubst %.c, %.o, $(CFILES))
DEPFILES=$(patsubst %.c, %.d, $(CFILES))

all: $(BINARY)

$(BINARY): $(OBJECTS)
	$(CC) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(BINARY) $(OBJECTS) $(DEPFILES)

-include $(DEPFILES)

.PHONY: all clean