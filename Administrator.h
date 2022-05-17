//IT21321436 - Gunatilleke M.B.D.S

#pragma once

#include "RegisteredUser.h"

class Administrator :public RegisteredUser
{
protected:
	double ApprovedApplication;
	double AvailableVacancies;
	int NumberOfEmployeeHold;
	int NumberOfComapany;

public:
	Administrator();
	Administrator(const char PID[], const char perName[], const char perType[], const char perPwd[], int perAge, const char perEmail[], const char perContctNo[]) : RegisteredUser(PID, perName, perType, perPwd, perAge, perEmail, perContctNo) {}
	void displayAdministrator();
	void SetVacancyApproveStatus(double AA, double AV, int NOEH, int NOC);
	void SetVacancyApproveDate();
	void UpdateVacancy();
	void displayVacancyApproveReport();
	void VacancyApproveReport();
  void UpdateRegisteredUser();
  void genReport();
	~Administrator();
};
