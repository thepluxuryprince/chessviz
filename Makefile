main: bin/main

test: bin/main-test

build/main-test.o: test/main.c build
	gcc -I thirdparty -I src -c test/main.c -o build/main-test.o

build/main.o: src/main.c build
	gcc -Wall -Werror -c src/main.c -o build/main.o

build/board.o: src/board.c
	gcc -Wall -Werror -c src/board.c -o build/board.o

build/board_print.o: src/board_print.c
	gcc -Wall -Werror -c src/board_print.c -o build/board_print.o

bin/main: build/main.o build/board.o bin
	gcc -Wall -Werror build/main.o build/main.o -o bin/main
	
bin/main-test: build/main-test.o build/alphabet.o bin
	gcc -Wall -Werror build/main-test.o build/board.o build/board_print.o -o bin/main-test


.PHONY : clean

bin:
	mkdir bin

build:
	mkdir build

clean:
	rm -rf build
	rm -rf bin
