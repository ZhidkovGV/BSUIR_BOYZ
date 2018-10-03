#include <iostream>

using namespace std;


int GLOBAL_LENGTH = 0;

int** init() {
    int ** matrix;
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

void apply_rules (int** gameField) {

}

bool end_of_game (int** currentGameField, int** prevGameField) {
    return false;
}

void draw_matrix (int** matrixToDraw) {
    for (int i = 0; i < GLOBAL_LENGTH; i++) {
        for (int j = 0; j < GLOBAL_LENGTH; j++) {
            cout << matrixToDraw[i][j];
        }
        cout << endl;
    }
}

void update_prev_matrix (int** currentGameField, int** prevGameField) {

}

void clear_matrix (int **matrix) {

}

void game_loop () {
    int ** gameOfLifeMatrix = init();
    int ** prevMatrix;
    update_prev_matrix(gameOfLifeMatrix, prevMatrix);
    while (!end_of_game(gameOfLifeMatrix, prevMatrix)) {
        update_prev_matrix(gameOfLifeMatrix, prevMatrix);
        apply_rules(gameOfLifeMatrix);
        draw_matrix(gameOfLifeMatrix);
    }
    clear_matrix(gameOfLifeMatrix);
    clear_matrix(prevMatrix);
}

int main () {
    game_loop();
    return 0;
}