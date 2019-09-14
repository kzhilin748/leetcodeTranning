EXE:= main
OBJ:= WiggleSubsequence.o main.o

all: ${OBJ}
	clang++ -std=c++11 -o ${EXE} ${OBJ}
%.o:%.cpp
	clang++ -std=c++11 -c $^ -o $@

.PHONY:clean
clean:
	rm -rf ${OBJ} ${EXE}