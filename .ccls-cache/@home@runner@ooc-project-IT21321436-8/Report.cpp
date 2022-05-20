//Dharmadasa.P.S.K
//IT21311086
//Report.cpp
#include "Report.h"
#include "Administrator.h"
#include <iostream>
# include <cstring>
using namespace std;

Report::Report() {}

Report :: Report(const char reportID[], const char RName[], const char RDate[])
{
  strcpy(RID , reportID); 
  strcpy(ReportName , RName);
  strcpy(CreateDate , RDate);
}
void Report::updateReport(){
  
}
void Report::displayRepor()
{
  cout << "Report ID : " << RID << endl;
  cout << "Report Name : " << ReportName << endl;
  cout << "Create Date : " << CreateDate << endl;
  
}
Report::~Report() {}