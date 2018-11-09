#include "score.h"

int score(float R) {
    int sc;
    if (R <= 1) { sc = 5; }
    else if (R <= 2) { sc = 4; }
    else if (R <= 3) { sc = 3; }
    else if (R <= 4) { sc = 2; }
    else if (R <= 5) { sc = 1; }
    else { sc = 0; };
    return sc;
}