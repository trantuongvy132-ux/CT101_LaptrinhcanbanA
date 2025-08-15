#define M 5
#define N 5
#define MINE -1
/*Ma?ng B lu?u ba?ng dô` mi`n*/
int B[M][N];

void around_mines(int x, int y) {
    int i, j;
    for (i = x - 1; i <= x + 1; i++) {
        for (j = y - 1; j <= y + 1; j++) {
            if (i >= 0 && i < M && j >= 0 && j < N && B[i][j] != MINE) {
                B[i][j]++;
            }
        }
    }
}

void count_mines() {
    int i, j;
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            if (B[i][j] == MINE) {
                around_mines(i, j);
            }
        }
    }
}

int main() {
    // Kh?i t?o m?ng B ? dây
    // G?i hàm count_mines
    return 0;
}

