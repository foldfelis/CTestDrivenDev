run: ./src/fibonacci.c \
	./src/main.c
	make clean
	gcc ./src/fibonacci.c \
		./src/main.c \
		-o ./bin/main
	./bin/main

test: ./src/fibonacci.c \
	./test/test_fibonacci.c \
	./test/test_all.c
	make clean
	gcc -coverage \
		./src/fibonacci.c \
		./test/test_fibonacci.c \
		./test/test_all.c \
		-o ./bin/test_all
	./bin/test_all
	gcov fibonacci

clean:
	rm -f ./bin/*
	rm -f ./*.gcno ./*.gcda ./*.gcov
