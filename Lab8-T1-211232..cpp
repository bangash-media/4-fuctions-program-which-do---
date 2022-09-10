#include <iostream>
/*a program that uses four different fuctions for four addition
different operation e.g subtraction,multiplication and division*/
using namespace std;

void add(int n1,int n2); //fuction prototyping
void multi(int no1,int no2); //fuction prototyping
double subtrct(int num1,int num2); //fuction prototyping
void division(); //fuction prototyping

int main() 
{
	int n1,n2;
	cout<<"Enter fisrt number: "; cin>>n1;
	cout<<"Enter Second number: "; cin>>n2;
	add(n1,n2); //addition function call
	
	int no1,no2;
	cout<<"Enter fisrt number: "; cin>>n1;
	cout<<"Enter Second number: "; cin>>n2;
	multi(n1,n2); //multiplication function call
	
	int num1,num2;
	cout<<"Enter fisrt number: "; cin>>n1;
	cout<<"Enter Second number: "; cin>>n2;
	cout<<subtrct(n1,n2); //subtraction function call
	cout<<endl<<endl; 
	
	division (); //division function call
	
	return 0;
}
void add(int n1,int n2) //function defination for addition
{
	
	cout<<"\nSum Result= "<<n1<<" + "<<n2<<" = "<<n1+n2<<endl<<endl;
}
void multi(int no1,int no2) //function defination for multiplication
{
	
	cout<<"\nMultiplication  Result= "<<no1<<" * "<<no2<<" = "<<no1*no2<<endl<<endl;
	
}
double subtrct(int num1,int num2) //function defination for subtraction
{
	int result;
	cout<<"\nSubtraction Result= "<<num1<<" - "<<num2<<" = ";
	result=num1-num2;
	return result;
}
void division() //function defination for division
{
	double num1,num2;  //input prameters for division function
	cout<<"Enter fisrt number: "; cin>>num1;
	cout<<"Enter Second number: "; cin>>num2;
	cout<<"\nDivision Result= "<<num1<<" / "<<num2<<" = "<<num1/num2<<endl<<endl;
}











