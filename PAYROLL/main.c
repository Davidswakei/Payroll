/*
payroll
created by DIT-01-0104/2022
July 2022
C89 compiler
MIT License
*/

#include <stdio.h>
int main(){
    int totalhoursWorked = 40;
    int Krapin, employeeNo, hoursWorked, normalPay, overtimePay, taxPaid, netIncome;
    char name(" 100 ");

    printf("\t WELCOME TO GITONGA's Factory\n");

    printf ("enter your name; ");
    scanf ("%s", &name);

    printf ("enter your employee number; ");
    scanf ("%d", &empoyeeNo);

    printf ("enter your Krapin; ");
    scanf ("%d", &Krapin);

    printf ("enter number of hours worked; ");
    scanf ("%d", &hoursWorked);

    normalPay = 100 * totalhoursworked;
    overtimePay = (hoursWorked - totalhoursWorked) * 1500;
    taxPaid = normalPay * 30/100;
    netIncome = (normalPay - taxPaid) + overtimePay;

    printf("normalPay: %d\n", normalPay);
    printf("overtimePay: %d\n", overtimePay);
    printf("taxPaid: %d\n", taxPaid);
    printf("netIncome: %d\n", netIncome);

    return 0;
}
