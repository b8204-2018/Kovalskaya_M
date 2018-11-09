#include <iostream>
#include "score.cpp"
using namespace std;

int main() {
    float x, y;
    scanf_s("%f%f", &x, &y);
    float R = sqrt(x*x + y*y);
    int sc = score(R);
    printf_s("%d", sc);
    return 0;
}
