#include <stdio.h>

struct bookdetails
{
    int bookid,g;
    char bname[100],aname[100];
    float price;
}bk[100];

int main()
{
    int n,i=0,id=101,j,x,chk,k;
    printf("********************************************************************************************************\n\n");
    printf("                                LIBRARY MANAGEMENT SYSTEM                                             \n");
    printf("********************************************************************************************************\n");
    do
    {
        printf("          1.Add books \n          2.View books \n          3.Issue books \n          4.View Issued books \n          5.Return books \n          6.Exit \n");
        scanf("%d",&n);
        if(n==1)
        {
            printf("Enter book name:");
            scanf("%s",bk[i].bname);
            printf("Enter author name:");
            scanf("%s",bk[i].aname);
            printf("Enter price:");
            scanf("%f",&bk[i].price);
            bk[i].bookid=id;
            i++;
            printf("\nBook added successfully\n");
            printf("Book id is: %d\n",id);
            id++;
        }
        else if(n==2)
        {
          
         for(j=0;j<i;j++)
            {
                if(bk[j].g==0)
                    printf("%d %s %s %.2f",bk[j].bookid,bk[j].bname,bk[j].aname,bk[j].price);
            }   
        }
        else if(n==3)
        {
            printf("Enter book id:");
            scanf("%d",&x);
            chk=1;
            for(j=0;j<i;j++)
            {
                if(bk[j].bookid==x && bk[j].g==0)
                {
                    bk[j].g=1;
                    chk=0;
                    break;
                }
            }
            if(chk==1)
               printf("Book out of stock");
            else
               printf("Book issued successfully");
        }
        else if(n==4)
        {
            printf("List of issued book:");
            for(j=0;j<i;j++)
            {
                if(bk[j].g==1)
                   printf("%d %s %s %.2f",bk[j].bookid,bk[j].bname,bk[j].aname,bk[j].price);
            }
        }
        else if(n==5)
        {
            printf("Enter book id:");
            scanf("%d",&x);
            chk=1;
            for(j=0;j<i;j++)
            {
                if(bk[j].bookid==x && bk[j].g==1)
                {
                    printf("Book returned successfully");
                    bk[j].g=0;
                    chk=0;
                    break;
                }
            }
            if(chk==1)
                printf("Invalid book id");
        }
        else
           break;
        printf("\nDo you want to continue ? press 1 to continue 0 to exit");
        scanf("%d",&k);
    }while(k);
    return 0;
}


