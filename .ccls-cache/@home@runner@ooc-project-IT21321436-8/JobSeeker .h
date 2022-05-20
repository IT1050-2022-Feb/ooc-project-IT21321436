

//JOB SEEKER Class Header File
//IT21334238


class JobSeeker: public RegisteredUser
{
 	private:
 	
	public:
		JobSeeker();
 		JobSeeker(const char jsID[],const char jsName[],const char jspassword[],int jsage,const char jsemail[]);
 		void viewVacancies();
 		void ApplyforVacancies();
 		~JobSeeker();
};