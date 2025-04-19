# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17 -O2

# Find all .cpp files in current directory and subdirectories (excluding test.cpp)
SRC = $(filter-out test.cpp, $(wildcard $(shell find . -name '*.cpp')))

# Executables = source files without .cpp extension, preserve directory structure
EXE = $(SRC:.cpp=)

# Default rule
all: $(EXE)

# Compile rule
%: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

# Clean rule
clean:
	rm -f $(EXE)

