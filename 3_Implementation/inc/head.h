#include "header.h"

typedef struct{

    char name[30];
    char num[20];
    int seats;
    char booking[10];
    char from[20];
    char to[20];
}Seat;
Seat select_person[5]; 

int i;
int balance_seats=30;
int booking=100; 
 
