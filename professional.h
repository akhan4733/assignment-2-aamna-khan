#include <iostream>
#include "Employee.h"

using namespace std;



class Professional: public Employee
{
  public: float monthlysalary, monthlyvacation;

public: float weeklysalary()
{
  weekly_salary = monthlysalary/4;
  return weekly_salary;
}

public: float
vacationdays()
{
  vacation_days=monthlyvacation/4;
  return vacation_days;
}

public : float
healthcaredays(float calc_sal)
{
health_caredays = 0.05f*calc_sal;
  return health_caredays;
}

};
