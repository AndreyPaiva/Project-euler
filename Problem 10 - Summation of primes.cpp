/*Project Euler - Problem 10: Summation of primes
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
Author: Andrey Paiva
October 27th of 2021*/

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

bool prime(int); //verify if the number is prime

int main(void){
    long long int sum = 0;

    for(long int i = 2; i <= 2000000; i++){ //tests all integers untill two million
        if(prime(i)){ //if the number is prime, add it to the sum
            sum += i;
        }
    }
    cout << "The sum of all the primes below two million is " << sum << "." << endl;
    system("pause");
    return 0;
}

bool prime(int number){
    int divisors = 0;

    for(int i = 1; i <= (int)sqrt(number); i++){ //a non-prime number has a factor that divides it and is smaller than its square root, so we divide the number by all numbers smaller than the square root
        if(number % i == 0){
            divisors++;
        }
    }
    if(divisors == 1){ //if the number has exactly 1 divisor, it is prime
        return true;
    }
    return false;
}
