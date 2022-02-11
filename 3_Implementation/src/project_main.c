// /**
//  * @file index.c
//  * @author AKHIL(akhil.p@ltts.com)
//  * @brief 
//  * @version 0.1
//  * @date 2022-02-10
//  * 
//  * @copyright Copyright (c) 2022
//  * 
//  */


#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include"ticket.h"
//defining structure
typedef struct{
    char number[10]; //declaring phone number
    char date[12];   //pre-defined date and time
    char time[6];
    char gate[8];   //example of flight gate
}Flight;
Flight passenger={"Air-india","11-02-2022","4:30","GATE-1"};

/**
 * @brief 
 * passenger name
 * passenger number
 * booking id
 * no of seats
 * 
 */
typedef struct{
    char name[30];
    char num[20];
    char booking[10];
    int seats;
}Seat;
Seat select_person[4][5]; 

/**
 * @brief function
 *  functions which are called before the main
 */
void display(); //displaying the data
void reserve(); // reserving tickets
void ticket();  //display saved tickets
void cancel(); //cancel booked tickets
void seats_left(); //it contains how many seats are available
void recall(); //initial cases are inside recall
void exit_(); //exit from code


int booking=100;
int selectid; 
int balance_seats=30;
int seats_num[20]={0};
//
int i;
int j;
 
int main(void)

{
    display();//calling func which contains main data
    while(selectid!=4) //after the desired condition exits the loop and end
    {
        recall();
    }
    return 0;
}

void display()
    {
        printf("\n\n\t\t __________________________________________________________________________");
		printf("\n\t\t                         AIR TICKET BOOKING SYSTEM                           ");
		printf("\n\n\t\t ___________________________________________________________________________");
		printf("\n\n\n\t\t Select your Requirement:");
		printf("\n\n\t\t 1. Reservation");
		printf("\n\n\t\t 2. Cancelletion");
		printf("\n\n\t\t 3. Mybookings");
		printf("\n\n\t\t 4. EXIT");
		printf("\n\n\t\t Enter your selection :  ");

    scanf("%d",&selectid);
    recall();
    return;
    }
 
void recall()
    {  
    switch(selectid)
        {
        case 1:
            reserve();
            break;
        case 2:
            cancel();
            break;
        case 3:
            seats_left();
            break;
        case 4:
            exit_();
            break;
        default:
        printf("\tInvalid selecion.Try again\n");
    }
    return;
    }
/**
 * @brief 
 * in reserve func we can book the ticket by
 * entering the number of seats and name
 * 
 */
void reserve()
    {
        for(i=0;i<4;i++)
            for(j=0;j<5;j++) 
        {          
        printf("\tPLEASE SELECT HOW MANY SEATS : ");
        scanf("%d",&select_person[i][j].seats);
        fflush(stdin); 
        printf("\tPLEASE ENTER YOUR NAME : ");
        scanf("%s",select_person[i][j].name);
        fflush(stdin);
        if(select_person[i][j].seats<=balance_seats)
        {
        printf("\tPLEASE ENTER PASSENGER NAME  : ");
        scanf("%s",select_person[i][j].name);
        fflush(stdin);
        ticket();
        booking++;
        }
        balance_seats=balance_seats-select_person[i][j].seats;
        display(); 
       }
 
    return;
    }

void cancel()
    {  
        for(j=0;j<1;j++)
        {
        printf("Do you want to cancel this ticket");
        }
        for(i=0;i<1;i++)
        {
            printf("\n");
            printf("%d\n",i+1);
        }
        display();
    return;
    }

void ticket()//booked tickets are shown in mybookings using func tickets
    {
    printf("\n\n");
    printf("\t-----------------AIRLINE BOOKING TICKET----------------\n");
    printf("\t============================================================\n");
    printf("\t Booking ID : %d   \t\t\tFlight No : %s\n",booking,passenger.number);
    printf("\t Passenger  : %s\n",select_person[i][j].name);
    printf("\t\t\t                            Date : %s\n",passenger.date);
    printf("\t                       Time      : %s\n",passenger.time);
    printf("\t                       Gate      : %s\n",passenger.gate);
    printf("\t                       Seats No. : %d%c  \n\n",i+1,j+65);
    printf("\t============================================================\n");
    return;}

void seats_left() //it contains the number of seats left for booking
    {  
        printf("\t_________________________________________________________\n");
        printf("\t                     ALL FLIGHT RECORDS                  \n"); 
        printf("\t_________________________________________________________\n");
        printf("\t                   Seats Available left : %d \n",balance_seats); //availabe seats 
        ticket();
        display();
        return;
    }      
void exit_()
    {
    printf("\tThank you for booking with us\n");
    exit(1);
    return;
    }//func exits
