/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    double accountBalance;
    double annualInterestRate;
    int numYears;
    
    printf("Enter account balance: ");
    scanf("%lf", &accountBalance);
    printf("Enter annual interest rate (in %): ");
    scanf("%lf", &annualInterestRate);
    printf("Enter number of years: ");
    scanf("%d", &numYears);
    
    int yearCounter;
    double interestBalance;
    double yearlyBalance;
    double daily;
    double weekly;
    double monthly;
    double quarterly;
    double yearly;
    
    printf("years  yearly  quarterly  monthly  weekly   daily\n");
    printf("-----  ------  ---------  -------  ------   ------\n");
    
    for (yearCounter = 0; yearCounter < numYears; ++yearCounter){
        yearlyBalance = accountBalance * (annualInterestRate * .01);
        accountBalance = accountBalance + yearlyBalance;
        yearly = yearlyBalance;
        quarterly = accountBalance/90;
        monthly = accountBalance/12;
        weekly = accountBalance/52;
        daily = accountBalance/365;
        printf("%d    %lf  %lf  %lf  %lf  %lf \n", yearCounter, yearly, quarterly, monthly, weekly, daily);
    }
    
    printf("New balance is %lf", accountBalance);


    return 0;
}



