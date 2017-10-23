CXXFLAGS := -std=c++11 -O3 \
	    -fPIC -Wall -Wextra -pedantic -g \
	    ${CXXFLAGS}
LDFLAGS = -shared
TARGET=krtf
LIB=libkrtf.so
OBJS=libkrtf.o
SRC=libkrtf.cpp

all: $(LIB)

$(LIB): libkrtf.cpp libkrtf.h
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $< -o $(LIB)

example: example.cpp $(LIB)
	$(CXX) $(CXXFLAGS) -L. -l$(TARGET) -o $@ $<

run: example
	LD_LIBRARY_PATH=. ./main


clean:
	$(RM) $(LIB)
	
