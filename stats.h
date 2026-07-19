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
 * @file stats.h
 * @brief functions for statistical measures
 *
 * This file contains function declarations that are to be used by stats.c
 *
 * @author Aaditya Mukherjee
 * @date 19/07/2026
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief Function to print the computed statistics 
 *
 * This function prints the statistics that have been computed by the other functions.
 *
 * @param median takes the median of the array in floating type
 * @param mean takes the mean of the array in floating type
 * @param max takes the max of the array in integer type
 * @param min takes the min of the array in integer type
 *
 * @return void
 */
void print_statistics(float median, float mean, int max, int min);

/**
 * @brief Function to print an array
 *
 * Prints out the inputted array
 *
 * @param arr takes the pointer of  an interger array
 * @param n takes the length of the array
 *
 * @return void
 */
void print_array(int* arr, int n);

/**
 * @brief function to compute median
 *
 * This function computes the median of an inputted integer array
 *
 * @param arr takes the pointer of  an interger array
 * @param n takes the length of the array
 *
 * @return the median of the array
 */
float find_median(int* arr, int n);

/**
 * @brief Function to compute the mean
 *
 * This function computes the mean of the inputted array
 *
 * @param arr takes the pointer of  an interger array
 * @param n takes the length of the array
 *
 * @return the mean of the array
 */
float find_mean(int* arr, int n);

/**
 * @brief Function to compute the maximum of an array
 *
 * This function finds the maximum of the inputted array
 *
 * @param arr takes the pointer of  an interger array
 * @param n takes the length of the array
 *
 * @return the largest element of the array
 */
int find_maximum(int* arr, int n);

/**
 * @brief Function to compute the minimum of an array
 *
 * This function finds the minimum of the inputted array
 *
 * @param arr takes the pointer of  an interger array
 * @param n takes the length of the array
 *
 * @return the smallest element of the array
 */
int find_minimum(int* arr, int n);

/**
 * @brief Function to sort an array
 *
 * Function to sort the inputted array using selection sort
 *
 * @param arr takes the pointer of  an interger array
 * @param n takes the length of the array
 *
 * @return void
 */
void sort_array(int* arr, int n);


#endif /* __STATS_H__ */
