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
  int  overtimeRate,overtimeHours, grossPay, hoursWorked;
  double ssTax, federalTax, stateTax, netPay; //  are they double?

  const int PAID_RATE = 16;
  const int MEDICAL_INSURANCE = 10;
  const double SOCIAL_SECURITY_RATE = 0.06;
  const double FEDERAL_TAX_RATE = 0.14;
  const double STATE_TAX_RATE = 0.05;
  const int NORMAL_HOURS = 40;
  const double OVERTIME_RATE = 1.5;
  //ask number of hours they worked in a week as input
  cout << "How many hours were worked in a week?" << endl;
  cin >> hoursWorked;

  //calculate the gross pay, each withholding amount and the net take-home pay for the week
  if (hoursWorked > NORMAL_HOURS)
  {
    overtimeHours = hoursWorked - NORMAL_HOURS;
    grossPay = (NORMAL_HOURS * PAID_RATE) + (overtimeHours * (PAID_RATE * OVERTIME_RATE));
  }
  else
  {
    grossPay = hoursWorked * PAID_RATE;
  }

  ssTax = grossPay * SOCIAL_SECURITY_RATE;
  federalTax = grossPay * FEDERAL_TAX_RATE;
  stateTax = grossPay * STATE_TAX_RATE;

  netPay = grossPay - ssTax - federalTax - stateTax - MEDICAL_INSURANCE;

  cout << "Based on the hours worked, the gross pay is: $"<< grossPay << endl;
  cout << "The withholding tax and medical amounts are: $" << ssTax << " for Social Security Tax, $"
  << federalTax << " for federal income tax, $" << stateTax << " state income tax, and $10 for medical insurance." << endl;
  cout << "Based on the calculated withholding amounts, your net pay is: $" << netPay << endl;

  return 0;
}
