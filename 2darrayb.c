#include<stdio.h>
int main()
{
	int i,j;
	int arr[2][3]={{1,2,3},{4,5,6}};
	printf("%d",arr[0][2]);
}	for(i=0;i<2;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("arr[%d][%d]=%d\n",i,j,arr[i][j]);
		}
	}

for(i=0;i<2;i++)
	{
		printf("\n");
		for (j=0;j<3;j++)
		{
			printf("%d\t",arr[i][j]);
		}
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int i,j;
	int arr[2][3]={{1,2,3},{4,5,6}};
	for(i=0;i<2;i++)
	{
		printf("\n");
		for (j=0;j<3;j++)
		{
			printf("%d\t",i,j,arr[i][j]);
		}
	}
	return 0;
}

//=============================================================
//Q9)C++ Program to Reverse a Number
//#include<iostream>
//using namespace std;
//int main()
//{
//	int num,rev=0,rem;
//	cout<<"enter the number"<<endl;
//	cin>>num;
//	int digit = num;
//	
//	if (num < 0) 
//	{
//        cout << "Negative numbers" << endl;
//        return 1;
//	}
//	while(num!=0)
//	{
//		rem = num%10;
//		rev = rev*10+rem;
//		num=num/10;
//	}
//	cout<<rev;
//	return 0;
//}
//=============================================================
//Q10)C++ Program to remove all special characters from a given string.

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char ch[10];
	int i;
	cout<<"Enter a string"<<endl;
	cin>>ch[i];
//	cin.getline(ch,10);
	int n= strlen(ch);
	cin>>ch;
	for(int i = 0;i<n;i++)
	{
	if (!((ch[i] >= 'A' && ch[i] <= 'Z')||(ch[i] >= 'a'&& ch[i] <= 'z')))

	{
		for (int j=i; j<n-1;j++)
		{
		 ch[j]= ch[j+1];		
		}
		ch[n-1]='\0';
		n--;
		i--;
	}

	}
		cout<< ch;
}

