//Dharmadasa.P.S.K
//IT21311086
//FeedBack.h

#pragma once
#include <iostream>
#include <cstring>

class Feedback
{
protected:
  char feedbackID[10];
  char feedback[20];
  char FeedbackType[10];

public:
 Feedback();
 Feedback(const char FID[], const char feedback[], const char FType[]);
~Feedback();
void UptadeFeedback();
void displayFeedback();
};