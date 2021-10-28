/*Project Euler - Problem 1: Multiples of 3 or 5
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9.
 The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.

Author: Andrey Paiva
October 27th of 2021
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(void){
    int sum = 0; //sum of all the multiples

    for(int i=0; i<1000; i++){ //loops all the numbers below 1000
        if(i%3 == 0){  //if the number is divisible by 3, add it to the sum
            sum += i;
        }
        else if(i%5 == 0){ //if the number is not divisivle by 3, but is divisible by 5, add it to the sum
            sum += i;      //the else if excludes cases like 15, when the number is divisible by both 3 and 5  
        }                  //by doing so, the number isn't added twice to the sum
    }
    cout <<"The sum of all the multiples of 3 or 5 below 1000 is "<< sum <<"." << endl;
    system("pause");
    return 0;
}