
//JOB SEEKER Class Header File
//IT21334238
#include <iostream>
#include <cstring>

#include "RegisteredUser.h"

class JobSeeker: public RegisteredUser
{
 	
	public:
		JobSeeker();
 		JobSeeker(const char jsID[],const char jsName[],const char jsType[],const char jspassword[],int jsAge,const char jsEmail[],const char jsContactNo[])  : RegisteredUser(jsID, jsName, jsType, jspassword, jsAge, jsEmail, jsContactNo) {}
 		void viewVacancies();
 		void ApplyforVacancies();
    void displayJSDetails();
 		~JobSeeker();
};