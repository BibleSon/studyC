#include <stdio.h>
#include <string.h>

int main()
{
    char animal[][10] = {"monkey","elephant","dog","sheep","pig","lion","tiger","puma","turtle","fox"};
    int i, count, memory;
    int mem = 0;

    count = sizeof(animal)/sizeof(animal[0]);

    for(i=0;i<count;i++){
        printf("%s\n",animal[i]);
    }

    memory = sizeof(animal);
    for(i=0;i<count;i++){
        mem += (strlen(animal[i])+1);
    }

    printf("낭비되는 기억공간의 비율 : %.2lf%%",((memory - mem)/(double)memory)*100);

    return 0;
}
