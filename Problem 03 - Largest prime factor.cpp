/*Project Euler - Problem 3: Largest prime factor
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?

Author: Andrey Paiva
October 27th of 2021*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(void){
    long long int number = 600851475143; //starting number in question
    long long int factor = 1; //prime factors, starting in 2 because 2 is the smallest prime number

    while(number != 1){ //looping until the number is completely factored
        factor++; //when the number is no longer divisible by the previous factor, increase the factor
        while(number % factor == 0){ //if the number is still divisible for the factor, divide it again. Only prime factors will appear, because the nonprime factors are multiples of the prime factors as well
            number /= factor;
        }
    }
    cout << "The largest prime factor of 600851475143 is " << factor  << "." << endl; //show the largest prime factor
    system("pause");
    return 0;
}