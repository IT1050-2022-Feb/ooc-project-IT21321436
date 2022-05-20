//Dharmadasa.P.S.K
//IT21311086
//FeedBack.cpp
#include <iostream>
#include "Feedback.h"
#include <cstring>
using namespace std;

Feedback::Feedback() {
  
}

  Feedback::Feedback(const char FID[], const char Feedback[], const char FType[] )
{
  strcpy(feedbackID,FID);
  strcpy(feedback,Feedback);
  strcpy(FeedbackType,FType);
}

void Feedback::UptadeFeedback(){
  
}
void Feedback::displayFeedback(){
  cout <<  "Feedback ID :"<< feedbackID << endl;
  cout << "Feedback : " << feedback << endl;
  cout << "Feedback Type : " << FeedbackType << endl;
  
}
Feedback::~Feedback() {}