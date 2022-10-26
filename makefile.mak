CXX = g++
CXXFLAGS = -std=c++11 -Wall

OBJS = BruteForce.o  main.o

BruteForce.o : BruteForce.cpp BruteForce.hpp
	$(CXX) $(CXXFLAGS) -c BruteForce.cpp

main.o : main.cpp BruteForce.hpp
	$(CXX) $(CXXFLAGS) -c main.cpp

main : ${OBJS}
	${CXX} $(CXXFLAGS) -o $@ ${OBJS}

clean :
	rm ${OBJS} main