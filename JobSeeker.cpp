//JOB SEEKER CPP
//IT21334238

#include <iostream>
#include "JobSeeker.h"
#include "RegisteredUser.h"

using namespace std;

JobSeeker :: JobSeeker(){	
}


void JobSeeker:: displayJSDetails()
{
   cout << "Job Seeker ID = " << PID << endl;
	cout << "Job Seeker Name = " << PersonName << endl;
	cout << "Job Seeker Password = " << personPassword << endl;
	cout << "Job Seeker Age = " << personAge << endl;
	cout << "User Type = " << personType << endl;
	cout << "Job Seeker Email = " << personEmail << endl;
	cout << "Job Seeker ContactNumber = "
		   << personContactNo << endl;
}


void JobSeeker::viewVacancies()
{
   	
}

void JobSeeker::ApplyforVacancies()
{
	
}

JobSeeker::~JobSeeker()
{
	
}
