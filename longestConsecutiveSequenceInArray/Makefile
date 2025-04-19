# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++20 -O2

# Source files
SRC = $(wildcard *.cpp)

# Executables = source files without .cpp
EXE = $(SRC:.cpp=)

# Default rule: build all
all: $(EXE)

# Rule to build each .cpp into its own executable
%: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

# Clean rule
clean:
	rm -f $(EXE)
