/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Stats.h
 * Author: Arlene Sagaoinit
 * Purpose: Mode problem, holds mode array, frequency, median, and average
 *          of the data in array
 * Created on October 22, 2021, 9:05 PM
 */

#ifndef STATS_H
#define STATS_H
#include "Array.h"

struct Stats{
    Array *mode;  //Array ADT contains number of modes and the modes themselves
    int modFreq;  //Mode Frequency
    float median; //Median of the array
    float avg;    //Average of the Array
};


#endif /* STATS_H */
