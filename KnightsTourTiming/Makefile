# CS-317 Program 2 Makefile
# Written April 16, 2024
CC = g++ -std=c++17 -Wall
# DO NOT use on Windows with Nmake
KnightsTourTiming: KnightsTourTiming.o Chessboard.o
	$(CC) KnightsTourTiming.o Chessboard.o -o KnightsTourTiming
Chessboard.o: Chessboard.cpp Chessboard.h
	$(CC) -c Chessboard.cpp
KnightsTourTiming.o: KnightsTourTiming.cpp KnightsTourTiming.h Chessboard.h
	$(CC) -c KnightsTourTiming.cpp
clean
	rm *.o KnightsTourTiming