#include<stdio.h>
#include<stdlib.h>

int main()
{
char month;
printf("Enter month number:");
scanf("%d",&month);
switch(month)
{
    case 1:case 3: case 5: case 7: case 8 :case 10: case 12:printf("31days ");break;
    case 2:printf("28 days");break;
    case 4:case 6:case 9: case 11:printf(" 31days");break;


}

}






