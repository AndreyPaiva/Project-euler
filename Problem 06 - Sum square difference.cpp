/*Project Euler - Problem 6: Sum square difference
The sum of the squares of the first ten natural numbers is, 1^2 + 2^2 + ... + 10^2 = 385
The square of the sum of the first ten natural numbers is, (1^2 + 2^2 + ... + 10^2) = 55^2 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum
is 3025 - 385 = 2640
Find the difference between the sum of the squares of the first one hundred natural numbers and the square 
of the sum.
Author: Andrey Paiva
October 27th of 2021*/

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(void){
    long int sum_of_the_squares = 0; //sum of the squares
    long int square_of_the_sum = 0; //square of the sum
    long int difference; //difference between the quare of the sum and the sum of the squares

    for(int i = 1; i <= 100; i++){ //calculate the sum of the squares and the sum of the numbers from 1 to 100
        sum_of_the_squares += pow(i,2);
        square_of_the_sum += i;
    }
    square_of_the_sum = pow(square_of_the_sum,2); //square the sum of the numbers
    difference = square_of_the_sum - sum_of_the_squares; //computate the difference between the square of the sum and the sum of the squares

    cout << "The difference between the square of the sum and the sum of the squares in the 100 first numbers is " << difference << "." << endl;
    system("pause");
    return 0;
}