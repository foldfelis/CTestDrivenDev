srcs := ./src/fibonacci.c \
	./src/factorial.c

tests := ./test/test_fibonacci.c \
	./test/test_factorial.c

run: $(srcs) ./src/main.c
	make clean
	gcc $(srcs) ./src/main.c -o ./bin/main
	./bin/main

test: $(srcs) $(tests) ./test/test_all.c
	make clean
	gcc -coverage $(srcs) $(tests) ./test/test_all.c -o ./bin/test_all
	./bin/test_all
	# `gcov` doesn't affect codecov.io
	#gcov fibonacci factorial

clean:
	rm -f ./bin/*
	rm -f ./*.gcno ./*.gcda ./*.gcov
