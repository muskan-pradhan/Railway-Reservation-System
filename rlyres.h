#ifndef RLYRES_H_INCLUDED
#define RLYRES_H_INCLUDED
struct Train
{
char train_no[10];
char from[10];
char to[10];
int fac_fare;
int sac_fare;
};typedef struct Train Train;
struct Passenger
{
char p_name[20];
char gender;
char train_no[20];
char p_class;
char address[30];
int age;
int ticket_no;
char mob_no[11];
};typedef struct Passenger Passenger;
int enterchoice();
void add_trains();
void view_trains();
int book_ticket(Passenger);
int  *get_ticket_no(char *);
void view_ticket(int);
void view_all_bookings();
void view_bookings(char *);
int cancel_ticket(int);
int cancel_train(char *);
Passenger *get_passenger_details();
int check_train_no(char *);
int get_booked_ticket_count(char *,char);
int last_ticket_no();
int book_ticket(Passenger);
int check_mob_no(char *);
int accept_ticket_no();
char* accept_mob_no();
void view_all_tickets(char *,int *);
char* accept_train_no();
#endif // RLYRES_H_INCLUDED
