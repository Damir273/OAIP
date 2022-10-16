#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	for (int i = 10; i < 100; i++)
	{
		if (pow(i / 10 , 2) + pow(i % 10 , 2) - ((i % 10) * (i / 10) * 3) == 1)
		{
			if (i / (i % 10 + i / 10) == 7 && i % (i % 10 + i / 10) == 6)
			{
				n = i;
			}
		}
	}
	printf("n=%d");
	return 0;
}