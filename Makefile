# Makefile for activitydayC.cpp

__DRIVER_NAME__ = activitydayC

p1: $(__DRIVER_NAME__).o
	g++ -std=c++14 $(__DRIVER_NAME__).o -o p1

$(__DRIVER_NAME__).o: $(__DRIVER_NAME__).cpp
	g++ -std=c++14 -c $(__DRIVER_NAME__).cpp

clean:
	rm -f *.o core p1
	