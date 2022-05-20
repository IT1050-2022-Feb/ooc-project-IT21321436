//Dharmadasa.P.S.K
//IT21311086
//Report.h
#pragma onece
#include "Administrator.h"


class Report
{
protected:
  char RID[10];
  char ReportName[20];
  char CreateDate[15];
Administrator *admin;

public:
  Report();
  Report(const char RID[], const char 
  RName[], const char RDate[] );
  void updateReport();
  void displayRepor();
  ~Report();
};