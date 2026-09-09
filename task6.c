#include<stdio.h>
int main()
{
	int month,year;
	printf("enter the month(1-12):");
	scanf("%d",& month);
	
	printf("enter the year:");
	scanf("%d",& year);
	 switch(month){
	 	
	 	
	 	case 1:
	 		
	 		printf("january have 31 days");
	 		
	 		break;
	 	
	 	case 2:
	 		
	 	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                printf("February have 29 days" "(Leap Year)");
            } else {
                printf("February have 28 days");
            }
	 		
	 		break;
	 		case 3:
	 		
	 		printf("march have 31 days");
	 		
	 		break;
	 		case 4:
	 		
	 		printf("april have 30 days");
	 		
	 		break;
	 		case 5:
	 		
	 		printf("may have 31 days");
	 		
	 		break;
	 		case 6:
	 		
	 		printf("june have 30 days");
	 		
	 		break;
	 		case 7:
	 		
	 		printf("july have 31 days");
	 		
	 		break;
	 		case 8:
	 		
	 		printf("August have 31 days");
	 		
	 		break;
	 		case 9:
	 		
	 		printf("september have 30 days");
	 		
	 		break;
	 		case 10:
	 		
	 		printf("october have 31 days");
	 		
	 		break;
	 		case 11:
	 		
	 		printf("november have 30 days");
	 		
	 		break;
	 		case 12:
	 		
	 		printf("december have 31 days");
	 		
	 		
	 		break;
	 		
		   default:
           
		    printf("Invalid month! Please enter a number between 1 and 12.\n");
            break;
	 	
	 	
	 	
	 	
	 	
	 	
	 }
	  
	
	
	
	
	
	
	
	
	
	
	
	return  0;
}
