.PHONY: clean all
all: bin/chessviz
bin/chessviz: build/main.o build/board_print_plain.o
	g++ $^ -o $@

build/main.o: src/main.cpp
	g++ -c -Wall -Werror -o $@ $<

build/board_print_plain.o: src/board_print_plain.cpp
	g++ -c -Wall -Werror -o $@ $<

clean:
	rm build/*.o	
