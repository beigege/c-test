#include <stdio.h>
#include <string.h>
	//����ṹ��
	struct Student{
		char name;
		int age;
		int score;

	};
	struct Student2{
		char name[20];
		int age;
		int score;

	};

	void fuzhi(struct Student2 * );//��������

int main(void){

	//��ʼ���ṹ�壬��ʽ1
	struct Student s1={'1',20,80};
	//��ʼ���ṹ�壬��ʽ2
	struct Student s2;
	s2.name='2';
	s2.age=30;
	s2.score=90;

	printf("name=%c,age=%d,score=%d \n",s1.name,s1.age,s1.score);
	printf("name=%c,age=%d,score=%d \n",s2.name,s2.age,s2.score);
	//ʹ�ýṹ��ָ�롣sp��struct Student *���͵�ָ�롣
	struct Student * sp;
	sp=&s1;
	sp->age=22;//�ýṹ��ָ����ʽṹ������
	(*sp).score=88;
	printf("name=%c,age=%d,score=%d \n",s1.name,s1.age,s1.score);
	printf("name=%c,age=%d,score=%d \n",sp->name,sp->age,sp->score);

	struct Student2 s3={"ѧ��2",20,80};//�ַ������� char [10]�����ܵ���дs3.name="ѧ��2"���ᱨ��Ҫ��strcpy(s3.name,"ѧ��2")�����֮���о����ַ���
	printf("name=%s,age=%d,score=%d \n",s3.name,s3.age,s3.score);
	
	//���ú������нṹ�������޸�
	fuzhi(&s3);
	printf("���ú������и�ֵ��name=%s,age=%d,score=%d \n",s3.name,s3.age,s3.score);

	return 0;
}

void fuzhi(struct Student2 * sp2){
	sp2->age=10;
	strcpy(sp2->name,"ָ����ṹ�帳ֵ");
	sp2->score=60;
}