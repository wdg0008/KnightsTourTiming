// KnightsTourTiming.cpp : Defines the entry point for the application.
//
// File: KnightsTour.cpp -- BETH ALLEN SPRING 2024
// Gathers the information for the size of a chessboard and the starting point for the
// knight's tour.  The chessboard returns true or false indicating whether there is a solution
// Then provides the ability to display the board with the given path.
//-----------------------------------------------------------------------------

#include "KnightsTourTiming.h"
#include "ChessBoard.h"
using namespace std;

int main(void) {

	ChessBoard myBoard;
	int row, col;
	int N;

	cout << "Enter the board size (max of " << MAXSIZE << "): ";
	cin >> N;
	myBoard.createNewBoard(N);
	cout << "Enter starting square row number: (0-" << N - 1 << "): ";
	cin >> row;
	cout << "Enter starting square col number: (0-" << N - 1 << "): ";
	cin >> col;

	// start measuring time here
	chrono::steady_clock::time_point start = chrono::steady_clock::now(); // ensures no negative time progression

	if (myBoard.solveIt(row, col))
		cout << "\nSolved! ";
	else
		cout << "\nNo solution found! ";

	// end measuring time here, do computation and print it out
	chrono::steady_clock::time_point stop = chrono::steady_clock::now(); // the stopping time point
	// the next line prints out the duration after casting it to microseconds
	// this is much more elegant than multiplying by 1000, although it's wordier
	cout << "in " << chrono::duration_cast<chrono::microseconds>(stop - start).count() << " microseconds\n" << endl;

	myBoard.display(cout);

	return 0;
}