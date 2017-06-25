CC := gcc
CFLAGS := -c -Wall -Werror
EXE := bin/deposit-calc
SOURCES := build/main.o build/deposit.o
all: $(EXE)

$(EXE): $(SOURCES)
	$(CC) $(SOURCES) -o $@

build/main.o: src/main.c
	$(CC) $(CFLAGS) src/main.c -o $@

build/deposit.o: src/deposit.c
	$(CC) $(CFLAGS) src/deposit.c -o $@

.PHONY: all clean
clean:
	rm -rf build/*.o
	rm -rf bin/*
