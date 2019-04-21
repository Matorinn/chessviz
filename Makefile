.PHONY: all clean

way1=src/main.cpp
way2=src/board_print_plain.cpp
object1=build/main.o
object2=build/board_print_plain.o

all: bin/chessviz clean

bin/chessviz: $(object1) $(object2)
	g++ $^ -o $@

$(object1): $(way1)
	g++ -c $^ -Werror -o $@

$(object2): $(way2)
	g++ -c $^ -Werror -o $@

clean:
	rm -rf build/*.o
