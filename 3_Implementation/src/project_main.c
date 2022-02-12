// /**
//  * @file project_main.c
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
// #include"ticket.h"
#include"reservation.c"
#include"display.c"



typedef struct{
    char number[10]; //declaring phone number
    char date[12];   //pre-defined date and time
    char time[6];
    char gate[8];   //example of flight gate
}Flight;
Flight passenger={"Air-india","11-02-2022","4:30","GATE-1"};


// /**
//  * @brief function
//  *  functions which are called before the main
//  */
void display(); //displaying the data
void reserve(); // reserving tickets
void ticket();  //display saved tickets
void cancel(); //cancel booked tickets
void recall(); //initial cases are inside recall
void exit_(); //exit from code

int main(void)
{

    display();
    while(selectid!=4) 
    {
        for(int i=0;i<=1;i++)
        {
        recall();
        }
    }
    return 0;
}

 
void recall()
    {  
    switch(selectid)
        {
        case 1:
            reserve();
            balance_seats=balance_seats-select_person[i].seats;
            ticket();
            display();
            break;
        case 2:
            ticket();
            display();
            break;
        case 3:
            cancel();
            break;
        case 4:
            exit_();
            break;
        default:
        printf("\tInvalid selecion.Try again\n");
    }
    return;
    }

void ticket()//booked tickets are shown in mybookings using func tickets
    {char tc[10];
    int j=0;
    printf("\n\n");
    printf("\t-----------------AIRLINE BOOKING TICKET----------------\n");
    printf("\t============================================================\n");
    printf("\t Booking ID : %d   \t\t\tFlight No : %s\n",booking,passenger.number);
    printf("\t Passenger  : %s\n",select_person[i].name);
    printf("\t FROM       : %s\n",select_person[i].from);
    printf("\t TO         : %s\n",select_person[i].to);
    printf("\t\t\t                            Date : %s\n",passenger.date);
    printf("\t                    Time       : %s\n",passenger.time);
    printf("\t                    Gate       : %s\n",passenger.gate);
    printf("\t                    Seats No.  : %d  \n\n",j+1);
    printf("\t============================================================\n");
    printf("\n");
    printf("\t                     ALL FLIGHT RECORDS                  \n"); 
    printf("\t_________________________________________________________\n");
    printf("\t                   Seats Available left : %d \n",balance_seats); //availabe seats 
    printf("\tPLEASE ENTER 1 TO CONTINUE ");
    scanf("%s",tc);
    return;}

void cancel()
    {   char dl[10];
        ticket();
        printf("\n\n");
        printf("Do you want to cancel this ticket\n");
        printf("Enter Y or N : ");
        scanf("%s",dl);
        display();
    return;
    } 
void exit_()
    {
    printf("\tThank you for booking with us\n");
    exit(1);
    return;
    }
