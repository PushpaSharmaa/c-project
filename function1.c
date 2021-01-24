 #include <stdio.h> 
  
 int sum_of_digit(int n) // Function to check sum of digit using recursion
{ 
    if (n == 0) 
       return 0; 
    return (n % 10 + sum_of_digit(n / 10)); 
} 
  

int main() 
{ 
    int num = 1234; 
    int result = sum_of_digit(num); 
    printf("Sum of digits in %d is %d\n", num, result); 
    return 0; 
} 