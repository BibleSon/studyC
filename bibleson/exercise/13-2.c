#include <stdio.h>
#include <string.h>

double array(double *);

int main()
{
    double ary[] = {0.1, 0.3, 0.5, 0.7, 0.9};
    char string[100] = {0};
    double res;
    int m;

    for(m=0;m<5;m++){
        res = array(ary);
        switch(m){
            case 0: strcpy(string,"ù"); break;
            case 1: strcpy(string,"��"); break;
            case 2: strcpy(string,"��"); break;
            case 3: strcpy(string,"��"); break;
            case 4: strcpy(string,"�ټ�"); break;
        }
        printf("%s��° ȣ���� �� : %.1lf\n",string,res);
    }
    return 0;
}

double array(double *ap)
{
    static int i;
    double result;

    result = ap[i];
    i++;

    return result;
}
