// Application CPP 
//IT21334238

#include <iostream>
#include <cstring>

#include "Application.h"



using namespace std;

Application::Application()
{
 	
	strcpy(applicationID,"none");
 	strcpy(applicationType,"none");
 	
}

Application::Application(Vacancy *Avac,JobSeeker *Ajs,const char appID[],const char appType[])
{
  vac = Avac;
 	js = Ajs;
 	strcpy(applicationID,appID);
 	strcpy(applicationType,appType);
}

void Application::displayApplication() 
{
 	cout << "Application ID : " << applicationID << endl;
 	cout << "Application Type : " << applicationType << endl;
 	
}

Application::~Application()
{
 	cout << "Application destructor perfectly executed!" << endl;
}