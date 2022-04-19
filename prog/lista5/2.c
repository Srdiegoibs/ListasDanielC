#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define N 8

int main()
{
	long long int **mat, i, j, k = 0;
	long double s = 0;
	mat = malloc(N * sizeof(long long int *));

	for (i = 0; i < N; i++)
		mat[i] = malloc(N * sizeof(long long int));

	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
		{
			mat[i][j] = (pow(2.0, k));
			s += mat[i][j];
			printf("\ns = %0.Lf \n", s);
			k++;
		}

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			printf("[%lld]", mat[i][j]);
		}
		printf("\n");
	}

	printf("\n %0.Lf \n", s);

	for (i = 0; i < N; i++)
		free(mat[i]);

	free(mat);

	return 0;
}
