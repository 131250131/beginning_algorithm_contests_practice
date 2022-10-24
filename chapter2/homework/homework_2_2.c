#include<stdio.h>

// 2 1 6 
// 41

// 2 1 3
// No answer

// 3x + a  = 5y + b = 7z + c

int main() {
    FILE *fin, *fout;
    fin = fopen("homework_2_2.in", "rb");
    fout = fopen("homework_2_2.out", "wb");
    int a = 0, b = 0, c = 0;
    while (fscanf(fin, "%d%d%d", &a, &b, &c) == 3) {
        int answer = 0;
        for (int i = 10; i < 101; i++) {
            if (i % 3 == a && i % 5 == b && i % 7 == c) {
                answer = i;
                break;
            }
        }
        if (answer) {
            fprintf(fout,"%d\n", answer);
        } else {
            fprintf(fout,"No answer\n");
        }


    }
    fclose(fin);
    fclose(fout);
    return 0;
}
