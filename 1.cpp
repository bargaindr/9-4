/*
ѡ��ṹ�������
����4��������Ҫ���մ�С�����˳�����*/

#include <stdio.h>



int main(){


         int a,b,c,d,t;

        scanf("%d,%d,%d,%d,%d",&a,&b,&c,&d,&t);

		if(a-b>0){
		
		          t=a;  a=b;  b=t;

		}
		if(c-d>0){
		
		          t=c;  c=d;  d=t;
		
		}
        if(b-d>0){
		          
			
			      t=b;  b=d;  d=t;
		
		}
		

		if(a-c>0){
		          
			      t=a;  a=c;  c=t;
		
		}
        if(b-c>0){
		          t=b;  b=c;  c=t;
		
		}



		printf("%d,%d,%d,%d\n\n\n",a,b,c,d);






        return 0;



}