#pragma once
#include <iostream>
#include <cstring>

#include "employer.h"
#include "RegisteredUser.h"
//#include "jobVacancy.h"
//#include "application.h"

using namespace std;

employer:: employer()
{
  
}


void employer::displayemployer()
{
  
  cout << "Employer ID = " << PID << endl;
	cout << "Employer Name = " << PersonName << endl;
	cout << "Employer Password = " << personPassword << endl;
	cout << "Employer Age = " << personAge << endl;
	cout << "Employer = " << personType << endl;
	cout << "Employer Email = " << personEmail << endl;
	cout << "Employer ContactNumber = "
		   << personContactNo << endl;
  
}

//void employer:: postVacancies(jobVacancy *vac){}

//void employer:: editVacancies(jobVacancy *vac){}

//void employer:: deleteVacancies(jobVacancy *vac){}

//void employer:: respondApplications(application *app){}

employer:: ~employer()
{
  
}