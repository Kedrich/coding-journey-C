#include <stdio.h>

int main(void)
{
    /* Name: Kim Edrich B. Custodio
     * Block: CS1B
     * Program Title: Quiz Report Generator with File I/O
     * Description: Reads quiz data from a file (data.in), computes ratings and average,
     * and writes a formatted report both to the screen and to a file (report.out).
     */

    char first_name[99];
    int total_quiz1, total_quiz2, total_quiz3, total_quiz4, total_quiz5;
    int receive_quiz1, receive_quiz2, receive_quiz3, receive_quiz4, receive_quiz5;

    FILE *input, *output;

    // Open files
    input = fopen("data.in", "rt");
    output = fopen("report.out", "wt");

    // Read data from data.in
    fscanf(input, "%98s", first_name);
    fscanf(input, "%d %d", &total_quiz1, &receive_quiz1);
    fscanf(input, "%d %d", &total_quiz2, &receive_quiz2);
    fscanf(input, "%d %d", &total_quiz3, &receive_quiz3);
    fscanf(input, "%d %d", &total_quiz4, &receive_quiz4);
    fscanf(input, "%d %d", &total_quiz5, &receive_quiz5);

    // Calculate ratings
    float rating_quiz1 = ((float)receive_quiz1 / total_quiz1) * 100;
    float rating_quiz2 = ((float)receive_quiz2 / total_quiz2) * 100;
    float rating_quiz3 = ((float)receive_quiz3 / total_quiz3) * 100;
    float rating_quiz4 = ((float)receive_quiz4 / total_quiz4) * 100;
    float rating_quiz5 = ((float)receive_quiz5 / total_quiz5) * 100;

    float average_rating = (rating_quiz1 + rating_quiz2 + rating_quiz3 + rating_quiz4 + rating_quiz5) / 5.0;

    // Print report to screen
    printf("Quiz Report of \"%s\"\n", first_name);
    printf("------------------------------------\n");
    printf("| QUIZ# | SCORE | TOTAL |  RATING  |\n");
    printf("------------------------------------\n");
    printf("|   1   |  %4d |  %4d | %6.2f%%  |\n", receive_quiz1, total_quiz1, rating_quiz1);
    printf("|   2   |  %4d |  %4d | %6.2f%%  |\n", receive_quiz2, total_quiz2, rating_quiz2);
    printf("|   3   |  %4d |  %4d | %6.2f%%  |\n", receive_quiz3, total_quiz3, rating_quiz3);
    printf("|   4   |  %4d |  %4d | %6.2f%%  |\n", receive_quiz4, total_quiz4, rating_quiz4);
    printf("|   5   |  %4d |  %4d | %6.2f%%  |\n", receive_quiz5, total_quiz5, rating_quiz5);
    printf("\nQuiz Average Rating: %.2f%%\n", average_rating);

    // Write same report to file
    fprintf(output, "Quiz Report of \"%s\"\n", first_name);
    fprintf(output, "------------------------------------\n");
    fprintf(output, "| QUIZ# | SCORE | TOTAL |  RATING  |\n");
    fprintf(output, "------------------------------------\n");
    fprintf(output, "|   1   |  %4d |  %4d | %6.2f%%  |\n", receive_quiz1, total_quiz1, rating_quiz1);
    fprintf(output, "|   2   |  %4d |  %4d | %6.2f%%  |\n", receive_quiz2, total_quiz2, rating_quiz2);
    fprintf(output, "|   3   |  %4d |  %4d | %6.2f%%  |\n", receive_quiz3, total_quiz3, rating_quiz3);
    fprintf(output, "|   4   |  %4d |  %4d | %6.2f%%  |\n", receive_quiz4, total_quiz4, rating_quiz4);
    fprintf(output, "|   5   |  %4d |  %4d | %6.2f%%  |\n", receive_quiz5, total_quiz5, rating_quiz5);
    fprintf(output, "\nQuiz Average Rating: %.2f%%\n", average_rating);

    fclose(input);
    fclose(output);

    return 0;
}
