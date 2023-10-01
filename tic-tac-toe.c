#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char board[3][3] = {
    {'1', '2', '3'},
    {'4', '5', '6'},
    {'7', '8', '9'}
};

char currentPlayer = 'X';

void displayBoard() {
    printf("+---+---+---+\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("| %c ", board[i][j]);
        }
        printf("|\n");
        printf("+---+---+---+\n");
    }
}

void enterMove() {
    int move;
    int ok = 0;
    while (!ok) {
        printf("Enter your move enemy 😈 (1-9): ");
        scanf("%d", &move);
        ok = (move >= 1 && move <= 9);
        if (!ok) {
            printf("Are you Blind 😑😑: repeat your input!\n");
            continue;
        }
        int row = (move - 1) / 3;
        int col = (move - 1) % 3;
        char sign = board[row][col];
        ok = (sign != 'O' && sign != 'X');
        if (!ok) {
            printf("Are you Blind 😑😑: repeat your input!\n");
            continue;
        }
        board[row][col] = 'O';
    }
}

void makeListOfFreeFields(int* freeRows, int* freeCols, int* freeCount) {
    *freeCount = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] != 'O' && board[i][j] != 'X') {
                freeRows[*freeCount] = i;
                freeCols[*freeCount] = j;
                (*freeCount)++;
            }
        }
    }
}

char victoryFor(char sgn) {
    if (sgn == 'X') {
        return 'm';
    } else if (sgn == 'O') {
        return 'y';
    } else {
        return 'n';
    }
}

void drawMove() {
    int freeRows[9], freeCols[9], freeCount;
    makeListOfFreeFields(freeRows, freeCols, &freeCount);
    if (freeCount > 0) {
        int this = rand() % freeCount;
        int row = freeRows[this];
        int col = freeCols[this];
        board[row][col] = 'X';
    }
}

int main() {
    srand(time(NULL));
    displayBoard();
    int freeRows[9], freeCols[9], freeCount;
    makeListOfFreeFields(freeRows, freeCols, &freeCount);
    int humanTurn = 1;
    char victor = 'n';

    while (freeCount > 0) {
        if (humanTurn) {
            enterMove();
            victor = victoryFor('O');
        } else {
            drawMove();
            victor = victoryFor('X');
        }
        displayBoard();
        if (victor != 'n') {
            break;
        }
        humanTurn = !humanTurn;
        makeListOfFreeFields(freeRows, freeCols, &freeCount);
    }

    displayBoard();
    if (victor == 'y') {
        printf("Shit 😣😥😡, You won!\n");
    } else if (victor == 'm') {
        printf("U LOOSER: 😁😁😁😁I won\n");
    } else {
        printf("Good Game: 🙌🙌 Its a Tie!\n");
    }

    return 0;
}
