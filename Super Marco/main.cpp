#include <iostream>
#include <cassert>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>

using namespace std;

double scosse(int n) {
}


int main() {
    FILE *fr, *fw;
    int N;

    fr = fopen("input.txt", "r");
    fw = fopen("output.txt", "w");
    assert(1 == fscanf(fr, "%d", &N));
    fprintf(fw, "%.6f\n", scosse(N));
    fclose(fr);
    fclose(fw);
    return 0;
}



