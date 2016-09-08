# include <stdio.h>
/*
int main(void){
	int i=5;
	int *p;
	int *q;
	p=&i;
	//printf("*p=%d \n",*p);
	//p=q;
	printf("*p=%d \n",*p);//这个会报错，p存的是脏数据。
	printf("p=%d \n",p);
	return 0;
}
*/
void huhuan(int *p,int *q){
	//互换了ab的值
	int t;
	printf("互换前pq存的地址：p=%d,  q=%d \n",p,q);
	t=*p;
	*p=*q;
	*q=t;
	printf("互换后pq存的地址：p=%d,  q=%d \n",p,q);
}
void huhuan2(int *p,int *q){
	//这个只是互换了p和q的内容，即p指向了b,q指向了a。但是ab原来的内容没有变。a和b的地址一旦生成，就不能改变了。
	int *t;
	printf("互换前pq存的地址：p=%d,  q=%d \n",p,q);
	t=p;
	p=q;
	q=t;
	printf("互换后pq存的地址：p=%d,  q=%d \n",p,q);
}
int main(void){
	//目的是想互换a和b的值，通过指针方式互换。huhuan（）这个方法可以实现。
	int a=1;
	int b=2;
	printf("互换前a=%d,  b=%d \n",a,b);
	huhuan(&a,&b);
	printf("互换后a=%d,  b=%d \n",a,b);
}