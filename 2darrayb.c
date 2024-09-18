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
==============================================================================================
//#include<iostream>
//using namespace std;
// Q1) Sum of 5 numbers
//int main()
//{
//	int  n,i;
//	int sum = 0;
//	cout<<"Enter 5 numbers";
//	for(i=0;i<5;i++)
//	{
//	
//		cin>>n;
//		sum=sum+n;
//	}
//	cout<<"Sum is - : "<<sum;
//
//}

//Q2] Sum of digits in number
//int main(){
//	int number;
//	int rem,sum;
//	cout<<"Enter the number - "<<endl;
//	cin>>number;
//	while(number!=0)
//	{
//		rem=number%10;
//		sum=sum+rem;
//		number=number/10;
//	}
//	cout<<"THE SUM OF DIGIT IS:-: "<<sum;
//}


//USING CLASS.....................
//class digit{
//	public:
//		calci(int num)
//		{
//			
//			int rem;
//			int sum=0;
//			while(num!=0)
//			{
//				rem = num%10;
//				sum=sum+rem;
//				num = num/10;
//			}
//			return sum;
//		}
//};
//int main()
//{
//	int n, result;
//	cout<<"Enter number";
//	cin>>n;
//	digit d;
//	result = d.calci(n);
//	cout<<"Result"<<result;
//}

//====================================================
//COUNT THE NO OF DIGIT IN THE NUMBER
//int main()
//{
//	int i,count;
//	cout<<"Enter the number";
//	cin>>i;
//	count = 0;
//	while(i!=0)
//	{
//		i=i/10;
//		count++;
//	}
//	cout<<count;
//}

//
////USING CLASS..................
//class sum
//{
//	public:
//	int count = 0;
//	int cal(int n)
//	{
//		while(n!=0){
//			n = n/10;
//			count++;
//		}
//		return count;
//	}
//};
//int main()
//{
//	int num, result;
//	cout<<"Enter the number";
//	cin>>num;
//	sum s1;
//	result = s1.cal(num);
//	cout<<  result;	
//}

//#3 Print the ASCII VALUE OF CHAR
//int main(){
//	char ch;
//	cout<<"Enter the Alphabet : ";
//	cin>>ch;
//	int c = ch;
//	cout<<"ASCII VALUE IS: - "<<c;
//}
// USING CLASS..........................
//class Ascii{
//	public:
//	Asciival(char ch)
//	{
//		int val = ch;
//		cout<<"Ascii value is :- "<<val;
//	}
//};
//int main(){
//	char ch;
//	cout<<"Enterthe character:- ";
//	cin>>ch;
//	Ascii A;
//	A.Asciival(ch);
//}

//Q4 Find the largest number
//int main(){
//	int a,b;
//	cout<<"Enter the numbers :- ";
//	cin>>a>>b;
//	cout<<"a = "<<a<<" b = "<<b;
//	if(a>b){
//		cout<<"A is greater";
//	}
//	else {
//		cout<<"\nb is greater";		
//	}
//}
//USING CLASS.............
//#include<iostream>
//using namespace std;
//
//class Demo {
//protected:
//    int a, b;
//public:
//    // Function to take input
//    void input() {
//        cout << "Enter the two numbers: ";
//        cin >> a >> b;
//    }		
//};
//
//// Derived class that inherits Demo
//class Trial : public Demo {
//public:
//    // Function to compare the values of a and b
//    void valu() {
//        if (a < b) {
//            cout << "B is greater" << endl;
//        } else if (a > b) {
//            cout << "A is greater" << endl;
//        } else {
//            cout << "Both numbers are equal" << endl;
//        }
//    }
//};
//
//int main() {
//    Trial T;  // Create an object of the derived class
//    T.input(); // Call input function from base class
//    T.valu();  // Call valu function from derived class to check which number is greater
//    return 0;	
//}
//===========================================================
//Q Find the largest number
//#include<iostream>
//using namespace std;
//
//int main() {
//    int n;
//    cout << "Enter the number of elements you want to compare: ";
//    cin >> n;
//
//    int a[10];  // Declare an array of size 10
//
//    // Input the numbers to be compared
//    cout << "Enter the numbers to be compared: ";
//    for(int i = 0; i < n; i++) {
//        cin >> a[i];
//    }
//
//    // Initialize max with the first element of the array
//    int max = a[0];
//
//    // Loop through the array to find the maximum number
//    for(int i = 1; i < n; i++) {  // Start from 1 since we already considered a[0]
//        if(max < a[i]) {
//            max = a[i];  // Update max if current element is greater
//        }
//    }
//
//    // Output the maximum value
//    cout << "The greatest number is: " << max << endl;
//
//    return 0;
//}


//#include<iostream>
//using namespace std;
//
//int main() {
//    int n;
//    cout << "Enter the number of elements you want to compare: ";
//    cin >> n;
//    int a[10];
//
//    cout << "Enter the numbers to be compared: ";
//    for(int i = 0; i < n; i++) {
//        cin >> a[i];
//    }
//    int max = a[0];
//    for(int i = 1; i < n; i++) 
//	{  
//        if(max < a[i]) 
//		{
//            max = a[i];  
//        }
//    }
//    cout << "The greatest number is: " << max << endl;
//
//    return 0;
//}
//====================================
//Print the even and odd numbers
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a;
//	cout<<"Enter number you want to give : ";
//	cin>>a;
//	
//		if (a%2==0)
//		cout<<"Even = "<<a<<endl;
//		else
//		cout<<"Odd = "<<a<<endl;
//	
//}


//Q Check if the number is even or odd
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cout<<"Enter the no u want to check : ";
//	cin>>n;
//	int a[10];
//	cout<<"Enter numbers : ";
//	
//	for(int i=0;i<=n;i++)
//	{
//		cin>>a[i];	
//	}
//		for(int i=0;i<=n;i++)
//		{
//			if (a[i]%2==0)
//			cout<<"Even = "<<a[i]<<endl;
//			else
//			cout<<"Odd = "<<a[i]<<endl;
//		}
//	
//}
//====================================================

//ARMSTROM NUMBER
//#include<iostream>
//using namespace std;
//int main()
//{
//	int dig,rem,sum=0;
//	cout<<"Enter the number : ";
//	cin>>dig;
//	int num = dig;
//	while(dig!=0)
//	{
//		rem = dig%10;
//		sum = sum + (rem * rem * rem);
//		dig = dig/10;
//	}
//	if(num == sum)
//		cout<<"The number is armstrom"<<endl;
//	else
//		cout<<"Not a armstrom number"<<endl;
//}

//VOWELS
//#include<iostream>
//using namespace std;
//int main(){
//	char ch[7];
//	cout<<"Enter the character : ";
//	cin>>ch;
//	int i=0;
//	while(ch[i]!='\0')
//	{
//	if (ch[i]=='a'||ch[i]=='o'||ch[i]=='e'||ch[i]=='u'||ch[i]=='i'||ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U')
//	{
//		cout<<"Vowel"<<ch[i]<<endl;
//	}
//	else
//	{
//		cout<<"ALL Consonents "<<ch[i]<<endl;
//	}
//	i++;
//	}
//}

#include<iostream>
//using namespace std;
//struct vow{
//	int vowl(){
//	char ch
//	int i=0;
//	while(ch[i]!='\0')
//	{
//	if (ch[i]=='a'||ch[i]=='o'||ch[i]=='e'||ch[i]=='u'||ch[i]=='i'||ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U')
//	{
//		cout<<"Vowel"<<ch[i]<<endl;
//	}
//	else
//	{
//		cout<<"ALL Consonents "<<ch[i]<<endl;
//	}
//	i++;
//	}
//
//	}
//};
//int main(){
//	vow v;
//	cout<<"Enter the character : ";
//	cin>>ch;
//	cout<<v.vowl();
//}
