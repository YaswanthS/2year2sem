//Write a C program to count the given days in year,month,week,hours,minutes,secounds.

Source Code:
  
#include<stdio.h>
main()
{
 int num,year,month,week,hours,min,sec;
 printf("enter a Number to count");
 scanf("%d",&num);
 if(num!=0)
  {
   year=num/365;
   printf("%d Year(s)\n",year);
   month=num/30;
   printf("%d Month(s)\n",month);
   week=num/7;
   printf("%d Week(s)\n", week);
   hours=num*24;
   printf("%d Hour(s)\n",hours);
   min=hours*60;
   printf("%d Minutes\n",min);
   sec=min*60;
   printf("%d Secounds\n",sec);
  }
 getch();
 return(0);
}
   
   
   Output:
      
enter a Number to count365                                                                         
1 Year(s)                                                                                          
12 Month(s)                                                                                        
52 Week(s)                                                                                         
8760 Hour(s)                                                                                       
525600 Minutes                                                                                     
31536000 Secounds 
