/*
 Christian McIntosh
 CS3560
 Homework 7
 March 4, 2019
*/

#include "HW7.h"
#include <cstdarg>
#include <cmath>

double stddev(int n, ... ) {
    double sum = 0;
    va_list args;
    size_t i;
    va_start(args, n);
    for (i = 0; i < n; i++) {
        sum += va_arg(args, int);
    }
    
    va_end(args);
    
    double mean;
    mean = sum / n;
    double stddev = 0;
    
    va_start(args, n);
    for (i = 0; i < n; i++) {
        int n = va_arg(args, int);
        stddev += ((n - mean)*(n-mean));
    }
    
    va_end(args);
    
    stddev /= n;
    return sqrt(stddev);
}
