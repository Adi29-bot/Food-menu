#include<stdio.h>
int main(){
int choice,sum=0;
char ch;
printf("     MENU     ");
printf("\nPick an item\n1.Pasta\n2.Burger\n3.Pizza\n4.French Fries\n5.Sandwich\n");
scanf("%d",&choice);
switch(choice) {
case 1: printf("You entered Pasta\n"); 
printf("The price of the item is Rs.179");
sum+=179;
break;
case 2: printf("You entered Burger\n"); 
printf("The price of the item is Rs.129");
sum+=129;
break;
case 3:printf("You entered Pizza\n"); 
printf("The price of the item is Rs.239");
sum+=239;
break;
case 4:printf("You entered French Fries\n");
printf("The price of the item is Rs.99"); 
sum+=99;
break;
case 5:printf("You entered Sandwich\n"); 
printf("The price of the item is Rs.149");
sum+=149; 
break;
default: printf("This item is not available. Please select an item from the menu");
printf("\nWould you like to order anything else?\n(Y/N)");
scanf(" %c",&ch);
if (ch== 'n' || ch=='N'){ 
printf("Your total bill is Rs.%d",sum);
break; }
}while(ch='Y'|| ch =='y');
return 0;
}
