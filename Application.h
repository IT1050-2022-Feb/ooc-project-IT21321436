//Application Class Header File
//IT21334238
#include "Vacancy.h"
#include "JobSeeker.h"

class Application {
 	private:
 		Vacancy *vac;
 		JobSeeker *js;
 		char applicationID[10];
 		char applicationType[10];
 	public:
		
 		Application();
 		Application(Vacancy *Avac,JobSeeker *Ajs,const char appID[],const char appType[]);
 		void displayApplication();
 		~Application();
};