# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++20 -O2

# Object output base directory
OBJ_DIR = obj

# Find all .cpp files (excluding test.cpp)
SRC = $(filter-out %/test.cpp, $(shell find . -name '*.cpp'))

# Remove .cpp, prefix with obj/ for output binary path
EXE = $(patsubst ./%.cpp, $(OBJ_DIR)/%, $(SRC))

# Default target
all: $(EXE)

# Rule to build each .cpp file into obj/... binary
$(OBJ_DIR)/%: %.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -o $@ $<

# Clean target
clean:
	rm -rf $(OBJ_DIR)

