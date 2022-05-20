//IT21321436 - Gunatilleke M.B.D.S

#include "RegisteredUser.h"
#include <iostream>
#include <string.h>

using namespace std;

//default constructor implementation
RegisteredUser::RegisteredUser()
{

	strcpy(PID, "none");
	strcpy(PersonName, "none");
	strcpy(personPassword, "none");
	personAge = 0;
	strcpy(personType, "none");
	strcpy(personEmail, "none");
	strcpy(personContactNo, "none");

}

//overloaded constructor implementation
RegisteredUser::RegisteredUser(const char pID[], const char perName[], const char perType[], const char perPwd[], int perAge, const char perEmail[], const char perContactNo[])
{

	strcpy(PID, pID);
	strcpy(PersonName, perName);
	strcpy(personPassword, perPwd);
	personAge = perAge;
	strcpy(personType, perType);
	strcpy(personEmail, perEmail);
	strcpy(personContactNo, perContactNo);

}

//setter
void RegisteredUser::SetRegisteredUser(const char pID[], const char perName[], const char perType[], const char perPwd[], int perAge, const char perEmail[], const char perContctNo[])
{

	strcpy(PID, pID);
	strcpy(PersonName, perName);
	strcpy(personPassword, perPwd);
	personAge = perAge;
	strcpy(personType, perType);
	strcpy(personEmail, perEmail);
	strcpy(personContactNo, perContctNo);

}

//getter

void RegisteredUser::DisplayRegisteredUser()
{
  
	cout << "Registered User ID = " << PID << endl;
	cout << "Registered User Name = " << PersonName << endl;
	cout << "Registered User Password = " << personPassword << endl;
	cout << "Registered User Age = " << personAge << endl;
	cout << "Registered User Type = " << personType << endl;
	cout << "Registered User Email = " << personEmail << endl;
	cout << "Registered User ContactNumber = "
		   << personContactNo << endl;

}


