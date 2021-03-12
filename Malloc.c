/*Dynamic Memory Allocation - 2*3 Matrix */
/*Visual Studio*/
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int** pp;
	pp = (int**)malloc(sizeof(int*) * 2);
	if (pp != NULL)
	{
		for (int count = 0; count < 2; count++)
		{
			*(pp + count) = (int*)malloc(sizeof(int) * 3);
		}
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (*(pp + i) != NULL)
				{
					*(*(pp + i) + j) = 1;
				}
			}
		}
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (*(pp + i) != NULL)
				{
					printf("%d ", *(*(pp + i) + j));
				}
			}
		}
	}
	if (pp != NULL)
	{
		for (int count = 0; count < 2; count++)
		{
			free(*(pp + count));
		}
	}
	free(pp);
	return 0;
}