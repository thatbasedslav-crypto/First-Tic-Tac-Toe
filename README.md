# First-Tic-Tac-Toe

## This is my first proper code of a simple Tic Tac Toe game with no in-build AI, coded in C++

It's simple. First, players initialize themselves and then the game starts, until someone wins.
## Rows and columns problem.

This is the numeration of rows and columns:


### Rows:
0 - 1st row.

1 - 2nd row.

2 - 3rd row.


### Columns:
0 - 1st column.

1 - 2nd column.

2 - 3rd column.


## Bugs
If you enter an invalid input, the game shuts down and you have to restart it.

Works for both X, O and column/row numbers.

## Mechanics you should consider
1. If you try inputing the same coordinate two or more times in a row, game won't crash and the already marked cell will be overwritten, it is intended.
2. If you try inputting the same coordinate twice as both X and O, game will shut down.
3. Automatic check for a winner. For every move, the game checks 8 different winning combinations. After one of them is true, game ends, displaying a winner.
