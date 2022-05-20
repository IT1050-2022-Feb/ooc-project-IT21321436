#include <iostream>
#include <cstring>
#include "Vacancy.h"
#include "employer.h"
using namespace std;

Vacancy::Vacancy()
{
 	strcpy(VacancyID , "");
 	strcpy(VacancyName , "");
 	strcpy(VacancyType , "");
 	strcpy(publishDate , "");
 	strcpy(VacancyStatus , "");
 	duration = 0;
}

Vacancy::Vacancy(const char vID[] ,const char vName[] ,const char vType[], const char pDate[], const char vStatus[], int pDuration)
{
 	strcpy(VacancyID , vID);
 	strcpy(VacancyName , vName);
 	strcpy(VacancyType , vType);
 	strcpy(publishDate , pDate);
 	strcpy(VacancyStatus , vStatus);
}



void Vacancy::updateVacancyDetails()
{
 	cout << "Vacancy ID Status - " << VacancyID << " : " << endl;
 	cin >> VacancyStatus; 
}