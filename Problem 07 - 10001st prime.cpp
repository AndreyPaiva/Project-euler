/*Project Euler - Problem 7: 10001st prime
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10001st prime number?
Author: Andrey Paiva
October 27th of 2021*/

#include <iostream>
#include <cstdlib>

using namespace std;

bool prime(int); //verify if the number is prime

int main(void){
    int number = 0;
    int primes = 0;

    while(primes < 10001){ //repeating untill we find 10001 primes
        number++;
        if(prime(number)){ //the number variable will keep increasing until the primes variable reaches 10001
            primes++;
        }
    }
    cout << "The 10001st prime number is " << number << "." << endl;
    system("pause");
    return 0;
}

bool prime(int number){
    int divisors = 0;

    for(int i = 1; i <= number; i++){ //divides the number by all the numbers smaller than itself, checking how many divisors the number has
        if(number % i == 0){
            divisors++;
        }
    }
    if(divisors == 2){ //if the number has exactly 2 divisors, it is prime
        return true;
    }
    return false;
}