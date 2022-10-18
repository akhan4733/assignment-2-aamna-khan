#include <iostream>
#include "Employee.h"


class nonProfessional:public Employee

{
    float hours_worked_in_a_week;

public : float weeklysalary()
{
  weekly_salary=500*hours_worked_in_a_week;
  return weekly_salary;
}

public : float vacationdays()
{
      vacation_days= (2*hours_worked_in_a_week)/24;
  return vacation_days;
     }

public :float healthcaredays(float calc_sal)
{
  health_caredays = 0.03f*calc_sal;
  return health_caredays;
}
  };
