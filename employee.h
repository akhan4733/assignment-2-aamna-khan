#include <iostream>
#include <string>

using namespace std;


class Employee
{
public: 
Employee();
Employee(string name, int id, bool updatedInfo, string jobStart);

virtual double weeklySalary () = 0;

virtual double healthCaredays () = 0;

virtual double vacationDays () = 0;

public: float weekly_salary, vacation_days, health_caredays;

string GetName();
void SetName(string nameofEmployee);

int GetID();
void SetID(int idforEmployee);

bool GetInfo();
void SetInfo(bool infoforEmployee);

string GetStart();
void SetStart(string StartEmployee);

protected:

int id;
string name;
bool updatedInfo;
string jobstart;

};
