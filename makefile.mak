CXX = g++
CXXFLAGS = -std=c++11 -Wall

OBJS = BruteForce.o  main.o

BruteForce.o : ParseData.cpp ParseData.hpp
	$(CXX) $(CXXFLAGS) -c ParseData.cpp

main.o : main.cpp ParseData.hpp
	$(CXX) $(CXXFLAGS) -c main.cpp


main : ${OBJS}
	${CXX} $(CXXFLAGS) -o $@ ${OBJS}

clean :
	rm ${OBJS} main