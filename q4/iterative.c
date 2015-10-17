#include <stdio.h>

int maxSubArray(int A[], int n)
{
    int max = A[0];
    int tmp_max = 0;
    for (int i = 0; i < n; ++i) {
        if (tmp_max < 0)
            tmp_max = A[i];
        else
            tmp_max += A[i];

        //choose the bigger
        if( tmp_max > max )
            max = tmp_max;
    }
    return max;
}

int main()
{
    int A[]= {-1, 2, 3, -4, 8 };
    int n = sizeof(A) / sizeof(int);
    int max = maxSubArray(A, n);
    printf("%d\n", max);

    return 0;
}
