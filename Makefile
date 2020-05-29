main: bin/main

test: bin/test

build/main.o: src/main.c build
	gcc -Wall -Werror -c src/main.c -o build/main.o

build/board.o: src/board.c
	gcc -Wall -Werror -c src/board.c -o build/board.o

build/board_print.o: src/board_print.c
	gcc -Wall -Werror -c src/board_print.c -o build/board_print.o

bin/main: build/main.o build/board.o build/board_print.o bin
	gcc -Wall -Werror build/main.o build/board.o build/board_print.o -o bin/main

build/test.o: test/test.c build
	gcc -I thirdparty -I src -c test/test.c -o build/test.o
	
bin/test: build/test.o build/board.o build/board_print.o bin
	gcc -Wall -Werror build/test.o build/board.o build/board_print.o -lm -o bin/test

.PHONY : clean

bin:
	mkdir bin

build:
	mkdir build

clean:
	rm -rf build
	rm -rf bin
