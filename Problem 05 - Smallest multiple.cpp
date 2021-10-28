/*Project Euler - Problem 5: Smallest multiple
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
Author: Andrey Paiva
October 27th of 2021*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(void){
    int number; //smallest number evenly divisible from 1 to 20 

    for(int i = 1; ; i++){ //loop until a number evenly divisible from 1 to 20 appears, using only the necessary cases
        if(i % 19 == 0){
            if(i % 17 == 0){
                if(i % 16 == 0){
                   if(i % 13 == 0){
                       if(i % 11 == 0){
                           if(i % 9 == 0){
                               if(i % 7 == 0){
                                   if(i % 5 == 0){ //if a number evenly divisible by 1 to 20 appears, save it and end the loop
                                        number = i;
                                        break;
                                   }
                               }
                           }
                       }
                   }
                }
            }
        }
    }
    cout << "The smallest multiple of all the numbers from 1 to 20 is " << number << "." << endl; //show the result
    system("pause");
    return 0;
}