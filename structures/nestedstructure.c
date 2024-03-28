#include <stdio.h>
#include <string.h>

int main()
{
	struct date {
		char month[10];
		int day;
		int year;
	};
	struct person {
		struct date birthday;
		char name[32];
	};
	struct person actor;

	
	strcpy(actor.birthday.month,"March");
	actor.birthday.day = 6;
	actor.birthday.year = 1987;
	strcpy(actor.name,"Connie Britton");

	printf("%s was born on %s/%d/%d\n",
			actor.name,
			actor.birthday.month,
			actor.birthday.day,
			actor.birthday.year
		  );

	return(0);
}

