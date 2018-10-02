#include <iostream>

using namespace std;

int** init() {
    int length = 0;
    int ** matrix;
    cin >> length;
    matrix = new int* [length];
    
    return matrix;
}

void apply_rules (int** gameField) {

}

bool end_of_game (int** currentGameField, int** prevGameField) {

}

void draw_matrix (int** matrixToDraw) {
    cout << sizeof(matrixToDraw) / sizeof(matrixToDraw[0]) << endl;
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
        apply_rules(gameOfLifeMatrix);
        draw_matrix(gameOfLifeMatrix);
        update_prev_matrix(gameOfLifeMatrix, prevMatrix);
    }
    clear_matrix(gameOfLifeMatrix);
    clear_matrix(prevMatrix);
}

int main () {
    
    return 0;
}