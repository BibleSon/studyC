#include <stdio.h>

int main(void)
{
    int arr[] = {1,5,4,3,7,8,2,9};
    int len, n, m, tmp, length;

    length = sizeof(arr)/sizeof(arr[0]);
    len = length;

    while(length--){
        for(n=0; n<length-1; n++){
            if(arr[n]>arr[n+1]){
                tmp=arr[n];
                arr[n]=arr[n+1];
                arr[n+1]=tmp;
            }
        }
    }
    for(m=0; m<len; m++){
    printf("%d",arr[m]);
    }
}
