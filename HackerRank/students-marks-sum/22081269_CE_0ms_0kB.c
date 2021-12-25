#include<stdio.h>
int  marks_summation(int *marks, char gender, int number_of_students)
{
    int i, count = 0;

    if(gender=='b')
        for(i=0; i<number_of_students; i+=2)
            count += marks[i];
    else if(gender=='g')
        for(i=1; i<number_of_students; i+=2)
            count += marks[i];

    return count;
}
int main ()
{
    int n, i, count = 0;
    char ch;
    scanf("%d", &n);
    int a[n];

    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    scanf(" %c", &ch);
    count = marks_summation(&a,ch,n);

    printf("%d", count);

    return 0;
}
