all: ./build/caller.out
	./build/caller.out

build_generator: ./src/generator.cpp
	/usr/local/gcc-14.2.0/bin/gcc-14.2.0 -lstdc++ -o ./build/generator.out ./src/generator.cpp

generate_function: ./build/generator.out
	./build/generator.out

build_caller: ./src/caller.h ./src/caller.cpp ./src/generated/_function.cpp
	/usr/local/gcc-14.2.0/bin/gcc-14.2.0 -lstdc++ -o ./build/caller.out ./src/generated/_function.cpp ./src/caller.h ./src/caller.cpp