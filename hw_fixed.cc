/*
 Christian McIntosh
 2/10/19
 CS 3560
 Homework 3
 */

#include <iostream>
#include <vector>
#include <cmath>

double deviation( int* a, int n ) {
    int sum = 0;
    
    for(size_t i = 0; i <= n - 1; i++) { //sum of all numbers in array
        sum += a[i];
    }
    
    double mean = sum/= (n - 1); //average of all elements
    double stddev = 0; //intialized standard deviation
    
    for(size_t i = 0; i <= n - 2; i++) {
        stddev += (a[i] - mean) * (a[i] - mean);
    }
    
    stddev /= (n - 1);
    
    if(stddev == 0) {
        std::cout << "Sigma is zero." << std::endl;
    }
    
    return sqrt(stddev);
}
