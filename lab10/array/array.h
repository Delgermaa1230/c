#ifndef ARRAY_H
#define ARRAY_H

#include <stdio.h>

int* createArray(int n); 
void read(int a[], int n);
void print(int a[], int n); 
int minA(int a[], int n); 
int maxA(int a[], int n); 
float average(int a[], int n); 
int searchA(int a[], int n, int Svalue); 
void sortA(int a[], int n); 
void deleteArray(int *a); 
#endif 
