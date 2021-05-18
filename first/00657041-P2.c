#include <stdio.h>
int funFor2(int n,int h, int d)
{
	int i, j, k, sum = 0,g,m,sum1,d1;
        g = (h-1)/2;
        d1 = d;
		for (i = 0; i < g; i++)
		{
		    for (k = 1;k <= d*2;k++) { printf(" ");}
		    d -= 1;
			for (j = 1;j <= n;j++)
			{
				printf("*");sum++;
				if (j==n)printf("\n");
			}
			n+=4;
	    }
	    sum1 = sum+ d1;
	    g =(h+1)/2;
	    k = 0;
	    for (i = 0;i<g;i++ )
        {
            if(k>0){for(m = 0;m<k;m++)printf(" ");}
            for(j = 0;j<sum1;j++)
            {
                printf("*"); sum++;
            }
            printf("\n");
            sum1-=2*d1;
            k+=d1;
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
	sum = funFor2(num,hei,def);
	printf("*總數目有%d個", sum);
	return 0;
}
