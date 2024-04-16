# KnightsTourTiming
This is a project I am doing for CS-317 Analysis of Algorithms in the spring of 2024
at The University of Alabama in Huntsville. All the code was provided to me except for
the time measurement using std::chrono, which I had to implement myself.

## Purpose
This program simulates a knight moving around a chess board and completing a Hamiltonian
circuit, or traveling to each square exactly once. Build the program, then supply the
size of the board's size and the starting row and column of the first square.
A matrix appears that will show the order of moves to each square, and the total
time it took to compute (or fail to find) a solution in milliseconds is shown.

>[!Warning]
This project is capped at a 10 x 10 chess board, as it is a montrously inefficient
algorithm due to the nature of the problem. This means that it will devour your
memory and processor very quickly or else take quite a while to finish computing.
I would not reccommend pushing it over 8 x 8, as that is the size of a real chess
board, and my desktop with 64 GB DDR4 struggled mightily for 40 minutes to no avail
when I attempted to simulate a 10 x 10 board.

## Building
I built and tested in Visual Studio 2022 using CMake, but I honestly am still pretty
confused by it and am struggling to get WSL to play nicely with it on my laptop, though
my desktop is much friendlier. I will include a makefile to make life easier for UNIX
systems, as this CMake project is built on [Ninja](https://ninja-build.org/) instead.