#include<stdio.h>
int main(void)
{
	int month,day,year,week;
	printf("Enter date(mm/dd/yy): ");
	scanf("%d %d %d",&month, &day, &year);
	
	printf("Dated this %d",day);
	switch(day) {
		case 1: case 21: case 31:
			printf("st");break;
		case 2: case 22:
			printf("nd");break;
		case 3: case 23:
			printf("rd");break;
	}
	printf(" day of ");
	
	switch (month) {
		case 1:printf("January");    break;
		case 2:printf("February");   break;
	    case 3:printf("March");      break;
	    case 4:printf("April");      break;
	    case 5:printf("May");        break;
	    case 6:printf("June");       break;
	    case 7:printf("July");       break;
	    case 8:printf("August");     break;
	    case 9:printf("September");  break;
	    case 10:printf("October");   break;
	    case 11:printf("November");  break;
	    case 12:printf("December");  break;
	}
    printf(" , 20%.2d.", year);
    
	printf(",");
	switch(day) {
		case 1:case 8:case 15:case 22:case 29:
		    printf("Sunday");break;
		case 2:case 9:case 16:case 23:case 30:
			printf("Monday");break;
	    case 3:case 10:case 17:case 24:
	        printf("Tuesday");break;
	    case 4:case 11:case 18:case 25:
	        printf("Wednesday\n");break;
	    case 5:case 12:case 19:case 26:
	        printf("Thursday\n");break;
	    case 6:case 13:case 20:case 27:
	        printf("Friday\n");break;
	    case 7:case 14:case 21:case 28:
	        printf("Saturday\n");break;
	}
	
	return 0;
   } 
 
