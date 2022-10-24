#include<stdio.h>

int main() {
    FILE *fin, *fout;
    fin = fopen("homework_2_5.in", "rb");
    fout = fopen("homework_2_5.out", "wb");
    int a,b,c;
    while (fscanf(fin, "%d%d%d", &a, &b, &c) == 3) {
        if (a == 0 && b == 0 && c == 0) {
            break;
        }
        int k = a / b;
        fprintf(fout, "%d.", k);
        int left = a % b;
        while (c > 0) {
            c --;
            left *= 10;
            int k = left / b;
            left = left % b;
            fprintf(fout, "%d", k);
        }
            fprintf(fout, "\n");
    }
    fclose(fin);
    fclose(fout);
    return 0;
}