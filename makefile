CC=g++
CCFLAGS= -Wall -Werror -std=c++2a -g
LIBFLAGS=
SRC= $(wildcard *.cpp)
OBJ= $(SRC:.cpp=.o)
OBJ_TEST = $(filter-out main.o, $(OBJ)) $(TST:.cpp=.o)
EXEC= carte 


all: $(EXEC)


$(EXEC): $(OBJ)
	$(CC) $(LIBFLAGS) $^ -o $@  

%.o: %.cpp
	$(CC) $(CCFLAGS) -o $@ -c $<

.depend:
	g++ $(CCFLAGS) -MM $(SRC) > .depends
-include .depends

clean:
	rm -f $(OBJ)
	rm -rf $(EXEC)
