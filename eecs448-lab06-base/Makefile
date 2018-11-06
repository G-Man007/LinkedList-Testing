#	Author: John Gibbons
#	Date: 2016.10.26


#Add needed Test.o
prog: main.o testListOfInts.o
	g++ -g -Wall -std=c++11 main.o LinkedListOfInts.o testListOfInts.o -o prog


main.o: main.cpp testListOfInts.h LinkedListOfInts.h
	g++ -g -Wall -std=c++11 -c main.cpp


#Add needed Test.o recipe and compiler command
testListOfInts.o: testListOfInts.h testListOfInts.cpp
	g++ -g -Wall -std=c++11 -c  testListOfInts.cpp

#DON'T delete LinkedList.o!
clean:
	rm main.o *.*~ prog
