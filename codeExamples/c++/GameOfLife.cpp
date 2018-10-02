#include <iostream>

using namespace std;

int** init() {

}

void apply_rules (int** gameField) {

}
bool end_of_game (int** gameField ) {

}
void draw_matrix (int** matrixToDraw) {

}
void game_loop () {
    int ** gameOfLifeMatrix = init();
    while (!end_of_game(gameOfLifeMatrix)) {
        apply_rules(gameOfLifeMatrix);
        draw_matrix(gameOfLifeMatrix);
    }
}

int main () {
    game_loop();
    return 0;
}