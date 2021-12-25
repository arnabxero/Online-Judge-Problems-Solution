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