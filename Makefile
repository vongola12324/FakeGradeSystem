# Compile Setting
CXX = g++
CXXFLAGS = -O2 -Wall -std=c++11

# Project Setting
BIN = GradeSystem
OBJ = main.o load.o insert.o suspend.o calc.o print.o search.o

# Make Targe
all: build

clean:
		@echo "Removing *.o and $(BIN)......"
		rm -Rf $(OBJ)
		rm -Rf $(BIN)
		@echo "Project cleanup!"

build: $(BIN)

$(BIN): $(OBJ)
		$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
		$(CXX) $(CXXFLAGS) -o $@ -c $<
