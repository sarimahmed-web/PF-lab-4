#include<stdio.h>
int main()
{
	int num1,num2;
	printf("enter the num1\n");
	scanf("%d",&num1);
	printf("enter the num2\n");
	scanf("%d",&num2);
	char operation;
	printf("enter the operation(+,-,/,*)\n");
	scanf(" %c",&operation);
	
	switch (operation){
	

	case '+':
	

		printf("sum is %d ",num1+num2);
		break;
		case '-':
			
		
			printf("subtraction is %d",num1-num2);
		break;
		
			case '*':
	

		printf("multiplication is %d ",num1*num2);
		break;
			case '/':
				if (num2==0){
					printf("Error: Division by zero is not allowed");
					
				}
	
           else {
           		   printf("division is %d ",num1/num2);
		   }
	
 		
		break;
		
		
		
		
		
		
		
}
	
	
	
	return 0;
}

