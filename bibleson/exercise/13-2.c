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
            case 0: strcpy(string,"첫"); break;
            case 1: strcpy(string,"두"); break;
            case 2: strcpy(string,"세"); break;
            case 3: strcpy(string,"네"); break;
            case 4: strcpy(string,"다섯"); break;
        }
        printf("%s번째 호출할 때 : %.1lf\n",string,res);
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


