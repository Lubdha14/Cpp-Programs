//ARRAY
//Q1. Take the input from users and store them in array
//#include <iostream>
//using namespace std;
//int main(){
//	int num[5];
//	cout<<"Enter the numbers : "<<endl;
//	for (int i = 0; i < 5; ++i)
//	{
//		cin >> num[i];
//	}
//	cout<<"Numbers are : "<<endl;
//	for (int n = 0; n < 5; ++n)
//	{
//		cout<<num[n]<<" ";
//	}
//	return 0;
//}
//
//Output
//Enter the numbers :
//3
//334
//55
//6
//2
//Numbers are :
//3 334 55 6 2

//Q2 Same using pointer
//#include<iostream>
//using namespace std;
//int main()
//{
//	int r[4];
//	cout<<"Enter the numbers : "<<endl;
//	for (int i=0;i<4;++i)
//	{
//		cin>>*(r+i);
//		
//	}
//	cout<<"Numbers Are:- "<<endl;
//	for(int n=0;n<4;++n){
//		cout<<*(r+n)<<"  ";
//	}
//}
//Output
//Enter the numbers :
//12
//22
//4
//66
//Numbers Are:-
//12  22  4  66

//Q3 How to find the size of array
//#include<iostream>
//using namespace std;
//int main(){
//	int ary[]= {3,5,6,1,8}; //Defining the array
//	cout<<"Size of element : "<<sizeof(ary[0])<<endl;
//	cout<<"Size of array : "<<sizeof(ary)<<endl;
//	int a = sizeof(ary)/sizeof(ary[0]);
//	cout<<"Length of array : "<<a;
//}
//Output
//Size of element : 4
//Size of array : 20
//Size is : 5


//Q3 program to show that array name is a pointer that points to the first element of array
//#include<iostream>
//using namespace std;
//int main()
//{
//	int array[]= {7,5,33,3,2,22};
//	int *ptr = array;
//	cout<<array[0]<<endl; //print the value at the index 0
//	cout<<&array[0]<<endl; //print the address
//	cout<<*ptr<<endl; //print the value at the index 0
//	cout<<ptr;  //print the address
//}
//Output
//7
//0x6ffe00
//7
//0x6ffe00

//Q4 Program to print array elemens without indexing
//#include<iostream>
//using namespace std;
//int main(){
//	int abc[]={4,6,77,8,33,2};
//	cout<<"1 = "<<abc<<endl; //prints the address
//	cout<<"1 = "<<&abc<<endl; //prints the address
//	cout<<"1 = "<<*abc<<endl; //prints the value
//	cout<<"1 = "<<*(abc+0)<<endl; //prints the value
//	cout<<"2 = "<<*(abc+1)<<endl; //prints the value
////	cout<<"2 = "<<abc<<endl; //address is same for all the ndex values
//	cout<<"3 = "<<*(abc+2)<<endl; //prints the value
//	cout<<"4 = "<<*(abc+3)<<endl; //prints the value
//	cout<<"5 = "<<*(abc+4)<<endl; //prints the value
//}
//
////output
//1 = 0x6ffdf0
//1 = 0x6ffdf0
//1 = 4
//1 = 4
//2 = 6
//3 = 77
//4 = 8
//5 = 33

//Q5 Find out maximum element in array
//#include<iostream>
//using namespace std;
//int main(){
//	int a[] = {22,55,6,88,62};
//	int x=a[0];
//	for (int i=1;i<5;++i){
//		if (x < a[i])
//		
//		   x = a[i];
////		   x++;
//			
//	}
//	cout<<"The maximum value in the array is : "<<x<<endl;
//}
//outout
//The maximum value in the array is : 88

//Q6 Calculate the avg of all the number using pointer
//#include<iostream>
//using namespace std;
//int main(){
//	int a[]={4,5,6,3,2};
////	int * ptr= a;
//	int sum = 0;
//	for(int i=0;i<5;i++)
//	{
//		sum=sum + *(a+i);		
//	}
//	cout<<"sum is : "<<sum<<endl;
//	int avg = sum/5;
//	cout<<"Average is: "<<avg<<endl;
//}
//Output
//sum is : 20
//Average is: 4

//Q7 Copy elements if 1 array into another uisng pointer

//#include<iostream>
//using namespace std;
//int main()
//{
//	int a[]={22,2,1,33,3};
//	int * ptr = a;
//	int b[5];
//	int * pt = b;	
//	for (int i = 0; i < 5; i++) {
//        *(pt + i) = *(ptr + i);  // Copy from a to b
//    }
//    // Print the elements of array b
//    for (int i = 0; i < 5; i++) {
//        cout << *(pt + i) << endl;  //Print the elements of b
//    }	
//}


//Q8 PRINT 2d ARRAY
//#include<iostream>
//using namespace std;
//int main(){
//	int a[3][3];
//	
//	for(int i=0; i<3; i++)
//	{
//		for(int j=0;j<3;j++)
//		{
//			cin>>a[i][j];	
//		}
//	}
//	for(int i=0; i<3; i++)
//	{
//		for(int j=0;j<3;j++)
//		{
//			cout<<a[i][j]<<" ";	
//		}
//		cout<<endl;
//	}
//}
//output
//3
//33
//3
//2
//2
//2
//1
//2
//6
//3 33 3
//2 2 2
//1 2 6

//Q9 Illustrate 2D array using pointer
//#include<iostream>
//using namespace std;
//int main(){
//	int a[3][3];
////	int * ptr = a
//	for(int i=0; i<3; i++)
//	{
//		for(int j=0;j<3;j++)
//		{
//			cin>>*(*(a+i)+j) ; // we can write a[i][j] ====>>> *(*(a+i)+j) 	
//		}
//	}
//	for(int i=0; i<3; i++)
//	{
//		for(int j=0;j<3;j++)
//		{
//			cout<<*(*(a+i)+j)<<" ";	
//		}
//		cout<<endl;
//	}
//}
//output
//7
//8
//9
//5
//5
//6
//1
//2
//8
//7 8 9
//5 5 6
//1 2 8

// Q10 Addition of array
//#include<iostream>
//using namespace std;
//int main(){
//	int i, j;
//	int a[3][3];
//	int b[3][3];
////	int sum = 0;
//	for (i=0; i<3;i++){				//This loop is to take input of first matrix 
//		for (j=0;j<3;j++){
//			cin>>a[i][j];
//		}
//	}
//	for (i=0; i<3;i++){			//to print the output of fist matrix
//		for (j=0;j<3;j++){
//			cout<<a[i][j];
//		}
//	cout<<endl;
//	}
//	for (i=0; i<3;i++){				//This loop is to take input of first matrix 	
//		for (j=0;j<3;j++){
//			cin>>b[i][j];
//		}
//	}for (i=0; i<3;i++){					//to print the output of fist matrix
//		for (j=0;j<3;j++){
//			cout<<b[i][j];	
//		}
//		cout<<endl;
//	}
//	cout<<endl;
//	for (i=0; i<3;i++){				// to calculate the sum and print addition of 2d matrix
//		for (j=0;j<3;j++){	
//			int sum = b[i][j] + a[i][j];
//			cout<<" "<<sum;
//		}
//		cout<<endl;	
//	}
//}
//1
//1
//2
//2
//2
//3
//3
//3
//111
//222
//333
//5
//5
//5
//5
//5
//5
//1
//1
//1
//555
//555
//111
// 6 6 6
// 7 7 7
// 4 4 4

//Q11 Transpose of a matrix
//#include<iostream>
//using namespace std;
//int main(){
//	int i,j,a[3][3];
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<3;j++){
//		cin>>a[i][j];
//		}
//	}
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<3;j++){
//		cout<<a[i][j];
//		}
//		cout<<endl;
//	}
//	cout<<"Transpose of matrix: "<<endl;
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<3;j++){
//		cout<<a[j][i];
//		}
//		cout<<endl;
//	}
//}
//2
//2
//2
//1
//1
//1
//4
//4
//4
//222
//111
//444
//Transpose of matrix:
//214
//214
//214

//Q12 Square of all the elements in 2d array
//#include<iostream>
//using namespace std;
//int main(){
//	int a[4][4];
//	int i,j;
//	for(i=0;i<4;i++){
//		for(j=0;j<4;j++){
//			cin>>a[i][j];
//		}
//	}
//	for(i=0;i<4;i++){
//		for(j=0;j<4;j++){
//			cout<<a[i][j];
//		}
//		cout<<endl;
//	}
//
//	for(i=0;i<4;i++){
//		for(j=0;j<4;j++){
//			int multi = a[i][j]*a[i][j];
//			cout<<multi;
//		}cout<<endl;
//	}
//}
//2
//2
//2
//2
//4
//4
//4
//4
//3
//3
//3
//3
//1
//1
//1
//1
//2222
//4444
//3333
//1111
//
//4444
//16161616
//9999
//1111

//Q13 Default Arguments
//#include<iostream>
//using namespace std;
//void add(int=0 , int=2, int=3, int=4); // function declaration
//int main()
//{
//	add();//0+2+3+4=9     //function calling
//	add(10); //10+2+3+4=29
//	add(10,20); //10+20+3+4=37
//	add(10,20,30);  //10+20+30+4=63
//	add(10,20,30,40);//10+20+30+40=100
//	return 0;
//}
//void add(int a, int b, int c, int d){   Function defination
//	cout<<a+b+c+d<<endl;	
//}
//Output
//9
//19
//37
//64
//100



//Q14 DOUBTTTT>>>>>>>>>>>>>>>>>>>>>>>>>>>????????????
//#include<iostream>
//using namespace std;
//void display(char='*',int=39);
//int main(){
//	int count = 50;
//	cout<<"No arguments passed";
//	display();
//	cout<<"First argument passed";
//	display('#');
//	cout<<"Both arguments passed";
//	display('$',count);
//}
//void display(char c,int count){
//	for(int i=1; i<=count; ++i)
//	{
//		cout<<c;
//	}
//	cout<<endl;
//}
////////?????????????????????????????????????????????
//Q15
//#include<iostream>
//using namespace std;
//void display(char='*',int=39)
//{
//	int count;//added
//	for(int i=1; i<=count; ++i)
//	{
//		cout<<count;/// Error so i changed
//	}
//	cout<<endl;
//}
//int main(){
//	int count = 50;
//	cout<<"No arguments passed";
//	display();
//	cout<<"First argument passed";
//	display('#');
//	cout<<"Both arguments passed";
//	display('$',count);
//}
//
//No arguments passed1
//First argument passed1
//Both arguments passed1

//Q16
//#include<iostream>
//using namespace std;
//void play(int a, bool flag = false)
//{
//	if(flag == true)
//	{
//		cout<<"Flag is true.a= "<<a<<endl;
//	}
//	else
//	{
//		cout<<"Flag is false.a = "<<a<<endl;
//	}	 
//}
//int main()
//{
//	play(200,false);
//	play(880,true);
//}
//Output
//Flag is false.a = 200
//Flag is true.a= 880

//Q17
//#include<iostream>
//using namespace std;
//int add(int a, int b,int c=100, int d =10)
//{
//	return(a+b+c+d);
//}
//int main()
//{
//	cout<<add(2,8,7,3)<<endl;
//	cout<<add(2,8);
//}
//
//20
//120


//Q18
//#include<iostream>
//using namespace std;
//class A{
//	public:
//	int a;
//	void gett(){
//		a = 100;
//		cout<<a;
//		
//	}
//};
//int main(){
//	A a1;
//	a1.gett();
//}

//Q19
//#include<iostream>
//using namespace std;
//int main(){
//	int a[5];
//	int * b[5];
//	for (int i=0;i<5;i++){
//		cin>>a[i];
//	}
//	for (int i=0;i<5;i++){
//		b[i] = &a[i];
//	}
//	for (int i=0;i<5;i++){
//		cout<<*b[i]<<" ";
//	}
//	cout<<endl;
//cout<<"sizeod a "<<sizeof(a)<<endl;
//cout<<"sizeod b "<<sizeof(b)<<endl;
//}
//Output
//
//7
//8
//9
//7
//5
//7 8 9 7 5 
//sizeod a 20 //4*5=20
//sizeod b 40// pointer size is 2 times (double)

//Q20
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a[5];
//	int * b[5];
//	for (int i=0;i<5;i++){
//		cin>>a[i];
//	}
//	for (int i=0;i<5;i++){
//		b[i] = &a[i];
//	}
//	for (int i=0;i<5;i++){
//		cout<<*b[i]<<" ";
//	}
//	*b[4] = 80 ;
//	cout<<*b[4]<<endl;
//	cout<<"Values are "<<endl;
//	for (int i=0;i<5;i++){
//		cout<<*b[i]<<" ";
//	}2
//	int x= a[4]==*b[4];
//	cout<<x;
//}


//Q21
//#include<iostream>
//using namespace std;
//class temp
//{
//	int a;
//	public:
//		void get();
//		temp add(temp & obj1)
//		{
//			temp obj3;
//			obj3.a = a+obj3.a;
//			return obj3;
//		}
//		void show()
//		{
//			cout<<"value is "<<a;
//		}
//};
//void temp::get()
//{
//	cin>>a;
//}
//int main(){
//	temp ob1,ob2;
//	ob1.get();
//	ob2.get();
// 	temp ob3 = ob1.add(ob2);
// 	ob1.show();
//}

//Q22
//#include<iostream>
//using namespace std;
//class Books{
//	int id;
//	string name;
//	string a;
//	public:
//		void take();
//		void display();	
//};
//void Books::take()
//{
// 	cout << "Enter Id : ";
//	cin >> id;
// 	cout << "Enter name : ";
// 	cin >> name;
//    cout << "Enter author : ";
//   	cin >> a;
//	}
//void Books :: display()
//{
//	cout<<" "<<id;	
//	cout<<name<<"  ";
//	cout<<a<<"  "<<endl;
//}
//int main(){
//	Books b1[2];
//	int i;
//	for(i = 0; i < 10; i++)
//	b1[i].take();
// 	cout << "Book Data - " << endl;
// 	for(i = 0; i < 10; i++)
// 	b1[i].display();
//}



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
