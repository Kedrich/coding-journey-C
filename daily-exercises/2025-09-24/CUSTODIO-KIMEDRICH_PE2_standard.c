#include <stdio.h>

int main(void)
{
    /* Name: Kim Edrich B. Custodio
     * Block: CS1B
     * Title: Quiz Report Generator
     * Description: Calculates and displays a student's quiz scores, ratings, and average rating.
     */

    char first_name[99];

    // Total and received points for each quiz:
    int total_quiz1, total_quiz2, total_quiz3, total_quiz4, total_quiz5;
    int receive_quiz1, receive_quiz2, receive_quiz3, receive_quiz4, receive_quiz5;

    // INPUTS:
    printf("Input first name of student: ");
    scanf(" %98s", first_name);

    printf("Please input five pairs of integer values representing the total number of points and score of %s's quizzes.\n", first_name);

    // Quiz 1:
    printf("Input Quiz 1 : ");
    scanf("%d %d", &total_quiz1, &receive_quiz1);

    // Quiz 2:
    printf("Input Quiz 2 : ");
    scanf("%d %d", &total_quiz2, &receive_quiz2);

    // Quiz 3:
    printf("Input Quiz 3 : ");
    scanf("%d %d", &total_quiz3, &receive_quiz3);

    // Quiz 4:
    printf("Input Quiz 4 : ");
    scanf("%d %d", &total_quiz4, &receive_quiz4);

    // Quiz 5:
    printf("Input Quiz 5 : ");
    scanf("%d %d", &total_quiz5, &receive_quiz5);

    // CALCULATIONS:
    float rating_quiz1 = ((float)receive_quiz1 / total_quiz1) * 100;
    float rating_quiz2 = ((float)receive_quiz2 / total_quiz2) * 100;
    float rating_quiz3 = ((float)receive_quiz3 / total_quiz3) * 100;
    float rating_quiz4 = ((float)receive_quiz4 / total_quiz4) * 100;
    float rating_quiz5 = ((float)receive_quiz5 / total_quiz5) * 100;

    // Average rating:
    float average_rating = (rating_quiz1 + rating_quiz2 + rating_quiz3 + rating_quiz4 + rating_quiz5) / 5.0;

    // OUTPUTS:
    printf("\nQuiz Report of \"%s\"\n", first_name);
    printf("------------------------------------\n");
    printf("| QUIZ# | SCORE | TOTAL |  RATING  |\n");
    printf("------------------------------------\n");
    printf("|   1   |  %4d |  %4d | %6.2f%%  |\n", receive_quiz1, total_quiz1, rating_quiz1);
    printf("|   2   |  %4d |  %4d | %6.2f%%  |\n", receive_quiz2, total_quiz2, rating_quiz2);
    printf("|   3   |  %4d |  %4d | %6.2f%%  |\n", receive_quiz3, total_quiz3, rating_quiz3);
    printf("|   4   |  %4d |  %4d | %6.2f%%  |\n", receive_quiz4, total_quiz4, rating_quiz4);
    printf("|   5   |  %4d |  %4d | %6.2f%%  |\n", receive_quiz5, total_quiz5, rating_quiz5);

    printf("\nQuiz Average Rating: %.2f%%\n", average_rating);

    return 0;
}