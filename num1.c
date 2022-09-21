#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Test2
void already_sorted(int A[])
{
    int i, j, k, temp;
    int comparisons = 0;

    for (i = 0; i < 100; i++) {
        for (j = 0; j < 100; j++)
        {
            if (A[i] > A[j])
            {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
                comparisons++;
            }

        }

    }
    for (k = 0; k < 100; k++)
        printf("%d\n", A[k]);
    printf("Test 2 the number of comparisons = %d\n", comparisons);
    printf("Test 2 solved\n");
}

// Test3
void reversely_sorted(int A[])
{
    int i, j, k, temp;
    int comparisons = 0;

    for (i = 0; i < 100; i++) {
        for (j = 0; j < 100; j++)
        {
            if (A[i] < A[j])
            {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
                comparisons++;
            }

        }

    }
    for (k = 0; k < 100; k++)
        printf("%d\n", A[k]);
    printf("Test 3 the number of comparisons = %d\n", comparisons);
    printf("Test 3 solved\n");

}

// Test1, Main
int main() {
   
    int A[100];
    int i, j, k;

    srand(time(NULL));
    for (i = 0; i < 100; i++)
    {
        A[i] = (rand() % 1000);

        for (j = 0; j < i; j++)
        {
            if (A[i] == A[j])
            {
                i--;
                break;
            }
        }

    }

    for (k = 0; k < 100; k++)
        printf("%d\n", A[k]);
    // Test 1 solved

    printf("Test 1 solved\n");

    already_sorted(A);
    // Test 2 solved

    reversely_sorted(A);
    // Test 3 solved

    return 0;
}


