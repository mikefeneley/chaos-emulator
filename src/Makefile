CPP_FILES := $(wildcard *.cpp)
OPTIONS = -o emulator

run : all
	./emulator

all:
	g++ $(OPTIONS) $(CPP_FILES) 



clean:
	rm *.o
	rm emulator
