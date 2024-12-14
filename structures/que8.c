// Define a structure employee with member variables
// having employee name, basic pay, dearness allowance,
// house rent, net salary. Store data of 5 employees. Write a
// function which calculates the net salary of employees
// and prints all employee details in descending order of
// their net salary.
#include <stdio.h>
#include <stdbool.h>
struct employee
{
  char name[50];
  float basicPay;
  float dearnessAllowance;
  float houseRent;
  float netSalary;
};
void calculateNetSalary(struct employee arr[], int n);
void sortEmployeeByNetSalary(struct employee arr[], int n);
int main()
{
  int n = 3;
  struct employee arr[n];
  for (int i = 0; i < n; i++)
  {
    printf("enter employee name :");
    scanf("%s", arr[i].name);
    printf("enter basic pay :");
    scanf("%f", &arr[i].basicPay);
    printf("enter dearness allowance :");
    scanf("%f", &arr[i].dearnessAllowance);
    printf("enter house rent :");
    scanf("%f", &arr[i].houseRent);
  }
  calculateNetSalary(arr, n);
  sortEmployeeByNetSalary(arr, n);
  printf("employee details in descending order :\n");
  for (int i = 0; i < n; i++)
  {
    printf("employee name : %s\n", arr[i].name);
    printf("basic pay of employee : %.2f\n", arr[i].basicPay);
    printf("dear allowance is : %.2f\n", arr[i].dearnessAllowance);
    printf("house rent is : %.2f\n", arr[i].houseRent);
    printf("net salary is : %.2f\n", arr[i].netSalary);
  }
}
void calculateNetSalary(struct employee arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    arr[i].netSalary = arr[i].basicPay + arr[i].dearnessAllowance + arr[i].houseRent;
  }
}
void sortEmployeeByNetSalary(struct employee arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    bool flag = true;
    for (int j = 0; j < n - i; j++)
    {
      if (arr[j].netSalary < arr[j + 1].netSalary)
      {
        struct employee temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        flag = false;
      }
    }
    if (flag == true)
      break;
  }
}