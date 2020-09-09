#include <stdio.h>
struct driver
{
    char name[40];
    char dl_no[40];
    char route[40];
    float kms;
};

int main()
{
    struct driver dr1,dr2,dr3;
    printf("***************Agency Managing List For Driver*****************\n");
    printf("\n...................Enter The Details of First Driver\n");
    printf("\nEnter the name of driver \n");
    scanf("%[^\n]%*c",dr1.name);
    printf("Enter the driving license of driver\n");
    scanf("%s",dr1.dl_no);
    printf("Enter the route of driver\n");
    scanf("%s",dr1.route);
    printf("Enter the kms drived by driver\n");
    scanf("%f",&dr1.kms);
//    printf("***************Agency Managing List For Driver*****************\n");
    printf("\n...................Enter The Details of Seccond Driver\n");
    printf("\nEnter the name of driver \n");
    scanf("%s",dr2.name);
    printf("Enter the driving license of driver\n");
    scanf("%s",dr2.dl_no);
    printf("Enter the route of driver\n");
    scanf("%s",dr2.route);
    printf("Enter the kms drived by driver\n");
    scanf("%f",&dr2.kms);
//    printf("***************Agency Managing List For Driver*****************\n");
    printf("\n...................Enter The Details of Third Driver\n");
    printf("\nEnter the name of driver \n");
    scanf("%[^\n]%*c",dr3.name);
    printf("Enter the driving license of driver\n");
    scanf("%s",dr3.dl_no);
    printf("Enter the route of driver\n");
    scanf("%s",dr3.route);
    printf("Enter the kms drived by driver\n");
    scanf("%f",&dr3.kms);

// printing details of driver on screen 
    printf("\n\n--------------printing details of driver on screen---------------\n\n");
    printf("................Printing The Details of First Driver\n");
    printf("\nName of the driver %s\n",dr1.name);
    printf("Driving license : %s\n",dr1.dl_no);
    printf("Route : %s\n",dr1.route);
    printf("Kms : %f\n",dr1.kms);
    printf("\n................Printing The Details of Second Driver\n");
    printf("\nName of the driver %s\n",dr2.name);
    printf("Driving license : %s\n",dr2.dl_no);
    printf("Route : %s\n",dr2.route);
    printf("Kms : %f\n",dr2.kms);
    printf("\n................Printing The Details of Third Driver\n");
    printf("\nName of the driver %s\n",dr3.name);
    printf("Driving license : %s\n",dr3.dl_no);
    printf("Route : %s\n",dr3.route);
    printf("Kms : %f\n",dr3.kms);
    return 0;
}