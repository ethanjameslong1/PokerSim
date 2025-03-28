CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17
SRC = Card.cpp Deck.cpp Game.cpp Player.cpp main.cpp
OBJ = $(SRC:.cpp=.o)
DEPS = Card.h Deck.h Game.h Player.h

# Target executable
TARGET = main

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

%.o: %.cpp $(DEPS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

