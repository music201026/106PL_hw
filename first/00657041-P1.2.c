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
	printf("��J�Ĥ@�檺*�Ӽ�:");
	scanf("%d", &num);
	printf("��J��Ϊ�����:");
	scanf("%d", &hei);
	printf("�C�檺�t��:");
	scanf("%d", &def);
	sum = funFor(num,hei,def);
	printf("*�`�ƥئ�%d��", sum);
	return 0;
}
