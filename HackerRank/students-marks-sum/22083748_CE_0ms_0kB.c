#include<stdio.h>
#include<stdlib.h>
int marks_summation(int *marks, char gender, int number_of_students)
{
    int j, c = 0;
    if(gender=='b')
        for(j=0; j<number_of_students; j+=2)
            c += *(marks+j);
    if(gender=='g')
        for(j=1; j<number_of_students; j+=2)
            c += *(marks+j);

    return c;
}
int main ()
{
    int n, i;
    scanf("%d", &n);
    int *a;
    a = (int*)malloc(n*sizeof(int));
    for(i=0; i<n; i++)
        scanf("%d", &(*(a+i)));
    char ch;
    scanf("\n%c", &ch);

    int x = marks_summation(a, ch, n);


    printf("%d", x);
    free(a);

    return 0;

}
