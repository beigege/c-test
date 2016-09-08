#include <stdio.h>

int main(void){
	struct Student{
		char name;
		int age;
		int score;

	};

	struct Student s1={'1',20,80};
	struct Student s2;
	s2.name='2';
	s2.age=30;
	s2.score=90;

	printf("name=%c,age=%d,score=%d \n",s1.name,s1.age,s1.score);
	printf("name=%c,age=%d,score=%d \n",s2.name,s2.age,s2.score);
}