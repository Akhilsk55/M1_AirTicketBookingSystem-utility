#include "header.h"
#include "flightdeck.h"
#include "head.h"

void reserve()
    {

        printf("\n");       
        printf("\tPLEASE SELECT HOW MANY SEATS : ");
        scanf("%d",&select_person[i].seats);
        printf("\n");
        printf("\tPLEASE ENTER YOUR NAME : ");
        scanf("%s",select_person[i].name);
        printf("\n");
        printf("\tFROM  : ");
        scanf("%s",select_person[i].from);
        printf("\n");
        printf("\tTO  : ");
        scanf("%s",select_person[i].to);
        system("clear");
        booking++;
    
    return;
    }