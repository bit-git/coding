/*	Semester 2 Week 1
	Example 1			Wk1L1Ex1.h

	Nesting Structures
*/

/* 	This is the header file where the structures
	will be defined
	It will also hold any definitions
*/

/* 	Define a series of constants, especially
	useful when working with string arrays etc.
*/

#define NAME_LENGTH 50	// Convention to use capitals
#define	JOB_TITLE_LENGTH 30
#define REG_NO_LENGTH 15

struct strDate
{
	int	nDay;
	int	nMnth;
	int	nYear;
};						// always remember the semi-colon

struct strPerson
{
	char 			arcFirst[NAME_LENGTH]; 	//OK to use NAME_LENGTH as #defined
	char 			arcMiddle[NAME_LENGTH];
	char			arcLast[NAME_LENGTH];
	char			cSex;
	struct strDate	strDOB;
};

struct	strEmployee
{
	struct strPerson 	strDetails;
	char				arcJobTitle[JOB_TITLE_LENGTH];
	double				dSalary;
	struct strDate 		strStartDate;
};

struct strStudent
{
	struct strPerson	strDetails;
	char				arcCourseTitle[JOB_TITLE_LENGTH];
	char				arcRegNumber[REG_NO_LENGTH];
	struct strDate		strStartDate;
};
