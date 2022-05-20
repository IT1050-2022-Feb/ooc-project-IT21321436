//Vacancy Class Header File
//IT21334238


class Vacancy
{
 	private:
 		
		char VacancyID[10];
 		char VacancyName[20];
 		char VacancyType[20];
 		char publishDate[10];
 		char VacancyStatus[10];
 		int  duration;
 		
		
 		
 	public:
 		
 		Vacancy();
 		Vacancy(const char vID[] ,const char vName[] ,const char vType[], const char pDate[], const char vStatus[], int pDuration);
 		  
 		void updateVacancyDetails();
		void displayVacancyDetails();
		void setVacancyStatus();
 		~Vacancy();
};