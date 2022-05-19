//IT21321436 - Gunatilleke M.B.D.S

#include "Administrator.h"
#include "RegisteredUser.h"


#include <iostream>
#include <cstring>
using namespace std;

//default constructor implementation
Administrator::Administrator()
{
  
  cout << "Administrator ID = " << "none" << endl;
	cout << "Administrator Name = " << "none" << endl;
	cout << "Administrator Password = " << "none" << endl;
	cout << "Administrator Age = " << 0 << endl;
	cout << "Administrator Type = " << "none" << endl;
	cout << "Administrator Email = " << "none" << endl;
	cout << "Administrator ContactNumber = "
		   << "none" << endl;
}

void Administrator::displayAdministrator()
{
  
  cout << "Administrator ID = " << PID << endl;
	cout << "Administrator Name = " << PersonName << endl;
	cout << "Administrator Password = " << personPassword << endl;
	cout << "Administrator Age = " << personAge << endl;
	cout << "User Type = " << personType << endl;
	cout << "Administrator Email = " << personEmail << endl;
	cout << "Administrator ContactNumber = "
		   << personContactNo << endl;
  
}

void Administrator::SetVacancyApproveStatus(double AA, double AV, int NOEH, int NOC)
{
  
	ApprovedApplication = AA;
  AvailableVacancies = AV;
	NumberOfEmployeeHold = NOEH;
	NumberOfComapany = NOC;
  
}

void Administrator:: SetVacancyApproveDate()
{
  
}

void Administrator:: UpdateVacancy()
{
  
}

void Administrator::displayVacancyApproveReport()
{
  
  cout << "ApprovedApplication = " << ApprovedApplication << endl;
	cout << "AvailableVacancies = " << AvailableVacancies << endl;
	cout << "NumberOfEmployeeHold = " << NumberOfEmployeeHold << endl;
	cout << "NumberOfComapany = " << NumberOfComapany << endl;
  
}

void Administrator::UpdateRegisteredUser()
{
  
}

void genReport()
{
  
}

Administrator::~Administrator()
{
}
