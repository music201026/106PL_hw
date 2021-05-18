#include <stdio.h>
int funFor(int n,int h, int d)
{
	int i, j, k, sum = 0,d1;
        d1=d;
		for (i = 0; i < h; i++)
		{

			for (j = 1;j <= n;j++)
			{
				printf("*");sum++;
                if(j==n)  printf("\n");
			}
			n-=(2*d);
			if(i<(h-1))
            {for (k = 1;k <= (d1*2-2);k++) { printf(" ");}
		    d1 += 1;
            }
	    }
		return sum;
}
int main() {
	int num, hei, def, sum;
	printf("輸入第一行的*個數:");
	scanf("%d", &num);
	printf("輸入梯形的高度:");
	scanf("%d", &hei);
	printf("每行的差異:");
	scanf("%d", &def);
	sum = funFor(num,hei,def);
	printf("*總數目有%d個", sum);
	return 0;
}
