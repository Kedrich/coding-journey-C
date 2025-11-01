#include <stdio.h>

#define N 5

int main(void)
{
    int quiz_score[N][N];

    for (int i = 0; i < N; i++)
    {
        printf("Enter scores for Quiz #%d (for %d students): ", i + 1, N);
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &quiz_score[i][j]);
        }
    }

    int quiz_total_row[N] = {0};     
    int quiz_total_column[N] = {0};   
    int highest_score[N];             
    int lowest_score[N];             

    for (int i = 0; i < N; i++)
    {
        highest_score[i] = quiz_score[i][0];
        lowest_score[i] = quiz_score[i][0];
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            quiz_total_row[i] += quiz_score[i][j];  
            quiz_total_column[j] += quiz_score[i][j];

            if (quiz_score[i][j] > highest_score[i])
                highest_score[i] = quiz_score[i][j];

            if (quiz_score[i][j] < lowest_score[i])
                lowest_score[i] = quiz_score[i][j];
        }
    }

    printf("\nTotal quiz scores per quiz: ");
    for (int i = 0; i < N; i++)
        printf("%d ", quiz_total_row[i]);

    printf("\nTotal scores per student: ");
    for (int j = 0; j < N; j++)
        printf("%d ", quiz_total_column[j]);

    printf("\n\nAverage score per quiz:\n");
    for (int i = 0; i < N; i++)
    {
        float avg = quiz_total_row[i] / (float)N;
        printf("Quiz #%d Average: %.2f\n", i + 1, avg);
    }

    printf("\nHighest and Lowest Scores per Quiz:\n");
    for (int i = 0; i < N; i++)
    {
        printf("Quiz #%d -> Highest: %d, Lowest: %d\n", i + 1, highest_score[i], lowest_score[i]);
    }

    return 0;
}
