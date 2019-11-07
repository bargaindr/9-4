#include <stdio.h>
#include <math.h>
int main()
{
   

   int x,y;
   printf("输入一个小于1000的正数\n\n");

   scanf("%d",&x);
    if(x<=1000)
	{
	        y=pow(x,2);

			printf("它的平方根是%d\n\n",y);
	
	}
	else
		printf("重新开始吧 看标题\n\n");
	













  return 0;
}