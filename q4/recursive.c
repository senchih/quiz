#include <stdio.h>


int maxSubArray(int A[], int n)
{
	int sum = A[0];
	int tmp_sum = A[0];
	int tmp = 0;

	if (n > 1) {
		tmp_sum = maxSubArray(A+1, n-1);
	}

	for (int index = 0; index < n; ++index) {
		tmp += A[index];
		if (tmp > sum) sum = tmp;
	}
	if (sum > tmp_sum) 
		return sum;
	else 
		return tmp_sum;
}


int main()
{
    int A[]= {-6, 9, -3, -4, 12, -5 };
    int n = sizeof(A) / sizeof(int);
    int max = maxSubArray(A, n);
    printf("%d\n", max);

    return 0;
}
