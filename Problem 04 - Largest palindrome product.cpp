/*Project Euler - Problem 4: Largest palindrome product
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit 
numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.

Author: Andrey Paiva
October 27th of 2021*/

#include <iostream>
#include <cstdlib>

using namespace std;


bool palindrome(int); //function that calculates if a number is a palindrome or not

int main(void){
    int largest = 0; //largest palindrome product of two 3-digit numbers
    int product; //the product of the two numbers

    for(int first = 100; first <= 999; first++){ 
        for(int second = 100; second <= 999; second++){
            product = first * second; // saving the value of each product for memory saving
            if(palindrome(product)){ //testing if the product is a palindrome
                if(product > largest){ //testing if the product is larger than the previous largest
                    largest = product; //if both conditions are met, we have a new largest
                }
            }
        }
    }
    cout << "The largest palindrome made from the product of two 3-digit numbers is "<< largest << "."<<endl; //shows the result
    system("pause");
    return 0;
}

bool palindrome(int product){
    int reversed = 0;
    int number; //copying the value of the product

    number = product;

    while(number){ //reverting the number
        reversed = reversed*10 + number%10;
        number /= 10;
    }
    if(reversed == product){ //checking if the reversed number is equal to the product
        return true;
    }
    return false;
}