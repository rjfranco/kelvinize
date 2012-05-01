//
//  main.c
//  kelvinize
//
//  Created by Ramiro Franco on 4/30/12.
//  Copyright (c) 2012 Ramiro Franco. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    double fahrenheit;
    double kelvin;
    
    if( argc > 1 ) {
        fahrenheit = atof(argv[1]);
    } else {
        fahrenheit = 0;
    }
    
    kelvin = (((fahrenheit - 32) * 5) / 9) + 273.15;
    
    
    printf("%f Fahrenheit is %f Kelvin\n", fahrenheit, kelvin);
    return 0;
}

