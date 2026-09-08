#include<stdio.h>
int main()
{

int num;
	printf("enter the marks");
    scanf("%d",&num);
	     if (num>=85)
      	{printf("grade A");
	}
	else if (num>=70){printf("grade B");
	}
	else if (num>=60){printf("grade C");
	
	}else if (num>=50){printf("grade D");
	}
else
    {
        printf("Grade F");
}
	return 0;
}

