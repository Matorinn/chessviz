.PHONY: all clean remake test testlib

way1=src/main.cpp
way2=src/board_print_plain.cpp
way3=src/board.cpp
object1=build/main.o
object2=build/board_print_plain.o
object3=build/board.o
gtestdir=thirdparty/googletest
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

test: testlib bin/test

testlib:
	g++ -std=c++11 -isystem ${gtestdir}/include -I${gtestdir} \
    -pthread -c ${gtestdir}/src/gtest-all.cc -o build/test/gtest-all.o
	ar -rv build/test/libgtest.a build/test/gtest-all.o

bin/test: build/test/test.o  $(object3)
	g++ -std=c++11 -isystem ${gtestdir}/include -pthread $^ \
	build/test/libgtest.a -o $@

build/test/test.o: test/test.cpp
	g++ -std=c++11 -c -Wall $^ -I $(gtestdir)/include -o $@

clean:
	rm -rf build/*.o
