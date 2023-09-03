#include<stdio.h>
int main()
{
    int pass,seat,booked;

    char user[500];
    printf("\n\t\t\t What is your good name sir..: ");

    gets(user);
    printf("\n\t\t\t  User this number (123) for enter... ");
    scanf("%d",&pass);

    switch(pass)
    {
    case 123:
        printf("\n\t\t\t\t Welcome To Ticket Booking System. \n");
        printf("\n\t\t\t\t Available Seat = 6 Booked Seat = 0 \n");
        printf("\n\t\t\t\t Press 1 for Choose Your Seat \t Press Any Key ( except 1 ) For Exit... \n");
        printf("\n\t\t\t\t Please Say Us What You Want... \t ===> ");

        scanf("%d",&seat);
        switch(seat)
        {
        case 1:
            printf("\n\t\t\t\t Sir, Please Select Your Seat Number. \n");
            printf("\n\t\t\t\t 1\t 2\t 3\t \n\n \t\t\t\t 4\t 5\t 6\t =>  ");

            scanf("%d",&booked);
            switch(booked)
            {
            case 1:
                printf("\n\t\t\t\t Congratulation. Sir, You Have Booked Seat = 1 \n",&user);
                printf("\n\t\t\t\t Available Seat = 5 \t Booked Seat = 1 \n");
                break;
            case 2:
                printf("\n\t\t\t\t  Congratulation. Sir, You Have Booked Seat = 2 \n",&user);
                printf("\n\t\t\t\t Available Seat = 5 \t Booked Seat = 1 \n");
                break;
            case 3:
                printf("\n\t\t\t\t  Congratulation. Sir, You Have Booked Seat = 3 \n",&user);
                printf("\n\t\t\t\t Available Seat = 5 \t Booked Seat = 1 \n");
                break;
            case 4:
                printf("\n\t\t\t\t You Have Booked Seat = 4 \n",&user);
                printf("\n\t\t\t\t Available Seat = 5 \t Booked Seat = 1 \n");
                break;
            case 5:
                printf("\n\t\t\t\t  Congratulation. Sir, You Have Booked Seat = 5 \n",&user);
                printf("\n\t\t\t\t Available Seat = 5 \t Booked Seat = 1 \n");
                break;
            case 6:
                printf("\n\t\t\t\t  Congratulation. Sir, You Have Booked Seat = 6 \n",&user);
                printf("\n\t\t\t\t Available Seat = 5 \t Booked Seat = 1 \n");
                break;
            default:
                printf("\n\t\t\t\t Sorry, Sir. This Seat Number Is Not Available Now. Please Try Others... ");
            }
            break;

        default:
            printf("\n\t\t\t\t Are You Sure Want To Exit... \n");
        }
        break;
        default:
            printf("\n\t\t\t\t Oops.. You Have Entered Wrong Keyword. \n");
    }
    getch();
}
