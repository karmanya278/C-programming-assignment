#include <stdlib.h>

int* gradingStudents(int grades_count, int* grades, int* result_count)
{
    int *result = malloc((size_t)grades_count * sizeof(int));
    if (result == NULL)
    {
        *result_count = 0;
        return NULL;
    }

    *result_count = grades_count;

    for (int i = 0; i < grades_count; i++)
    {
        int grade = grades[i];
        int next_multiple = ((grade / 5) + 1) * 5;

        if (grade >= 38 && next_multiple - grade < 3)
            result[i] = next_multiple;
        else
            result[i] = grade;
    }

    return result;
}
