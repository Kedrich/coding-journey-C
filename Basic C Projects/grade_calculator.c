#include <stdio.h>

#define STUDENTS 5

int main(void)
{
    int grade[STUDENTS];
    int passedStudent = 0;      
    int not_passedStudent = 0;  
    int classAverage;
    int sum = 0;

    printf("Please enter your grade\n");
    for (int i = 0; i < STUDENTS; i++)
    {
        printf("Student no. %d, please enter your grade: ", i + 1);
        scanf("%d", &grade[i]);
    }

    printf("\nGrades of the students:\n");
    for (int i = 0; i < STUDENTS; i++)
    {
        printf("Student no. %d = %d\n", i + 1, grade[i]);
        sum += grade[i];

    }

    classAverage = sum / STUDENTS;
    int max = grade[0];


    for (int i = 0; i < STUDENTS; i++)
    {
        if(grade[i] > max)
        {
            max = grade[i];
        }
    }

    for (int i = 0; i < STUDENTS; i++)
    {
        if (grade[i] >= 75) 
        {
            passedStudent++;
        }
        else
        {
            not_passedStudent++;
        }
    }

    printf("The average is %d", classAverage);
    printf("\nThe number of students who passed: %d\n", passedStudent);
    printf("The number of students who did not pass: %d\n", not_passedStudent);
    printf("The highest grade is: %d", max);

    return 0;
}
