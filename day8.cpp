//#include<iostream>
//using namespace std;
//class theory;
//class chapter{
//	public:
//		chapter(){
//			num = 76;
//		}
//	
//	private:
//		int num;
//	friend int study(theory,chapter);
//		
//};
//class theory
//{
//	public:
//		theory(){
//			n = 100;
//		}
//	private:
//		int n;
//	friend int study(theory t,chapter c);
//};
//int study(theory t,chapter c){
//	return (t.n * c.num);
//}
//int main(){
//	theory t;
//	chapter c;
//	cout<<study(t,c);
//	
//}
////output
//7600


//+++++++++++++++++++============++++++++++++++++++++++++++++++++++++++++++++==================

//not run doubt
//SWAPPING OF 2 NUMBERS USING FRIEND FUNCTION
//#include<iostream>
//using namespace std;
//class swap{
//	int a, b, temp;
//	public:
//	swap(int a, int b) //created a constructor for inputs
//	{
//		this->a=a;
//		this->b=b;
//	}
//	friend void swap1(swap &);//declare friend function, take args, call reference
//};
//void swap1(swap & s1){
//	cout<<"Before Swapping : "<<s.a<<s.b<<endl;
//	s.temp = s.a;
//	s.a = s.b;
//	s.b = s.temp;
//	cout<<"After swapping"<<s.a<<s.b<<endl;
//}
//int main(){
//	swap s1(5,6);
//	swap1(s);
////	cout<<swapper(s1);
//}
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

//DAY 9

//#include<iostream>
//using namespace std;
//class item
//{
//public:
//static int x;
//int number;
//public:
//void getdata(int a)
//{
//number=a;
//number++;
//x++;
//}
//void getcount()
//{
//x=10;
//cout<<"value is "<<x<<endl;
//}
//void getcount_1()
//{
//x++;
//cout<<"value is "<<number<<endl;
//cout<<"value is "<<x<<endl;
//}
//};
//int number=9;
//int item::x;
//int main()
//{
//item a;
//a.getcount();
//a.getdata(100);
//a.getcount_1();
//cout<<number<<endl;
//cout<<a.number;
//}
//Output
//value is 10
//value is 101
//value is 12
//9
//101

//======================================================================
//#include <iostream> 
//using namespace std; 
//int main() 
//{ 
// char *names[5] = {"rohan","am","rahul","rohit","rachana"}; 
//
// 	for(int j=0;j<=27;j++){
// 		cout<<*(*(names+0)+j)<<endl;
//
//	 }
//
//}

 //cout << names[i] << endl; //*(names+i)
// cout << &names[i] << endl; //(names+i)
// cout<<*(*(names+i)+0)<<endl;
//==============================================================================

//Math Library Functions
//sqrt
//#include<iostream>
//using namespace std;
//#include<math.h>
//int main(){
//	double ans;
//	int val;
//	int base = 4,exp = 2, power;
//	ans = sqrt(9);
//	val = abs(9.1);
//	cout<<"Square = "<<"is : "<<ans<<endl;
//	cout<<"Absolute value = "<<"is : "<<val<<endl;
//	power = pow(base,exp);
//	cout<<"Power = "<<"is : "<<power<<endl;
//	cout<<"Ceil = "<<"is : "<<ceil(-8.1)<<endl;
//	cout<<"floor = "<<"is :"<<floor(-8.5)<<endl;
//	cout<<"Round = "<<"is :"<<round(-8.5)<<endl;
//	cout<<"Ceil = "<<"is : "<<ceil(8.1)<<endl;
//	cout<<"floor = "<<"is :"<<floor(8.5)<<endl;
//	cout<<"Round = "<<"is :"<<round(8.5)<<endl;
//	return 0;
//}
//Square = is : 3
//Absolute value = is : 9
//Power = is : 16
//Ceil = is : -8
//floor = is :-9
//Round = is :-9
//Ceil = is : 9
//floor = is :8
//Round = is :9

//======================================================

//#include <iostream> 
//#include<math.h> 
//using namespace std; 
//int main() 
//{ 
//float x=7.8;
//cout << "Initial value of x is : " << x<<endl; 
//cout<<"Now, the value of x is :"<<floor(x); 
//return 0; 
//} 
//O/P
//Initial value of x is : 7.8
//Now, the value of x is :7

//Example 2
//Let's see a simple example by considering a negative value.
//#include <iostream> 
//#include<math.h> 
//using namespace std; 
//int main() 
//{ 
//float x=-10.2; 
//std::cout << "Initial value of x is : " << x<<std::endl; 
//cout<<"Now, the value of x is :"<<ceil(x)<<endl; 
//cout<<"Now, the value of x is :"<<floor(x);
//return 0; 
//} 












//==================================[  DAY 10  ]======================================  
//                                     STRING



#include <iostream> 
#include<string.h>
using namespace std; 

//===============================STRLEN====================================================
//int main()
//{
// 	char ch[100]="Lubdha";
// 	int x = strlen(ch);
// 	cout<<x<<endl;
//	cout<<sizeof(ch);
//}
//===============================STRCPY====================================================
//int main(){
//	char aa[100]="Lubdha";
//	char bb[100];
//	strcpy(bb,aa);
//	cout<<aa<<endl;
//	cout<<bb<<endl;
//}
//=================================STRCMP==============================================
//int main()
//{
//	char st[10]="lubdha";
//	char st1[10]="lubdha";
//	if (strcmp(st1,st)==0){
//		cout<<"Equal";
//	}	
//	else
//	cout<<"Not Equal";	
//}
//====================================STRREV=================================================
//int main()
//{
//	char st[12]="Lubdha";
//	strrev(st);
//	cout<<st;
//}
//=====================================STRCAT===============================================
//int main(){
//	char ch[12]="Lubdha";
//	char nh[12]="Borole";
//	strcat(nh,ch);
//	cout<<nh;
//}
//=======================================STRLEN==============================================
//int length(char*);//Function to calculate the length
//int main()
//{
//	char ch[10];
//	cout<<"Enter the string"<<endl;
//	cin>>ch;
//	int len = length(ch);//calling the length function to find the length of string
//	cout<<len;
//}
//int length(char* ch1)//the function take the string as pointer
//{
//	int len = 0;
//	
//	while(*ch1!='\0')
//	{ 
//		ch1++;
//		len++;
//	}
//	return len;
//}
//===================================STRCPY============================================
//
//#include <iostream> 
//#include<string.h>
//using namespace std;
//void display(char*,char*);
//int main()
//{
//	char so[11];
//	char dd[11];
//	cout<<"Enter the string ";
//	cin>>so;
//	display(dd,so);
//	cout<<"value is  :  "<<dd;
//}
//void display(char * dd, char * so)
//{
//	while(*so!='\0')
//	{
//		*dd = *so;
//		dd++;
//		so++;	
//	}
//	*dd = '\0';
//}

//====================================STRREV=======================================

//void rev(char*,char*)
//int main(){
//	char aa[10];
//	int i=0;
//	char bb[10];
//	cout<<"Enter the string to be reverse";
//	cin>>aa;
//	int len = strlen(aa)-1;
//
//		
//	   while (len >= 0) {
//        bb[i] = aa[len];  // Copy characters from aa to bb in reverse order
//        i++;
//        len--;
//
//bb[len] = '\0';
//cout<<bb;
//}


#include <iostream>
#include <cstring>  // For strlen function
using namespace std;

int main() {
    char aa[10];
    int i = 0;
    char bb[10];  // Array to store reversed string

    cout << "Enter the string to be reversed: ";
    cin >> aa;  // Input string

    int len = strlen(aa) - 1;  // Get the length of the string minus one (for index)

    while (len >= 0) {
        bb[i] = aa[len];  // Copy characters from aa to bb in reverse order
        i++;
        len--;
    }

    bb[i] = '\0';  // Null terminate the reversed string

    cout << "Reversed string: " << bb << endl;  // Output the reversed string

    return 0;
}

