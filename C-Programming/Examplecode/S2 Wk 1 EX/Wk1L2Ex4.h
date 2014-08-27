/*	Week1 Semester 2 Lecture 2
	Example 4		Wk1L2Ex4.h		see also Wk1L4Ex4.c

	Inputing string data to an array of structures
*/

#define FILE_NAME "peopleinfo.dat"

struct strPerson
{
	char	arcGName[20];		/* Given Name */
	char	arcFName[20];		/* Family Name */
	char	arcJobTitle[20];
	char	arcUserID[10];
	char	arcPassWord[10];
};
