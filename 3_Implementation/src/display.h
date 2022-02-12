#include "flightdeck.h"
#include "header.h"

int selectid;
void display()
    {
        printf("\n\n\t\t __________________________________________________________________________");
		printf("\n\t\t                         AIR TICKET BOOKING SYSTEM                           ");
		printf("\n\n\t\t ___________________________________________________________________________");
		printf("\n\n\n\t\t Select your Requirement:");
		printf("\n\n\t\t 1. Reservation");
		printf("\n\n\t\t 2. Mybookings");
		printf("\n\n\t\t 3. Cancelletion");
		printf("\n\n\t\t 4. EXIT");
		printf("\n\n\t\t Enter your selection :  ");
    
    scanf("%d",&selectid);
    system("clear");
    return;
    }