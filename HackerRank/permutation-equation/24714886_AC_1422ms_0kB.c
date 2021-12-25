#include <stdio.h>

int main()
{
    int x, i, z;
    
    scanf("%d", &x);
    
    int arr[x];
    
    for(i=0; i<x; i++)
    {
        scanf("%d", &z);
        
        arr[z-1] = i;
    }
    for(i=0; i<x; i++)
        printf("%d\n", arr[arr[i]]+1);
    
    return 0;
}