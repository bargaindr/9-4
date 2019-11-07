//根据利润提成
#include <stdio.h>
int main()
{

      int l;
	  float j;


      printf("请输入利润\n\n");

	  scanf("%d",l);

	  if(l<=100000)
	  {
		  j=l+(l*0.1);
		  printf("应得奖金%0.4f\n\n",j);
	  }
	  else
		  if(l<=200000)
		  {
			  l=l-100000;
			  j=l+(l*0.075);
			  j=j+(100000*0.1);
			  printf("应得奖金%0.4f\n\n",j);

		  
		  }
		  else
			  if(l<=400000)
			  {
				   l=l-200000;
			       j=l+(l*0.05);
			       j=j+(200000*0.075);
				   printf("应得奖金%0.4f\n\n",j);

			  
			  }
			  else
				  if(l<=600000)
				  {
                   l=l-400000;
			       j=l+(l*0.03);
			       j=j+(400000*0.05);
				   printf("应得奖金%0.4f\n\n",j);
				  
				  }
				  else
					  if(l<=1000000)
					  {
                             l=l-600000;
			                 j=l+(l*0.015);
			                 j=j+(400000*0.03);
							 printf("应得奖金%0.4f\n\n",j);
					  }
					  else
					  {
                             l=l-1000000;
			                 j=l+(l*0.1);
			                 j=j+(400000*0.015);
							 printf("应得奖金%0.4f\n\n",j);
					  }

					  
					  
                               return 0;
				  
}
