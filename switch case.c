#include <stdio.h>
#include <stdlib.h>

int main() 
{ 
printf("\n1=Pizza \n2=Burger \n3=Pasta \n4=French Fries \n5=Sandwich");
   int n,order; 
   scanf("%d",&order);
   switch (order) 
   { 
       case 1:
       
	    printf("Your Order is Pizza \n For Rs 239 "); 
	    	  break;   
       case 2:
       	
	    printf("Your Order is Burger\n For Rs 129"); 
               break;    
       case 3:
       
	    printf("Your Order  is Pasta\n For Rs 179"); 
                break;  
                case 4:
        
	    printf("Your Order  is French Fries\n For Rs 99"); 
                break; 
        case 5:
        
	    printf("Your Order is Sandwich\n For Rs 149 "); 
                break;  
       default: printf("Choice other than 1, 2, 3, 4 and 5"); 
                  break; 
   } 
   return 0; 
}  


