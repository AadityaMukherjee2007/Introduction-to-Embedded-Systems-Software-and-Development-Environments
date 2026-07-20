/******************************************************************************
 * Copyright (C) 2026 by Aaditya Mukherjee - Student
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Aaditya Mukherjee is not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief contains the statistical functions to compute the required statistics
 *
 * This file contains the function definitions of the function declarations in the header file and used to compute the statistics on the given array.
 *
 * @author Aaditya Mukherjee
 * @date 19/07/2026
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

    unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

    /* Other Variable Declarations Go Here */
    /* Statistics and Printing Functions Go Here */
    print_array(test, SIZE);
    printf("Sorted Array: ");
    sort_array(test, SIZE);
    print_array(test, SIZE);

    printf("\n");

    print_statistics(find_median(test, SIZE), find_mean(test, SIZE), find_maximum(test, SIZE), find_minimum(test, SIZE));
}

/* Add other Implementation File Code Here */
void print_statistics(int median, int mean, int max, int min)
{
    printf("Mean: %d\n", mean);
    printf("Median: %d\n", median);
    printf("Max: %d\n", max);
    printf("Min: %d\n", min);
}

void print_array(unsigned char* arr, int n)
{
    int i;
    printf("[");
    for (i = 0; i < n; i++)
    {
        printf("%d%s", *(arr + i), i != n - 1 ? ", " : "]\n");
    }
}

unsigned char find_median(unsigned char* arr, int n)
{
    int i, median;

    if (n % 2 == 0)
    {
        median = (arr[(n / 2) + 1] + arr[(n / 2) + 2]) / 2.0;
    }
    else
    {
        median = arr[(n / 2) + 1];
    }
    return median;
}

unsigned char find_mean(unsigned char* arr, int n)
{
    unsigned char i;
    int sum;
    sum = 0;

    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return (float) sum / n;
}

unsigned char find_maximum(unsigned char* arr, int n)
{
    unsigned char max, i;
    max = arr[0];

    for (i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    return max;
}

unsigned char find_minimum(unsigned char* arr, int n)
{
    unsigned char min, i;
    min = arr[0];

    for (i = 0; i < n; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    return min;
}

void sort_array(unsigned char* arr, int n)
{
    // implemented selection sort
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        unsigned char largest, pos;
        largest = arr[i];
        pos = i;

        for (j = i + 1; j < n; j++)
        {
            if (largest < arr[j])
            {
                largest = arr[j];
                pos = j;
            }
        }
        arr[pos] = arr[i];
        arr[i] = largest;
    }
}