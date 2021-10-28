/*Project Euler - Problem 9: Special Pythagorean triplet
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which, a^2 + b^2 = c^2
For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.
There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
Author: Andrey Paiva
October 27th of 2021*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(void){
    long long int product; //product of the three sides

    for(int c = 1; c <= 500; c++){ //as one side of the triangle is smaller than the sum of the other sides, we only need to test until c = 500
        for(int b = 1; b < c; b++){ //as i is the hipotenuse, b is shorter than c
            int a = 1000 - c - b; // to find the special triplet, a + b + c = 1000

            if(a*a + b*b == c*c){ //if a triplet is ptyhagorean, the product of its sides is saved
                product = a*b*c;
            }
        }
    }
    cout << "The product is " << product << "." << endl;
    system("pause");
    return 0;
}