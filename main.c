
#include <stdio.h>
#include <stdlib.h>
int total=0;
static int i=0;

void MainMenu()
{
    printf("1.Dhokla    20 Rs\n");
    printf("2.Dosa      25 Rs\n");
    printf("3.Samosa    10 Rs\n");
    printf("4.Idly      15 Rs\n");
    printf("5.Tea        5 Rs\n");
    printf("0.EXIT      \n");
}
void bill(int r,int name[])
{
    //int tot=0;
    //int plts=0;

    int Arrplts[20];
    int Arrtot[20];
      int l;
     int j;
     int t=i;
    for(l=0;l<Arrtot[20];l++)
    {
        Arrtot[l]=0;
       //printf(" %d \n",Arrtot[l]);
    }

    printf("How Many Plates? at i= %d : ",i);
    scanf("%d",&Arrplts[i]);          //

    Arrtot[i] = Arrtot[i] + (Arrplts[i]*r);

    printf(" %s    %d  *  %d   = %d   %d \n\n",name,Arrplts[i],r,Arrtot[i],i);

    total = Arrtot[i];

    i=i+1;



}
void  order(int ch)
{

//char n[10];


        switch(ch)
        {
        case 1:
            bill(20,"DHOKLA");
            break;
        case 2:
            bill(25,"DOSA");
            break;
        case 3:
            bill(10,"SAMOSA");
            break;
       case 4:
            bill(15,"IDLY");
            break;
       case 5:
            bill(5,"TEA");
            break;
        default:
            printf("Ur choice is not proper...\n");
        }
    }



int main()
{
    int totalBill=0;
    char ans;
    int ch;
    printf("    ::HOTEL D21::     \n\n");
    printf("Order please....     \n\n");
    MainMenu();

    do
    {
    printf("\nWhat do you want : ");
    scanf("%d",&ch);


    if (ch==0)
        break;
    else
        order(ch);

    totalBill = total + totalBill;

    printf("\nAnything Else? (Y/N)  :");
    scanf(" %c",&ans);
    }
    while(ans == 'y');






    printf("\n\n Total is : %d \n\n",totalBill);

    printf("::::   Thank you      ::::\n");
    printf(":::: Have a nice Day  ::::\n\n");
    return 0;
}








    //printf("%c  %d  * %d = %d \n\n",name,p,rt,price);



//printf("Arrtot[i] %d \n",Arrtot[i]);
    //printf(" Arrtot[i] %d \n",Arrtot[i]);



    //char name[10]="";
    /*int totalplts=0;
    int totalprice=0;
    int totalrate=0;
    */


//total = total + price;
    //printf("Total is : %d \n",total);



    //////int *price,int *p,int *rt,int *c
/*&price,&p,&rt,&c */


/*
 if (c==1)
    {
      printf("\n\nDHOKLA  %d  * %d = %d \n\n\n\n",totalplts,totalrate,totalprice);
    }



if (c==1)
    {
      totalplts = totalplts + p;
      totalprice = totalprice + price;
      totalrate = totalrate + rt;
    }
     */
    //printf("The %s price is %d for %d pltaes %d Rs per item\n\n",name,price,p,rt);
/*case 3:
            *rt = 20;
            //*name = 'S';
            *price=20*plts;
            *p=plts;
            break;
        case 4:
            *rt = 15;
            //*name = 'I';
            *price=15*plts;
            *p=plts;
            break;
        case 5:
            *rt = 5;
            //*name = 'T';
            *price=5*plts;
            *p=plts;
            break;*/


            //totalBill = totalBill + price;


    //printf("  %d  * %d = %d \n\n",p,rt,price);
//for(l=0;l<t;l++)
  //      printf(" CALCULATION is   %s   %d  *  %d   = %d    i=%d t=%d \n\n",name,Arrplts[l],r,Arrtot[l],i,t);

