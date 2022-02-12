#include "header.h"
#include "flightdeck.h"
#include "head.h"

void reserve()
    {

        printf("\n");       
        printf("\tPLEASE SELECT HOW MANY SEATS : ");
        scanf("%d",&select_person[i].seats);
        fflush(stdin); 
        printf("\n");
        printf("\tPLEASE ENTER YOUR NAME : ");
        scanf("%s",select_person[i].name);
        fflush(stdin);printf("\n");
        printf("\tFROM  : ");
        scanf("%s",select_person[i].from);
        fflush(stdin);printf("\n");
        printf("\tTO  : ");
        scanf("%s",select_person[i].to);
        fflush(stdin);
        system("clear");
        booking++;
    
    return;
    }