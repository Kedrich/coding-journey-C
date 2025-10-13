#include <stdio.h>

int main(void)
{
    FILE *student_file;

    student_file = fopen("student.txt", "wt");
    int ID1, ID2, ID3, ID4, ID5;
    float grade1, grade2, grade3, grade4, grade5;
    char name1[50], name2[50], name3[50], name4[50], name5[50];

    printf("Please input ID, name, grade (1): ");
    scanf("%d %s %f", &ID1, name1, &grade1);

    printf("Please input ID, name, grade (2): ");
    scanf("%d %s %f", &ID2, name2, &grade2);

    printf("Please input ID, name, grade (3): ");
    scanf("%d %s %f", &ID3, name3, &grade3);

    printf("Please input ID, name, grade (4): ");
    scanf("%d %s %f", &ID4, name4, &grade4);

    printf("Please input ID, name, grade (5): ");
    scanf("%d %s %f", &ID5, name5, &grade5);

    float average_grade;
    average_grade = (grade1 + grade2 + grade3 + grade4 + grade5) / 5.0;


    fprintf(student_file, "Student ID: %d Student Name: %s Student Grade: %.2f\n", ID1, name1, grade1);
    fprintf(student_file, "Student ID: %d Student Name: %s Student Grade: %.2f\n", ID2, name2, grade2);
    fprintf(student_file, "Student ID: %d Student Name: %s Student Grade: %.2f\n", ID3, name3, grade3);
    fprintf(student_file, "Student ID: %d Student Name: %s Student Grade: %.2f\n", ID4, name4, grade4);
    fprintf(student_file, "Student ID: %d Student Name: %s Student Grade: %.2f\n", ID5, name5, grade5);
    fprintf(student_file, "Average Grade: %.2f", average_grade);

    fclose(student_file);

    return 0;
}
