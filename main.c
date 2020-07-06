#include<stdlib.h>
#include <stdio.h>
#include "conio2.h"
#include "rlyres.h"
int main()
{
Passenger *ptr;
int n,ticket_no,result;
char *pmob_no,*ptrain_no,*t_no;
int *pticket_no;
add_trains();
while(1)
       {
           n=enterchoice();
           if(n==9)
            {
                exit(0);
            }
             switch(n)
             {
             case 1:
                 clrscr();
                 view_trains();
                 textcolor(WHITE);
                 printf("\nPress any key to go back to the main screen");
                 getch();
                 clrscr();
                 break;
             case 2:
                 ptr=get_passenger_details();
                 clrscr();
                 if(ptr!=NULL)
                 {
                     ticket_no=book_ticket(*ptr);
                     if(ticket_no==-1)
                     {   textcolor(LIGHTRED);
                         printf("Booking Failed!");
                     }
                     else
                     { textcolor(LIGHTGREEN);
                      printf("Ticket successfully booked\nYour ticket no is %d",ticket_no);
                     }
                     textcolor(WHITE);
                 printf("\nPress any key to go back to the main screen");
                 getch();
                 clrscr();
                 }
                 break;
             case 3:
                 clrscr();
                 ticket_no=accept_ticket_no();
                 if(ticket_no!=0)
                    view_ticket(ticket_no);
                   textcolor(WHITE);
                   printf("\nPress any key to go back to main screen");
                getch();
                clrscr();
                break;
                case 4:
                    clrscr();
                    pmob_no=accept_mob_no();
                    if(pmob_no!=NULL)
                        {
                        pticket_no=get_ticket_no(pmob_no);
                        view_all_tickets(pmob_no,pticket_no);
                        }
                        clrscr();
                    break;
             case 5:
                 clrscr();
                 view_all_bookings();
                 clrscr();
                 break;
             case 6:
                 clrscr();
                 ptrain_no=accept_train_no();
                 if(ptrain_no!=NULL)
                    view_bookings(ptrain_no);
                 clrscr();
                break;
             case 7:
                    clrscr();
                    ticket_no=accept_ticket_no();
                    if(ticket_no!=0)
                    {
                        result=cancel_ticket(ticket_no);
                        if(result==0)
                        {
                            textcolor(LIGHTRED);
                            printf("Sorry!No tickets Booked against ticket no %d",ticket_no);
                        }
                        else if(result==1)
                        {
                            textcolor(LIGHTGREEN);
                            printf("Ticket no %d successfully cancelled!",ticket_no);
                        }
                        textcolor(WHITE);
                        printf("\n\nPress any key to go back to the main screen");
                    }
                    getch();
                    clrscr();
                break;
             case 8:
                 clrscr();
                 t_no=accept_train_no();
                 if(t_no!=0)
                 {
                    result=cancel_train(t_no);
                    if(result==1)
                    {
                     textcolor(LIGHTGREEN);
                     printf("Train No %s successfully cancelled!",t_no);
                    }
                    else if(result==0)
                    {
                        textcolor(LIGHTRED);
                        printf("Sorry!This train no %s does not exist",t_no);
                    }
                    textcolor(WHITE);
                    printf("\n\nPress any key to go to main screen");
                    getch();
                 }
                 clrscr();
                break;
             default:
             textcolor(LIGHTRED);
             printf("WRONG CHOICE! TRY AGAIN\n");
             getch();
             clrscr();
        }
       }
    return 0;
}
