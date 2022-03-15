#include <stdio.h>

//queen[i] = column number of queen at ith row
int queen[20];
//arrays to mark if thgere is queen or not
//
int column[20], diagonal1[40], diagonal2[40];

//call with nqueen(1, 8) for 8 queen problem
//make sure column, diagonal1, diagonal2 are all 0 initially

void nqueen(int at, int n)
{
	int i;
	if(at == n + 1)
	{
		printf("(row, column) = ");
		for(i = 1; i <= n; i++) printf("(%d, %d) ", i, queen[i]);
		printf("\n");
		return;
	}
	
	for(i = 1; i <= n; i++)
	{
		if(column[i] || diagonal1[i + at] || diagonal2[n + i - at])continue;
		queen[at] = i;
		
		//note that, i - at can be negative and we
		//cant have array index negative so we are
		// adding offset n with this to make it
		//positive.
		
		column[i] = diagonal1[i + at] = diagonal2[n + i - at] = 1;
		nqueen(at + 1, n);
		
		column[i] = diagonal1[i + at] = diagonal2[n + i - at] = 0;
	}
}
		

int main()
{
	int i;
	for(i = 0; i < 20; i++)
	{
		queen[i] = 0;
		column[i] = 0;
	}
	for(i = 0; i < 40; i++)
	{
		diagonal1[i] = 0;
		diagonal2[i] = 0;
	}
	nqueen(1, 8);
	
	return 0;
}
