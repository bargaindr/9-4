/*
����һ��������5λ����������Ҫ��
1��������Ǽ�λ��
2���ֱ����ÿһλ����
3�������������λ���֣�����ԭ��Ϊ321��Ӧ���123
*/
#include <stdio.h>

int main(){
 
	int z,g,s,b,q,w,j,nx;
	int i=0;
	printf("����һ��������5λ��������\n\n");
	scanf("%d",&z);
    j=z;                      //������z��ֵΪ�ڶ���Ҫ��������׼��
	
	while(z>0)
	{z=z*0.1;
	 i++;
	}
    printf("����%dλ��\n\n",i);
      
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