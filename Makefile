.PHONY: all clean remake

way1=src/main.cpp
way2=src/board_print_plain.cpp
way3=src/board.cpp
object1=build/main.o
object2=build/board_print_plain.o
object3=build/board.o
all: bin/chessviz

remake: clean all

bin/chessviz: $(object1) $(object2) $(object3)
	g++ $^ -o $@

$(object1): $(way1)
	g++ -c $^ -Werror -o $@

$(object2): $(way2)
	g++ -c $^ -Werror -o $@

$(object3): $(way3)
	g++ -c $^ -Werror -o $@

clean:
	rm -rf build/*.o
