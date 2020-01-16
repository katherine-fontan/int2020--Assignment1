/*
Katherine Fontan
2290561
Assignment 1- Employee Pay

Program will read in the number of hours worked in a week as input and that will
then output the worker’s gross pay, each withholding amount,
and the net take-home pay for the week
*/

#include <iostream>
using namespace std;

int main (int argc, char **argv)
{
  int paidRate, overtimeRate,overtimeHours, medicalInsurance, grossPay, hoursWorked;
  double ssTax, federalTax, stateTax, netPay;

  paidRate = 16;
  //ask number of hours they worked in a week as input
  cout << "How many hours were worked in a week?" << endl;
  cin >> hoursWorked;

  //calculate the gross pay, each withholding amount and the net take-home pay for the week
  if (hoursWorked <= 40)
  {
    grossPay = hoursWorked * 16;
  }
  else
  {
    overtimeHours = hoursWorked - 40;
    grossPay = (40 * 16) + (overtimeHours);
  }

}
