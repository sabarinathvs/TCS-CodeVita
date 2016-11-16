#include <stdio.h>
#include <stdlib.h>
 
#define valid(i, j) 0 <= i && i < m && 0 <= j && j < n && !s[i][j]
int main(int c, char **v)
{
	int i, j, order,m = 0, n = 0,count=1;
 int ix[100],iy[100];
 int ixord=0,iyord=0;
 ix[ixord]=0;
 iy[iyord]=0;
ixord++;
iyord++;
	scanf("%d",&order);
	if (c >= 2) m = atoi(v[1]);
	if (c >= 3) n = atoi(v[2]);
	if (m <= 0) m = order;
	if (n <= 0) n = m;
 
	int **s = calloc(1, sizeof(int *) * m + sizeof(int) * m * n);
	s[0] = (int*)(s + m);
	for (i = 1; i < m; i++) s[i] = s[i - 1] + n;
 
	int dx = 1, dy = 0, val = 0, t;
	for (i = j = 0; valid(i, j); i += dy, j += dx ) {
		for (; valid(i, j); j += dx, i += dy)
			s[i][j] = ++val;
 
		j -= dx; i -= dy;
		t = dy; dy = dx; dx = -t;
	}
 
	for (t = 2; val /= 10; t++);
 
	for(i = 0; i < m; i++)
		for(j = 0; j < n || !putchar('\n'); j++)
			{
				printf("%d\t", s[i][j]);
				if(s[i][j]%11==0)
				{
					ix[ixord]=i;
					iy[iyord]=j;
					ixord++;
					iyord++;
					count++;
				}
			}
 	printf("Total Power points : %d",count);
 	printf("\n(0,0)");
 	for(i=count-1;i>0;i--)
 	{
 		printf("\n(%d,%d)",ix[i],iy[i]);
 	}
	return 0;
}
