/*
给出一个不多于5位的正整数，要求：
1）求出它是几位数
2）分别输出每一位数字
3）按逆序输出各位数字，例如原数为321，应输出123
*/
#include <stdio.h>

int main(){
 
	int z,g,s,b,q,w,j,nx;
	int i=0;
	printf("输入一个不多于5位的正整数\n\n");
	scanf("%d",&z);
    j=z;                      //复制下z的值为第二个要求运算做准备
	
	while(z>0)
	{z=z*0.1;
	 i++;
	}
    printf("它是%d位数\n\n",i);
      
	  if(i<=1)
	  {
	          g=j*0.1;
	
	  printf("%d\n\n",g);
	  
      }
      else 
		  if(i<=2)
		  {
	          g=j*0.1;
		      s=j%10;

			  printf("%d,%d\n\n",g,s);
		       
		  }
		  else
			  if(i<=3)
			  {
				  g=j*0.01;
				  s=j*0.1;
				  s=s%10;
				  b=j%100;
				  b=b%10;
				  
              printf("%d,%d,%d\n\n",g,s,b);
			  }
			  else
				   if(i<=4)
			  
				  {
			  
					  g=j*0.001;
			  
					  s=j*0.01;
			  
					  s=s%10;
			 
					  b=j%1000;
			  
					  b=b%100;
			  
					  b=b*0.1;
			  
					  q=j%1000;
			  
					  q=q%100;
			  
					  q=q%10;
			  
					  printf("%d,%d,%d,%d\n\n",g,s,b,q);
			  
				      
				 }
				   

			  
				 
		 
		
	  







         return 0;


}
