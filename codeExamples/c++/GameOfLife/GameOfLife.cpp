#include <iostream>
#include <cstdlib>
#include <unistd.h>

using namespace std;


int GLOBAL_LENGTH = 0;  

int** initGameField() {
    int** matrix;
    cin >> GLOBAL_LENGTH;

    matrix = new int* [GLOBAL_LENGTH];
    for (int i = 0; i < GLOBAL_LENGTH; i++) {
        matrix[i] = new int [GLOBAL_LENGTH];
    }

    for (int i = 0; i < GLOBAL_LENGTH; i++) {
        for (int j = 0; j < GLOBAL_LENGTH; j++) {
            cin >> matrix[i][j];
        }
    }

    return matrix;
}

int** initPrevState() {
    int** previousMatrix = new int* [GLOBAL_LENGTH];
    for (int i = 0; i < GLOBAL_LENGTH; i++) {
        previousMatrix[i] = new int [GLOBAL_LENGTH];
    }
    for (int i = 0; i < GLOBAL_LENGTH; i++) {
        for (int j = 0; j < GLOBAL_LENGTH; j++) {
            previousMatrix[i][j] = 0;
        }
    }
    return previousMatrix;
}
int count_neighbours (int positionX, int positionY, int** matrix) {
    int neigbours = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j <= 3; j++) {
            if (matrix[(positionX + i + GLOBAL_LENGTH) % GLOBAL_LENGTH][(positionY + j + GLOBAL_LENGTH) % GLOBAL_LENGTH] == 1) {
                if (i  != 0 || j != 0) {
                    neigbours += 1;
                }
            }
        }
    }
    return neigbours;
}
void apply_rules (int** newStateField,int** prevoiusState) {
    for (int i = 0; i < GLOBAL_LENGTH; i++) {
        for (int j = 0; j < GLOBAL_LENGTH; j++) {
            int neigbours = count_neighbours(i, j, prevoiusState);
            if (neigbours < 2 || neigbours > 3) {
                newStateField[i][j] = 0;
            } else {
                newStateField[i][j] = 1;
                cout << "Populate " << i << " " << j << endl;
            }
        }
    }
}

bool end_of_game (int** currentGameField, int** prevGameField) {
    for (int i = 0; i < GLOBAL_LENGTH; i++) {
        for (int j = 0; j < GLOBAL_LENGTH; j++) {
            if (currentGameField[i][j] != prevGameField[i][j]) {
                return false; 
            }
        }
    }
    return true;
}

void draw_matrix (int** matrixToDraw) {
    for (int i = 0; i < GLOBAL_LENGTH; i++) {
        for (int j = 0; j < GLOBAL_LENGTH; j++) {
            cout << matrixToDraw[i][j] << " ";
        }
        cout << endl;
    }
}

void update_prev_matrix (int** currentGameField, int** prevGameField) {
    for (int i = 0; i < GLOBAL_LENGTH; i++) {
        for (int j = 0; j < GLOBAL_LENGTH; j++) {
            prevGameField[i][j] = currentGameField[i][j];
        }
    }
}

void clear_matrix (int **matrix) {
    for (int i = 0; i < GLOBAL_LENGTH; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

void game_loop () {
    int ** gameOfLifeMatrix = initGameField();
    int ** prevMatrix = initPrevState();
    while (!end_of_game(gameOfLifeMatrix, prevMatrix)) {
        update_prev_matrix(gameOfLifeMatrix, prevMatrix);
        apply_rules(gameOfLifeMatrix, prevMatrix);
        draw_matrix(gameOfLifeMatrix);
        sleep(2);
        system("clear");
    }
    clear_matrix(gameOfLifeMatrix);
    clear_matrix(prevMatrix);
}

int main () {
    game_loop();
    return 0;
}