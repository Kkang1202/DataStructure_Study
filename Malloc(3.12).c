/*Dynamic Memory Allocation*/
/*Visual Studio 2019*/
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
			*(pp + count) = (int*)malloc(sizeof(int) * 2);
		}
		for (int count = 0; count < 2; count++)
		{	
			free(*(pp + count));
		}
	}
	free(pp);
	return 0;
}
