//using ternary operator

#include <stdio.h>
 
int main()
{
    // variable declaration
    int n1 = 5, n2 = 10, max;
     
    // Largest among n1 and n2
    max = (n1 > n2) ? n1 : n2;
     
    // Print the largest number
    printf("Largest number between %d and %d is %d. ",n1, n2, max);
 
    return 0;
}


//using if else

#include <stdio.h>  
   
int main() {  
    int a, b;  
    printf("Please Enter Two different values\n");  
    scanf("%d %d", &a, &b);  
    
    if(a > b) 
    {
        printf("%d is Largest\n", a);          
    } 
    else if (b > a)
    { 
        printf("%d is Largest\n", b);  
    } 
    else 
    {
	printf("Both are Equal\n");
    }
   
    return 0;  
}