# include <stdio.h>
/*
int main(void){
	int i=5;
	int *p;
	int *q;
	p=&i;
	//printf("*p=%d \n",*p);
	//p=q;
	printf("*p=%d \n",*p);//����ᱨ��p����������ݡ�
	printf("p=%d \n",p);
	return 0;
}
*/
void huhuan(int *p,int *q){
	//������ab��ֵ
	int t;
	printf("����ǰpq��ĵ�ַ��p=%d,  q=%d \n",p,q);
	t=*p;
	*p=*q;
	*q=t;
	printf("������pq��ĵ�ַ��p=%d,  q=%d \n",p,q);
}
void huhuan2(int *p,int *q){
	//���ֻ�ǻ�����p��q�����ݣ���pָ����b,qָ����a������abԭ��������û�б䡣a��b�ĵ�ַһ�����ɣ��Ͳ��ܸı��ˡ�
	int *t;
	printf("����ǰpq��ĵ�ַ��p=%d,  q=%d \n",p,q);
	t=p;
	p=q;
	q=t;
	printf("������pq��ĵ�ַ��p=%d,  q=%d \n",p,q);
}
int main(void){
	//Ŀ�����뻥��a��b��ֵ��ͨ��ָ�뷽ʽ������huhuan���������������ʵ�֡�
	int a=1;
	int b=2;
	printf("����ǰa=%d,  b=%d \n",a,b);
	huhuan(&a,&b);
	printf("������a=%d,  b=%d \n",a,b);
}