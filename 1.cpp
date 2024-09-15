//DAY2- ASSIGNMENT

//Q1Find out maximum element in array without pointer
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a[]={3,7,9,66,92};
//	int temp;
//	for (int i =0; i<5;++i)
//	{
//		temp = a[i];
//		if(a[i+1]>a[i])
//		{
//			temp=a[i+1];
//		}
//		
//	}
//	cout<<"max number is "<<temp;
//};
//========================================================/
//Q2Find out maximum element in array with pointer
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a[]={3,7,9,66,92};
//	int temp;
//	for (int i =0; i<5;++i)
//	{
//		temp = *(a+i);
//		if(*(a+i+1)>*(a+i))
//		{
//			temp=*(a+i+1);
//		}
//		
//	}
//	cout<<"max number is "<<temp;
//};
//max number is 92
//=========================================
//Q3Calculate avg of all element in array using pointer 
//#include<iostream>
//using namespace std;
//int main(){
//	int a[5];
//	int sum=0;
//	float avg;
//	for(int i=0;i<5;++i){
//		cin>>*(a+i);
//		sum = sum + *(a+i);
//	}
//	for(int j=0;j<5;++j){
//		cout<<*(a+j);
//	}
//	avg=(float)sum/5;
//	cout<<"Sum are "<<sum;
//	cout<<"Average"<<avg;
//}
//====================================================
//Q4 Copy elements of one array to another using pointer
//#include <iostream>  
//using namespace std;  
//int main()  
//{ 
//    int p1[5];
//    int *p2[5]; 
//    cout << "Enter five nos :" <<endl;  
//    for(int i=0;i<5;i++)  
//    {  
//        cin >> p1[i];  
//    }  
//    for(int i=0;i<5;i++)  
//    {  
//        p2[i]=&p1[i];   
//    }    
//  cout << "The values are" << endl; 
//    for(int i=0;i<5;i++)  
//    {  
//        cout << *p2[i] << endl;  
//    }
//};
//===============================================================================
//Addition of 2 matrix
//#include <iostream> 
//using namespace std; 
// 
//int main() 
//{ 
// // Declaring 2D array 
// int arr[3][3]; 
// int a[3][3];
// int sum = 0;
// 
// // Initialize 2D array using loop 
// for (int i = 0; i <=2 ; i++) { 
// for (int j = 0; j<=2; j++) { 
// cin>>arr[i][j];
// } 
// 
// } 
// 
// // Printing the element of 2D array 
// for (int i = 0; i <=2 ; i++) { 
// for (int j = 0; j<=2; j++) { 
// cout<<arr[i][j];
// } 
// cout<<"\n";
// } 
// // Initialize 2D array using loop 
// for (int i = 0; i <=2 ; i++) { 
// for (int j = 0; j<=2; j++) { 
// cin>>a[i][j];
// } 
// } 
// 
// // Printing the element of 2D array 
// for (int i = 0; i <=2 ; i++) { 
// for (int j = 0; j<=2; j++) { 
// cout<<a[i][j];
// } 
// cout<<"\n"<<endl;
// } 
// for (int i = 0; i <=2 ; i++) { 
// for (int j = 0; j<=2; j++) 
// { 
// 	sum = a[i][j]+arr[i][j];
// 	cout<<"Sum of the matrix is"<<sum;
// } 
// cout<<"\n";
// } 
// return 0; 
//}
//======================================================
// Square of all the element of array
//#include <iostream> 
//using namespace std; 
//int main() 
//{ 
// int arr[3][3]; 
// int a[3][3];
// int sq;
// for (int i = 0; i <=2 ; i++) { 
// for (int j = 0; j<=2; j++) { 
// cin>>arr[i][j];
// } 
//}
//  for (int i = 0; i <=2 ; i++) { 
// for (int j = 0; j<=2; j++) { 
// cout<<arr[i][j];
// } 
// cout<<"\n";
// } 
//  cout<<"Square- \n";
// for (int i = 0; i <=2 ; i++) { 
// for (int j = 0; j<=2; j++) {  
// sq=arr[i][j]*arr[i][j];
// cout<<sq<<" ";
// } 
// cout<<"\n";
// } 
//}
//==============================================
//Transpose of array

//#include <iostream> 
//using namespace std; 
//int main() 
//{ 
// int arr[3][3]; 
// int a[3][3];
// int sq;
// for (int i = 0; i <=2 ; i++) { 
// for (int j = 0; j<=2; j++) { 
// cin>>arr[i][j];
// } 
//}
//  for (int i = 0; i <=2 ; i++) { 
// for (int j = 0; j<=2; j++) { 
// cout<<arr[i][j];
// } 
// cout<<"\n";
// } 
// cout<<"The Transpose of array is"<<endl;
// for (int i = 0; i <=2 ; i++) { 
// for (int j = 0; j<=2; j++) { 
// cout<<arr[j][i];
// } 
// cout<<"\n";
// } 
//} 
//==========================================================


//#include<iostream>
//using namespace std;
//class book
//{
//	int id;
//	float p;
// 	char n;
// 	char a;
// 	public:
// 	void getdata(){
// 	cout << "Enter Id : ";
// 	cin >> id;
// 	cout << "Enter Name : ";
// 	cin >> n;
// 	cout << "Enter Author : ";
// 	cin >> a;
// 	cout << "Enter prize : ";
// 	cin >> p;
//
//}
// 	void putdata();	
//};
//
//
//void book::putdata()
//{
// cout << id << " ";
// cout << n << " ";
// cout << a << " ";
// cout << p << " ";
// cout << endl;
//}
//int main()
//{
// book emp[2];
// int i;
// for(i = 0; i < 2; i++)
// emp[i].getdata();
// cout << "Books Data - " << endl;
// for(i = 0; i < 2; i++)
// emp[i].putdata();
//}


//========================

//#include<iostream>
//using namespace std;
//class Book
//{
// int id;
// float p;
// string name;
// string a;
// public:
// void getdata();
// void putdata();
//};
//void Book::getdata()
//{
// cout << "Enter Id : ";
// cin >> id;
// cout << "Enter name : ";
// cin >> name;
//  cout << "Enter author: ";
// cin >> a;
// cout << "Enter price : ";
// cin >> p;
// 
//}
//void Book::putdata()
//{
// cout << id << " ";
// cout << p << " ";
// cout << name << " ";
// cout << a
//  << " ";
// cout << endl;
//}
//int main()
//{
// Book emp[10];
// int i;
// for(i = 0; i < 10; i++)
// emp[i].getdata();
// cout << "Book Data - " << endl;
// for(i = 0; i < 10; i++)
// emp[i].putdata();
//}

//============================================
//Q1)WRITE THE PROGRAM TO SWAP THE VARIABLES WITHOUT USING THIRD VARIABLE
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a=33,b=22;
//	a=a+b;
//	b=a-b;
//	a=a-b;
//	cout<<"a= "<<a<<" b= "<<b<<endl;
//}
//===================================================
//Q2)WRITE A CPP PROGRAM TO CHECK WHETHER THE GIVEN NUMBER IS PALINDROM OR NOT.

//========================================================
//Q3)WRITE A CPP PROGRAM TO DISPLAY 1ST 25 PRIME NUMBER.
//#include<iostream>
//using namespace std;
//
//int main() {
//    int n = 0; // Counter for number of primes
//    int i = 2; // Start checking from 2, since 1 is not a prime number
//
//    while (n < 20) { // Loop until we find 20 prime numbers
//        int flag = 0; // Assume i is prime (flag = 0)
//
//        // Check if i is divisible by any number from 2 to i/2
//        for (int j = 2; j <= i / 2; j++) {
//            if (i % j == 0) {
//                flag = 1; // i is not prime
//                break;
//            }
//        }
//
//        if (flag == 0) { // If flag is still 0, i is prime
//            cout << i << " "; // Print the prime number
//            n++; // Increment the prime count
//        }
//
//        i++; // Move to the next number
//    }
//
//    return 0;
//}

//=========================================================
//Q4)WRITE A CPP PROGRAM TO DISPLAY FACTORIAL FROM NUMBER 5 TO 8.
//#include<iostream>
//using namespace std;
//int main(){	
//	for (int i=5; i<=9; i++)	
//	{
//		int fact = 1;
//		for(int j=1;j<=i;j++)
//		{
//			fact = fact * j;
//		}
//	cout<<fact<<endl;	
//	}
//return 0;
//}
//=============================================================
//Q5)WRITE A CPP PROGRAM TO DISPLAY SUMMATION OF EVEN AND ODD NUMBERS IN AN ARRAY OF INTEGERS.

//#include<iostream>
//using namespace std;
//int main()
//{
//	int i;
//	int x=0;
//	int y=0;
//	for (i=0;i<=25;i++)
//	{
//		
//		if (i%2==0)
//		{
//		x=x+i;
//		}
//		
//		else
//		{
//			
//			y=y+i;	
//		}
//			
//	}
//	cout<<"Odd : "<<y<<endl;
//	cout<<"even : "<<x<<endl;
//}
//=============================================================
//Q6)WRITE A CPP PROGRAM TO CHANGE THE CASE OF EACH CHARACTER IN A GIVEN STRING.
//#include<iostream>
//using namespace std;
//int main()
//{
//	char ch[10];
//	cout<<"Enter Your Name"<<endl;
//	cin >> ch;
//	for(int i  =0; ch[i] != '\0'; i++)
//	{
//		if (ch[i] >= 'A' && ch[i] <= 'Z') {
//            ch[i] = ch[i] + 32;
//        }
//        else if (ch[i] >= 'a' && ch[i] <= 'z') {
//            ch[i] = ch[i] - 32;  
//        }		
//	}
//	cout<<ch;
//	return 0;	
//}


//=============================================================
//Q7)Write a template function swap () to swap the variables of int, char and complex types 
//#include<iostream>
//using namespace std;
//template <typename T>
//void swape(T &a,T &b)
//{
//	a = a + b;
//	b = a - b;
//	a = a - b;
//}
//int main()
//{
//	int i = 43;
//	int j = 77;
//	cout<<"Int value swapping"<<endl;
//	swap(j,i);
//	cout<<i<<"\n"<<j<<endl;
//	char u = 'a';
//	char v = 'B';
//	swap(u,v);
//	cout<<"Char value swapping"<<endl;
//	cout<<u<<"\n"<<v<<endl;
//	
//	float x = 43.88;
//	float y = 77.7;
//	swap(x,y);
//	cout<<"Float value swapping"<<endl;
//	cout<<x<<"\n"<<y<<endl;
//	return 0;
//}

//=============================================================
//Q8)C++ Program to Find number of Digits in any number
//#include<iostream>
//using namespace std;
//
//int main() {
//    int a;
//    cout << "Enter a number: ";
//    cin >> a;
////    a = abs(a);
//
//    int count = 0;
//
//    if (a == 0) {
//        count = 1;
//    } else {
//        
//        while (a > 0) {
//            a = a / 10;  
//            count++;     
//        }
//    }
//
//    cout << "Number of digits: " << count << endl;
//
//    return 0;
//}


//=============================================================
//Q9)C++ Program to Reverse a Number

//=============================================================
//Q10)C++ Program to remove all special characters from a given string.















