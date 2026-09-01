#include <stdio.h>

int main(){
///////////budget calcultor///////////
//1.decrare variable
double revenue=0.00;
double expense=0.00;
double balance=0.00;

int departments=0;
double payroll=0.00;
double procurement=0.00;
double assets=0.00;

printf("MUNICIPAL BUDGET CALCULATOR");

//2. Prompt User for Revenue
printf("Enter Total Revenue");
scanf("%lf", &revenue);

//2. Prompt User for Expense
printf("Enter total Expense: ");
scanf("%lf", &expense);

//2 Prompt user for Departments
printf("Enter number of Departments: ");
scanf("%d", &departments);

//2.Prompt user for Payroll
printf("Enter total Payroll: ");
scanf("%lf", &payroll);

//2.Prompt user for Procurement
printf("Enter total Procurement: ");
scanf("%lf", &procurement);

//2.Prompt user for  assets
printf("Enter total Assets: ");
scanf("%lf", &assets);

balance=revenue-expense;

printf("Revenue   N$%.2f", revenue);
printf("Expense   N$%.2f", expense);
printf("Balance   N$%2.f", balance);

printf("Departments   N$%d", departments);
printf("Payroll   N$%2.f", payroll);
printf("Procurement   N$%2.f", procurement);
printf("Assets   N$%2.f", assets);

return 0;
}