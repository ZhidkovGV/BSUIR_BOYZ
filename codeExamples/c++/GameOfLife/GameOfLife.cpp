#include <iostream>

using namespace std;

int** init() {

}

void apply_rules (int** gameField) {

}

bool end_of_game (int** currentGameField, int** prevGameField) {

}

void draw_matrix (int** matrixToDraw) {

}
void update_prev_matrix (int** currentGameField, int** prevGameField) {

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
}

int main () {
    game_loop();
    return 0;
}