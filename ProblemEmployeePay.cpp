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
  double ssTax, federalTax, stateTax, netPay; //  are they double?

  paidRate = 16;
  medicalInsurance = 10;
  //ask number of hours they worked in a week as input
  cout << "How many hours were worked in a week?" << endl;
  cin >> hoursWorked;

  //calculate the gross pay, each withholding amount and the net take-home pay for the week
  if (hoursWorked > 40)
  {
    overtimeHours = hoursWorked - 40;
    grossPay = (40 * paidRate) + (overtimeHours * (paidRate* 0.5));
  }
  else
  {
    grossPay = hoursWorked * paidRate;
  }

  ssTax = grossPay * 0.06;
  federalTax = grossPay * 0.14;
  stateTax = grossPay * 0.05;

  netPay = grossPay - ssTax - federalTax - stateTax - medicalInsurance;

  cout << "Based on the hours worked, the gross pay is: "<< grossPay << endl;
  cout << "The withholding tax and medical amounts are: $" << ssTax << " for Social Security Tax, $"
  << federalTax << " for federal income tax, $" << stateTax << " state income tax, and $10 for medical insurance." << endl;
  cout << "Based on the calculated withholding amounts, your net pay is: $" << netPay << endl;
  
  return 0;
}
