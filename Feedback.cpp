#include<iostream>
#include<string>
using namespace std;

class Feedback
{
 private:
 	int feedbackID;
 	string feedbackMessage;
 	
 public:
 	feedback();
 	void displayFeedback(int fbNO, string fb);
};

void Feedback::displayFeedback(int fbNO, string fb)
{
	int feedbackID = fbNO;
	string feedbackMessage = fb;
}

Feedback::Feedback()
{
	
}
	

