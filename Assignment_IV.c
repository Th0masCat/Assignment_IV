// Assignment_IV.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Author: Sahil Jangra

#include <stdio.h>
#include<math.h>

int lcm(int a, int b)
{
    static int mult = 0;
    mult += b;

    if ((mult % a == 0) && (mult % b == 0))
    {
        return mult;
    }
    else
    {
        return lcm(a, b);
    }
}

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

unsigned long long fibo(int num)
{
    if (num == 0)      
        return 0;
    else if (num == 1) 
        return 1;
    else
        return fibo(num - 1) + fibo(num - 2);
}

int sumOfDigits(int num)
{
    if (num == 0)
        return 0;

    return ((num % 10) + sumOfDigits(num / 10));
}

int isPalindrome(int num)
{
    if (num == reverse(num))
    {
        return 1;
    }

    return 0;
}

int reverse(int num)
{
    int digit = (int)log10(num);
    if (num == 0)
        return 0;

    return ((num % 10 * pow(10, digit)) + reverse(num / 10));
}

int sumOfNaturalNumbers(int start, int end)
{
    if (start == end)
        return start;
    else
        return start + sumOfNaturalNumbers(start + 1, end);
}

void printEvenOdd(int a, int limit)
{
    if (a > limit)
        return;
    printf("%d, ", a);
    printEvenOdd(a + 2, limit);
}

void printNaturalNumbers(int a, int b)
{
    if (a > b)
        return;
    printf("%d \n ", a);
    printNaturalNumbers(a+1, b);
}


int main()
{
    //1. Write a C program to print all - natural numbers between 1 to n using function
    int a, b;

    /* Input lower and upper limit from user */
    printf("Enter lower limit: ");
    scanf_s("%d", &a);
    printf("Enter upper limit: ");
    scanf_s("%d", &b);

    printNaturalNumbers(a, b);
    
    
    //2. Write a C program to print all even or odd numbers in given range using recursion.
    int a, b;

    printf("Lower limit: ");
    scanf_s("%d", &a);
    printf("Upper limit: ");
    scanf_s("%d", &b);

    printf("Even/odd Numbers from %d to %d are: ", a, b);
    printEvenOdd(a, b);

    //3. Write a C program to find sum of all-natural numbers between 1 to n using recursion
    int start, end, sum;

    printf("Lower limit:");
    scanf_s("%d", &start);
    printf("Upper limit:");
    scanf_s("%d", &end);

    sum = sumOfNaturalNumbers(start, end);
    printf("Sum: %d", sum);

    //4. Write a C program to find sum of all even or odd numbers in given range using recursion
    int start, end, sum;
  
    printf("Lower limit:");
    scanf_s("%d", &start);
    printf("Upper limit:");
    scanf_s("%d", &end);

    printf("Sum: %d\n", sumOfEvenOdd(start, end));

    //5. Write a C program to find reverse of any number using recursion
    int num, rev;

    printf("Enter any number: ");
    scanf_s("%d", &num);
    
    rev = reverse(num);

    printf("Reverse: %d", rev);

    //6. Write a C program to check whether a number is palindrome or not using recursion.
    int num;

    printf("Num:");
    scanf_s("%d", &num);

    if (isPalindrome(num) == 1)
    {
        printf("%d is palindrome number.\n", num);
    }
    else
    {
        printf("%d is NOT palindrome number.\n", num);
    }

    //7. Write a C program to find sum of digits of a given number using recursion
    int num, sum;

    printf("Num:");
    scanf_s("%d", &num);

    sum = sumOfDigits(num);

    printf("Sum of digits of %d = %d", num, sum);

    //8. Write a C program to generate nth Fibonacci term using recursion.
    int num;
    unsigned long long fibonacci;

    printf("Num: ");
    scanf_s("%d", &num);

    fibonacci = fibo(num);
    printf("%d fibonacci term is %llu", num, fibonacci);

    //9. Write a C program to find GCD (HCF) of two numbers using recursion.
    int num1, num2, hcf;

    printf("Enter any two numbers:");
    scanf_s("%d%d", &num1, &num2);

    hcf = gcd(num1, num2);
    printf("GCD:", num1, num2, hcf);

    //10. Write a C program to find LCM of two numbers using recursion using function.
    int num1, num2, LCM;

    printf("Enter any two numbers: ");
    scanf_s("%d%d", &num1, &num2);

    if (num1 > num2)
    {
        LCM = lcm(num2, num1);
    }
    else
    {
        LCM = lcm(num1, num2);
    }
    printf("LCM: %d", num1, num2, LCM);
    
}

