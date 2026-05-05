TARGET = programa

CXX = g++
CXXFLAGS = -Wall -std=c++11

SRC = src/main.cpp src/Imple.cpp

build:
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

run: build
	./$(TARGET)

clean:
	rm -f $(TARGET)
