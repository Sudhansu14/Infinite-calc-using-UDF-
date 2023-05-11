#include<stdio.h>
int add(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
int multi(int a,int b)
{
	return a*b;
}
int divi(int a,int b)
{
	return a/b;
}
int modules(int a,int b)
{
	return a%b;
}

main()

{  
    int a,b,n; 
   
   printf("enter value of A=");
   scanf("%d",&a);
   printf("enter value of B=");
   scanf("%d",&b);
   
   do
   {
   	
   	printf("press 1 for addition(a+b)\n");
   	printf("press 2 for subtraction(a-b)\n");
   	printf("press 3 for multiplaction(a*b)\n");
   	printf("press 4 for division(a/b)\n");
   	printf("press 5 for moduls(a%b)\n");
   	printf("press 0 for exit\n");
   	printf("enter your choice\n");
   	scanf("%d",&n);
   	
   	switch(n)
   	
   	{
	   
   	case 1:
   		printf("addition of a+b=%d",add(a,b));
   		break;
   		
   	case 2:
	    printf("subtraction of a-b=%d",sub(a,b));
	    break;
	    
	case 3:
	    printf("multiplaction of a*b=%d",multi(a,b));
	    break;
	    
	case 4:
		printf("division of a/b=%d",divi(a,b));
		break;
		
	case 5:
		printf("moduls of a%b=%d",modules(a,b));
		break;
		
		
    }
    
    
   }while(n!=0);
   
   
	
}

