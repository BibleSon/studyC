#include <stdio.h>

void input_score(int*, int*, int* );
int total(int, int, int);
double grade(int);

char grd;

int main()
{
    int kor, eng, mat, tot;
    double avg;

    input_score(&kor, &eng, &mat);
    tot = total(kor, eng, mat);
    avg = grade(tot);

    printf("Æò±Õ : %.1lf, ÇÐÁ¡ : %c\n", avg, grd);
    return 0;
}
