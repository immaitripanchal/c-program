#include <stdio.h>
struct state
{
  char name[50];
  int population;
  float literacy;
  double income;
};
void highestLiteracyRateAndIncome(struct state arr[], int n, int *highestLiteracyIdx, int *highestIncomeIdx)
{
  struct state litNdIn = arr[0];
  for (int i = 0; i < n; i++)
  {
    if (litNdIn.literacy < arr[i].literacy)
    {
      *highestLiteracyIdx = i;
    }
    if (litNdIn.income < arr[i].income)
    {
      *highestIncomeIdx = i;
    }
  }
  return;
}

int main()
{
  int n = 3;
  struct state arr[n];
  for (int i = 0; i < n; i++)
  {
    printf("enter state name :");
    scanf("%s", arr[i].name);
    printf("enter population of that state :");
    scanf("%d", &arr[i].population);
    printf("enter literacy rate :");
    scanf("%f", &arr[i].literacy);
    printf("enter per capital income :");
    scanf("%lf", &arr[i].income);
  }
  int highestLiteracyIdx;
  int highestIncomeIdx;
  highestLiteracyRateAndIncome(arr, n, &highestLiteracyIdx, &highestIncomeIdx);

  printf("highest literacy rate is %.2f of %s\n", arr[highestLiteracyIdx].literacy, arr[highestLiteracyIdx].name);
  printf("highest income is %.2lf of %s", arr[highestIncomeIdx].income, arr[highestIncomeIdx].name);

  return 0;
}
// Declare structure  having state name, population, literacy
// rate and per capita income. Input 5 records. Display the
// state whose literacy rate is highest and whose per capita
// income is highest.
// #include <stdio.h>
// struct state
// {
//   char name[50];
//   int population;
//   float literacy;
//   double income;
// };
// struct state highestLiteracyRateState(struct state arr[], int n)
// {
//   struct state lit = arr[0];
//   for (int i = 0; i < n; i++)
//   {
//     if (lit.literacy < arr[i].literacy)
//     {
//       lit = arr[i];
//     }
//   }
//   return lit;
// }
// struct state highestIncomeState(struct state arr[], int n)
// {
//   struct state in = arr[0];
//   for (int i = 0; i < n; i++)
//   {
//     if (in.income < arr[i].income)
//     {
//       in = arr[i];
//     }
//   }
//   return in;
// }
// int main()
// {
//   int n = 3;
//   struct state arr[n];
//   for (int i = 0; i < n; i++)
//   {
//     printf("enter state name :");
//     scanf("%s", arr[i].name);
//     printf("enter population of that state :");
//     scanf("%d", &arr[i].population);
//     printf("enter literacy rate :");
//     scanf("%f", &arr[i].literacy);
//     printf("enter per capital income :");
//     scanf("%lf", &arr[i].income);
//   }
//   struct state lit = highestLiteracyRateState(arr, n);
//   printf("highest litracy rate is %.2f of %s\n", lit.literacy, lit.name);
//   struct state in = highestIncomeState(arr, n);
//   printf("highest income is %.2lf of %s ", in.income, in.name);

//   return 0;
// }
// #include <stdio.h>
// struct state
// {
//   char name[50];
//   int population;
//   float literacy;
//   double income;
// };
// int highestLiteracyRateAndIncome(struct state arr[], int n, int no)
// {
//   struct state litNdIn = arr[0];
//   int idx1, idx2;
//   for (int i = 0; i < n; i++)
//   {
//     if (litNdIn.literacy < arr[i].literacy)
//     {
//       idx1 = i;
//     }
//     if (litNdIn.income < arr[i].income)
//     {
//       idx2 = i;
//     }
//   }
//   if (no == 0)
//     return idx1;
//   else
//     return idx2;
// }

// int main()
// {
//   int n = 3;
//   struct state arr[n];
//   for (int i = 0; i < n; i++)
//   {
//     printf("enter state name :");
//     scanf("%s", arr[i].name);
//     printf("enter population of that state :");
//     scanf("%d", &arr[i].population);
//     printf("enter literacy rate :");
//     scanf("%f", &arr[i].literacy);
//     printf("enter per capital income :");
//     scanf("%lf", &arr[i].income);
//   }
//   int idx1 = highestLiteracyRateAndIncome(arr, n, 0);
//   int idx2 = highestLiteracyRateAndIncome(arr, n, 1);
//   printf("highest literacy rate is %.2f of %s\n", arr[idx1].literacy, arr[idx1].name);
//   printf("highest income is %.2lf of %s", arr[idx2].income, arr[idx2].name);

//   return 0;
// }