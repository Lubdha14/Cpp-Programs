//#include<iostream>
//#include<stdlib.h>
//
//using namespace std;
//int main(){
//	int *ptr;
//	int i, n;
//	printf("Enter no of elements");
//	scanf("%d",&n);
//    ptr=(int*) malloc(n*sizeof(int));
//	printf("Elements taken: ");
//	for(i=0;i<n;i++)
//	{
//		scanf("%d",&ptr[i]);
//	}
//	printf("Display elements\n");
//	for(i=0;i<n;i++)
//	{
//		printf("%d",ptr[i]);
//	}
//	free(ptr);
//	printf("\n%d",ptr[i]);	
//}
//Enter elements3
//Elements taken: 2
//4
//5
//Display elements
//245
//0
//#include<iostream>
//#include<stdlib.h>
//
//using namespace std;
//int main(){
//	char *ptr;
//	int n;
//	printf("Enter no of char");
//	scanf("%d",&n);
//	ptr = (char*) malloc(n*(sizeof(char))+1);
//	printf("Accept characters: ");
//	scanf("%s",&ptr[0]);
//	printf("Print Name: %s",&ptr[0]);
//	
//}

//New()
//#include<iostream>
//using namespace std;
//int main()
//{
//	int *a;
//	float *b;
//	char *c;
//	a = new int(1);
//	cout<<*a<<endl;
//	b = new float(22.2);
//	cout<<*b<<endl;
//	c = new char('A');
//	cout<<*c<<endl;
//	delete a;
//	delete b;
//	delete c;
//	cout<<*a<<*b<<*c;
//	
//}
//1
//22.2
//A
//138335041.94096e-038A
//#include<iostream>
//using namespace std;
//int main(){
//	int i;
//	int*ptr= new int[5];
//	for(int i=0;i<5;i++)
//	{
//		cin>>ptr[i];
//	}
//	for(int i=0;i<5;i++)
//	{
//		cout<<ptr[i];
//	}
//	delete[] ptr;
//	
//}
// C++ Program to store GPA of n number of students and display it where n
// is the number of students entered by the user

//#include<iostream>
//using namespace std;
//int main(){
//	int n;
//	cout<<"Enter the number of students";
//	cin>>n;
//	float * ptr;
//	ptr = new float[n];
//	for(int i=0;i<n;i++){
//		cout<< "student"<<i+1<<endl;
//		cin>> *(ptr+i);
//	}
//	for(int i=0;i<n;i++){
//		cout<<"Enter GPA";
//		cin>>*(ptr+i);
//	}
//}
//Enter the number of students3
//student1
//100
//student2
//200
//student3
//300
//Enter GPA8.3
//Enter GPA5.7
//Enter GPA4.76
//
//#include<iostream>
//#include<stdlib.h>
//using namespace std;
//int main()
//{
//	int n,m,i,sum=0;
//	cout<<"accept no of subjects\n";
//	cin>>n;//5
//	cout<<"accept no of character\n";
//	cin>>m;
//	int * p_marks=new int [n];
//	char * p_name=new char[m+1];
//	
//	for(i=1;i<=n;i++){
//		cout<<"Subject name\n";
//		cin>>p_name;
//	}
//	for(i=0;i<n;i++)
//	{
//		cout<<"Subject marks\n";
//		cin>>p_marks[i];
//	}
//	for(i=0;i<n;i++)
//	{
//		sum=sum + p_marks[i];
//	}
//	float avg=(float)sum/n;
//	cout<<"average is  "<<avg<<endl;
//	delete[] p_marks;
//	cout<<p_marks;
//}
//

//#include<iostream>
//#include<stdlib.h>
//using namespace std;
//class A{
//	public:
//		int a;
//	public:
//		A()
//		{
//			a=11;
//			cout<<"Constructor called\n";
//		}
//		void show()
//		{
//			cout<<"values Displayed"<<endl; 
//		}
//};
//
//int main(){
//	A* a = new A;
//	cout<<a->a<<endl;
//	A* b = (A*)malloc(sizeof(A));
//	//here we cannot create object through malloc function so it will print garbage 
//	//no value will be printed and address will be printed
//	cout<<b->a<<endl;
//}
////

