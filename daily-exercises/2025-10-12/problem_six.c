#include <stdio.h>

int main(void)
{
    FILE *student_file;

    student_file = fopen("student.txt", "wt");
    int ID, grade;
    char name[50];

    printf("Please input ID, name, grade: ");
    scanf("%d %s %d", &ID, &name, &grade);

    fprintf(student_file, "%d %s %d", ID, name, grade);

    fclose(student_file);

    return 0;
}
