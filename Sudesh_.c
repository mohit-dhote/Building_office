#include<stdio.h> 
#include<stdlib.h> 
#include<time.h>   
int main () 
{ 
    int num,i,gueeses=0;  
    srand(time (0));        //Generates the random no which is not repeated to the prev one 
    num = rand() % 100 + 1; //Generates the random no in the range of 0 to 100
    //printf("No. is %d \n",num);  
    do  
  {  
    printf("Guees the NO. in the range of 0 to 100 !!\n"); 
    scanf("%d",&i);         //Takes user input NO.
    if(i == num)            // It will check the no equal or higher or lower 
    { 
        printf("You guess Correctly\n");
    } 
    else if(i < num && i > 0) 
    { 
        printf("Enter the higher No. please!! \n");
    } 
    else if(i > num && i < 100 ) 
    { 
        printf("Enter the lower no please!! \n");
    }  
    else 
    {
         printf("Wrong input\n");
    }  
    gueeses++;                           // It will count the no of gueeses 
  } 
   while(i!=num);  
   printf("U guees in %d attempts",gueeses);     // It will printf The of Gueeses 
    return 0; 
}