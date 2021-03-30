#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
void destination(int d);
void boardpt(int c);
int ticket(int c);
double hotel();
double facilities(int a);
int travel_details();
void personal_details();
double tot_discount(double t);
int main()
{
    int dest,bd,nt,no, ticket_cost;
    double hotel_cost  ,expense , discnt;
    printf("\n********************************************************************************************************");
    printf("\n\t\t\t\tWELCOME TO WANDERLUST TRAVEL MANAGEMENT SYSTEM");
    printf("\n********************************************************************************************************");
    printf("\nWe  aim to provide you a hassle-free international tour");
    printf("\nChoose a Desination from the given list");
    printf("\n********************************************************************************************************");
    printf("\nEnter 1 for NEW YORK");
    printf("\nEnter 2 for MIAMI"); 
    printf("\nEnter 3 for COLOMBIA");
    printf("\nEnter 4 for RIO DE JANERIO");
    printf("\nEnter 5 for HONG KONG");
    printf("\nEnter 6 for DUBAI");
    printf("\nEnter 7 for LISBON");
    printf("\nEnter 8 for LONDON");
    printf("\nEnter 9 for PARIS");
    printf("\nEnter 10 for CAPETWON");
    printf("\nEnter 11 for SEATTLE");
    printf("\nEnter 12 for MALDIVES");
    printf("\nEnter 13 for TOKYO");
    printf("\nEnter 14 for ROME");
    printf("\nEnter 15 for BALI");
    printf("\n********************************************************************************************************\n");
    scanf("%d",&dest);
    printf("\n###########\tDESTINATION\t:\t");
    destination(dest);
    printf("###########");
    printf("\nWe provide boarding flights from three major cities of India-Mumbai ,Chennai,Delhi");
    printf("\n For the convenience of our customers,the flight fares are same from each of these cities");
    printf("\nChoose a Boarding city from the given list");
    printf("\n********************************************************************************************************");
    printf("\nEnter 1 for Mumbai");
    printf("\nEnter 2 for Chennai");
    printf("\nEnter 3 for Delhi");
    printf("\n********************************************************************************************************\n");
    scanf("%d",&bd);
    printf("\n###########\tBOARDING POINT\t:\t");
    boardpt(bd);
    printf("###########");
    printf("\nEnter the number of tickets you want to book\n");
    scanf("%d",&nt);

    ticket_cost=ticket(dest);
    printf("\nCost of one ticket as per your choice :%d",ticket_cost);
    ticket_cost*=nt*2;
    hotel_cost=hotel();
    printf("\nFooding and lodging cost per day : %lf",hotel_cost);
    printf("\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
    printf("\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
    printf("\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
    personal_details();
    no=travel_details();
    printf("\nTotal number of days of stay  :  %d",no);
    printf("\nTotal Cost of all departure as well as return tickets as per your choice :%d",ticket_cost);
    printf("\nTotal Fooding and lodging cost : %lf", hotel_cost*no);
    expense=ticket_cost+(no*hotel_cost);
    discnt=tot_discount(expense);
    printf("\nTotal cost of trip : %lf",expense);
    printf("\nTotal cost of trip after discount : %lf",expense-discnt);
    printf("\nYour Savings : %lf",discnt);
    printf("\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
    printf("\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
    printf("\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
   

return 0;
}
void boardpt(int c)
{
    switch(c)
    {
        case 1:
                printf("MUMBAI\t");
                break;
        case 2:
                printf("CHENNAI\t");
                break;
        case 3:
                printf("DELHI\t");
                break;
        default:
                printf("\nYou have entered a wrong choice");
                printf("\nEnter a choice again\n");
                int b;
                scanf("%d",&b);
                boardpt(b);
                
    }
}
void destination(int d)
{
    switch(d)
    {
        case 1:
                printf("NEW YORK\t");
                break;
        case 2:
                printf("MIAMI\t");
                break;
        case 3:
                printf("COLOMBIA\t");
                break;
        case 4:
                printf("RIO DE JANERIO\t");
                 break;
        case 5:
                printf("HONG KONG\t");
                 break;
        case 6:
                printf("DUBAI\t");
                 break;
        case 7:
                printf("LISBON\t");
                 break;
        case 8:
                printf("LONDON\t");
                 break;
        case 9:
                printf("PARIS\t");
                 break;
        case 10:
                printf("CAPE TOWN\t");
                 break;
        case 11:
                printf("SEATTLE\t");
                 break;
        case 12:
                printf("MALDIVES\t");
                 break;
        case 13:
                printf("TOKYO\t");
                 break;
        case 14:
                printf("ROME\t");
                 break;
        case 15:
                printf("BALI\t");
                 break;
        default:
                printf("\nYou have entered a wrong choice");
                printf("\nEnter a choice again\n");
                int b;
                scanf("%d",&b);
                destination(b);
                
    }

}
int ticket(int c)
{
    int cost_t[15][3]={34200,120000,270200,45500,145700,317700,46500,188450,345800,45500,200000,378000,15000,62000,345700,8300,18000,130000,32500,100000,300000,25000,87000,218000,29330,72900,239700,37250,15700,349000,40000,145500,35900,29500,80700,241250,59450,99900,349600,31800,79000,228500,42000,67300,150000};
    printf("\n********************************************************************************************************");
    printf("\nCost of Economic Class ticket : %d",cost_t[c][0]);
    printf("\nCost of Business Class ticket : %d",cost_t[c][1]);
    printf("\nCost of First Class ticket    : %d",cost_t[c][2]);
    printf("\n********************************************************************************************************");
    int num;
    printf("\n Enter 1 for Economic Class\n");
    printf("\n Enter 2 for Business Class\n");
    printf("\n Enter 3 for First Class\n");
    scanf("%d",&num);
    int s= cost_t[c][num-1];
    printf("%d",s);
    return s;
}
double hotel()
{
    printf("\nChoose a hotel from the choices given below");
    printf("\n********************************************************************************************************");
    printf("\nHOTEL NAME             :      COST PER NIGHT     : CHOICE TO BE ENTERED");
    printf("\nRED LION               :      Rs.20,800          : 1");
    printf("\nCoast Gateway          :      Rs.25,300          : 2");
    printf("\nHILTON GARDEN          :      Rs.30,000          : 3");
    printf("\nHOTEL NIGHT VIEW       :      Rs.36,700          : 4");
    printf("\nHOTEL STAY BRIDGE      :      Rs.45,200          : 5");
    printf("\nPARK AVENUE            :      Rs.55,800          : 6");
    printf("\nGRAND HYATT            :      Rs.70,500          : 7");
    printf("\nFOUR SEASONS           :      Rs.85,400          : 8");
    printf("\nFAIRMONT OLYMPIC       :      Rs.90,900          : 9");
    printf("\nTHE HEATHMAN           :      Rs.110000          : 10");
    printf("\n********************************************************************************************************\n");
    int cost_h[15]={20800,25300,30000,36700,45200,55800,70500,85400,90900,110000};
    int c;
    double sum;
    scanf("%d",&c);
    if(c>0 && c<11)
    sum=cost_h[c-1];
    else
    {
        printf("\nYou have entered a wrong choice.");
        printf("\nPlease Re-enter a valid choice from the list.\n");
        hotel();
    }
    printf("\nFor A/C rooms ,the price would increase by 25%");
    printf("\n Enter 1 for A/C Room\n");
    printf("\n Enter 2 for  non A/C Room\n");
    int a;
    scanf("%d",&a);
    if(a==1)
    sum=1.25*sum;
    printf("\nIf you want to upgrade your room to premium,the cost per day would increase by 30%");
    printf("\nEnter 1 to upgrade to premium room or enter 2 to proceed with the basic room\n");
    int b;
    scanf("%d",&b);
    if(b==1)
    sum*=1.30;
    b=0;
    printf("\nPlease Enter the number of rooms you want to book\n");
    scanf("%d",&b);
    
    sum=sum+facilities(c-1);
    sum=sum*b;
    return sum;
}
double facilities(int a)
{
    int m,n;
    double tot;
    int veg[10]={2000,3500,4000,4500,5000,5500,6000,6500,7000,7500};
    int non_veg[10]={3000,4500,5000,5500,6000,6500,7000,7500,8000,8500};
    printf("\nEnter 1 for Vegetarian Platter\n");
    printf("\nEnter 2 for Non-Vegetarian Platter\n");
    scanf("%d",&m);
    switch(m)
    {
        case 1:
                tot=veg[a];
                break;
        case 2:
                tot=non_veg[a];
                break;
        default:
                printf("\nYou have entered an invalid choice");
                printf("\nRe enter a valid choice from options\n");
                facilities(a);
    }
    printf("\nYou may upgrade your food platter to delux with just 25% increase in the cost of basic platter\n ");
    printf("\nTo upgrade to delux platter ,enter 1 or to continue with basic platter,enter 2\n");
    scanf("%d",&n);
    if(n==1)
    tot=1.23*tot;
    printf("\nIn order to make your stay more pleasurable,all our hotels provide facilities of: ");
    printf("\nbeauty salon , gymnasium , spa , ayurvedic treatment and amphitheatre");
    printf("********************************************");
    printf("\nFACILITY            \tCOST PER DAY");
    printf("\nBeauty Salon:       \tRs.2000");
    printf("\nGymnasium:          \tRs.1000");
    printf("\nSpa:                \tRs.2000");
    printf("\nAyurvedic Treatment:\tRs.2000");
    printf("\nAmphitheatre:       \tRs.1500");
    printf("********************************************");
    n=0;
    printf("\nEnter 1 to add beauty salon facility else Enter 0\n");
    scanf("%d",&n);
    if(n==1)
    tot+=2000;
    n=0;
    printf("\nEnter 1 to add Gymnasium facility else Enter 0\n");
    scanf("%d",&n);
    if(n==1)
    tot+=1000;
    n=0;
    printf("\nEnter 1 to add spa facility else Enter 0\n");
    scanf("%d",&n);
    if(n==1)
    tot+=2000;
    n=0;
    printf("\nEnter 1 to add Ayurvedic Treatment facility else Enter 0\n");
    scanf("%d",&n);
    if(n==1)
    tot+=2000;
    n=0;
    printf("\nEnter 1 to add Amphitheatre facility else Enter 0\n");
    scanf("%d",&n);
    if(n==1)
    tot+=1500;
    return tot;
}
int travel_details()
{
    char dep[10];
    char arr[10];
    int num;
    printf("\nPlease enter the dates in the following format without any spaces");
    printf("\n dd/mm/yyyy");
    printf("\nEnter Departure Date");
    gets(dep);
    printf("\nEnter Return Date");
    gets(arr);
    printf("\nDeparture Date: ");
    puts(dep);
    printf("\nReturn Date:");
    puts(arr);
    printf("\nPlease enter the number os days of stay\n");
    scanf("%d",&num);
    return num;
}
void personal_details()
{
    char name[100];
    char address[200];
    char mob[15];
    char email[50];
    printf("\nPlease Enter your full name\n");
    gets(name);
    printf("\nPlease Enter your home address specifying house number,locality,city and state\n");
    gets(address);
    printf("\nPlease enter your mobile number with the country code\n");
    gets(mob);
    printf("\nPlease enter your email address\n");
    gets(email);
    printf("**************************************************************************");
    printf("\n                           PERSONAL DETAILS                                ");
    printf("\nNAME:");
    puts(name);
    printf("\nADDRESS:");
    puts(address);
    printf("\nMOBILE NUMBER:");
    puts(mob);
    printf("\nEMAIL ADDRESS:");
    puts(email);
}
double tot_discount(double t)
{
    double discount;
    if(t<=50000)
    {
        printf("\nCongratulations!!You get an additional discount of 5 percent");
        discount=0.05*t;
    }
    else if(t>50000 && t<=70000)
    {
        printf("\nCongratulations!!You get an additional discount of 10 percent");
        discount=0.10*t;
    }
    else if(t>70000 && t<=100000)
    {
        printf("\nCongratulations!!You get an additional discount of 25 percent");
        discount=0.25*t;
    }
    else if(t>100000 && t<=200000)
    {
        printf("\nCongratulations!!You get an additional discount of 30 percent");
        discount=0.30*t;
    }
    else
    {
        printf("\nCongratulations!!You get an additional discount of 40 percent");
        discount=0.40*t;

    }
    return discount;

}