#include<stdio.h>
#include<string.h>

struct Student	//User defined datatype
{
	int id;
	char name[30];
	int marks;
	char fav_char;
};

int main()
{
	struct Student harry, ravi, shubham;
	
	harry.id = 1;
	ravi.id = 2;
	shubham.id = 3;
	
	harry.marks = 75;
	ravi.marks = 68;
	shubham.marks = 89;
	
	harry.fav_char = 'H';
	ravi.fav_char = 'R';
	shubham.fav_char = 'S'; 
	
	strcpy(harry.name, "Harry H potter"); //Stored the name ...

	printf("\nHarry's Id : %d", harry.id);
	printf("\nHarry Got marks : %d", harry.marks);
	printf("\nHarry's name is : %s'", harry.name);
	printf("\nHarry's Fav Char is : %c", harry.fav_char);

	return 0;
}
