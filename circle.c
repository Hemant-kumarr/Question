
#include <stdio.h>
int main()
{   int r;
    printf("Enter the radius of the circle:-");
    scanf("%d", &r);
	int N = 2*r+1;

	int x, y; 

	
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N ; j++)
		{
			
			x = i-r;
			y = j-r;

		
			if (x*x + y*y <= r*r+1 )
				printf("*");
			else 
				printf(" ");
			printf(" ");
		}
		printf("\n");
	}
    return 0;
}

	

