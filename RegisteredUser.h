//IT21321436 - Gunatilleke M.B.D.S

#pragma once
class RegisteredUser {

protected:

	char PID[10];
	char PersonName[20];
	char personPassword[20];
	int personAge;
	char personType[20];
	char  personEmail[20];
	char personContactNo[20];

public:
	//default constructor
	RegisteredUser();
	//overloaded constructor
	RegisteredUser(const char pID[], const char perName[], const char perType[], const char perPwd[], int perAge, const char perEmail[], const char perContctNo[]);
	//setter
	void SetRegisteredUser(const char pID[], const char perName[], const char perType[], const char perPwd[], int perAge, const char perEmail[], const char perContctNo[]);
	//getter
	void DisplayRegisteredUser();
};


