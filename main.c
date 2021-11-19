#include <stdio.h>
#include <stdlib.h>

int main()
{
    float degree, average=0;
    int students_number = 0;

    printf("Enter negative number to stop program:\n");

    while(degree>-1)
    {
        students_number++;
        printf("Enter degree for student (%d):", students_number);
        scanf("%f", &degree);
        average+=degree;


    }
    average-=degree;
    students_number--;
    if(students_number==0)
    {
        printf("There is no students degree to calc");
        return 0;

    }




    printf("Average degree for the students %.2f", average/students_number);


    return 0;
}
