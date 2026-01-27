CC = g++
CD = gdb

PROG = app
SOURCES = main.cpp node.cpp hashtable.cpp hashtable.h node.h

VER = c++20

BUILD_DIR= ./build

CFLAGS = -std=$(VER) -g -Wall -Werror -Wconversion -fanalyzer -fsanitize=address,undefined,leak -fsanitize-trap=undefined

run: build
	$(BUILD_DIR)/$(PROG)

build: $(SOURCES)
	mkdir -p $(BUILD_DIR)
	$(CC) -o $(PROG) $(CFLAGS) $(SOURCES)
	mv $(PROG) $(BUILD_DIR) 

clean:
	rm -rf $(BUILD_DIR)

debug: build
	$(CD) $(BUILD_DIR)/$(PROG)
