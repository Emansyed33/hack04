#include<stdio.h>
#include<math.h>
int main(int argv,char **argc)
{
    double inital_balance = atof(argc[1]);
    double montly_contribution = atof(argc[2]);
    double annual_rate_of_return = atof(argc[3]);
    double annual_rate_of_inflaction = atof(argc[4]);
    double year = atof(argc[5]);

    double balance , intrest, total_intrest,inflated_intrest;
    double monthly_rate_inflation = pow(1+annual_rate_of_inflaction,(float)1/12) -1 ;
    double monthly_rate_of_return = pow(1+annual_rate_of_return,(float)1/12)-1;

    printf("Months        Intrest            Balance\n");
    for(int i = 1; i<= year * 12; i++)
    {
        intrest = balance * monthly_rate_of_return;

        inflated_intrest = intrest / (1+monthly_rate_inflation);
        balance = balance + inflated_intrest + montly_contribution;

        total_intrest = total_intrest + inflated_intrest;
        printf("%d   %lf      %lf \n",i , inflated_intrest,balance);

    }
    printf("Total intrest is : %f\n" ,total_intrest);
    printf("Total Balance is: %f\n",balance);

    return 0;
}