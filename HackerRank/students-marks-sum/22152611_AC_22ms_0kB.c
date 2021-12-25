int marks_summation(int* marks, int number_of_students, char gender) {
   int i, c = 0;
   if(gender=='b')
        for(i=0; i<number_of_students; i+=2)
             c += *(marks+i);
    if(gender=='g')
        for(i=1; i<number_of_students; i+=2)
             c += *(marks+i);
    return c;
}