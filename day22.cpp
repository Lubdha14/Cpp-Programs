//GPA of n no of stud
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	int n;
	cout<<"enter the number od student";
	cin>>n;
	float * p;
	p = new float(n);
	cout<<"Enter GPA of student \n";
	for(int i=0;i<n;i++){
		cout<<"student "<<i+1<<": "<<*(p+i);
		cin>>*(p+i);	
	}
	for(int i=0;i<n;i++){
		cout<<"CGPA ";
		cout<<": "<<*(p+i);	
	}
	delete[] p ;
}

