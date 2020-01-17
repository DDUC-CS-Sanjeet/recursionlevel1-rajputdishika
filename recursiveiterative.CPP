#include<iostream>
using namespace std;
int GCD_recur(int a, int b)
{
	if(a<0||b<0)
	    throw "Invalid Number!!!";
	if(b==0)
	    return a;
	else
	    return GCD_recur(b, a%b);
}
int GCD_iterat(int a, int b)
{
	if(a<0||b<0)
	    throw "Invalid Number!!!";
	for(int temp=0; b!=0; )
	{
		temp=a;
		a=b; 
		b=temp%b;
	}
	return a;
}
int FACT_recur(int num)
{
	if(num<0)
	    throw "Invalid Number!!!";
	if(num==0)
	    return 1;
	else 
	    return num*FACT_recur(num-1);
}
int FACT_iterat(int num)
{
	if(num<0)
	    throw "Invalid Number!!!";
	int fact=1;
	for( ; num>0; num--)
	    fact*=num;
	return fact;
}
int POWER_recur(int b, int e)
{
	if(b==0)
	    throw "Invalid Base!!!";
	if(e!=0)
	    return b*POWER_recur(b, e-1);
	else 
	    return 1;
}
int POWER_iterat(int b, int e)
{
	if(b==0)
	    throw "Invalid Base!!!";
	int power=1;
	for( ; e!=0; e--)
	    power*=b;
	return power;
}
int FIBO_iterat(int t)
{
	int a=0, b=1, c=0;
	if(t<0)
	    throw "Invalid Term!!!";
	if(t==0)
	    return 0;
	else if(t==1||t==2)
	    return t-1;
	else
    {
    	 for(int i=3; i<=t; i++)
        {
        	c=a+b;
        	a=b;
        	b=c;
		}
		return c;
	}   
}
int FIBO_recur(int t)
{
	if(t<0)
	    throw "Invalid Term!!!";
	else if(t==0)
	    return 0;
	else if(t==1||t==2)
	    return t-1;
	else
	    return FIBO_recur(t-1)+FIBO_recur(t-2);
}
int main()
{
	int num1, num2, num3, choice, base, exponent, term;
	char choice2;
	do
	{
			cout<<"****** MENU DRIVEN******"<<endl;
        	cout<<"1. GCD"<<endl;
        	cout<<"2. Factorial"<<endl;
        	cout<<"3. Power"<<endl;
        	cout<<"4. Fibonacci Series"<<endl;
        	cout<<"Choose your option: ";
        	cin>>choice;
        	
        	switch(choice)
        	{
        		case 1: try
                        {
                        cout<<"Enter two numbers to find their GCD: "<<endl;
        		        cin>>num1>>num2;
        		        cout<<"GCD through recursive function: "<<GCD_recur(num1, num2)<<endl;
        		        cout<<"GCD through iterative function: "<<GCD_iterat(num1, num2)<<endl;
						}
						catch(const char* str)
						{
							cout<<str<<endl;
						}
        		        break;
        		case 2: try
        		        {
        		        cout<<"Enter the number to find its factorial: "<<endl;
        		        cin>>num3;
        		        cout<<"Factorial through recursive function: "<<FACT_recur(num3)<<endl;
        		        cout<<"Factorial through iterative function: "<<FACT_iterat(num3)<<endl;
						}
						catch(const char* str)
						{
							cout<<str<<endl;
						}
        		        break;
        		case 3: try
        		        {
        		        cout<<"Enter the base and exponent to find the value: "<<endl;
        		        cin>>base>>exponent;
        		        cout<<"Value through recursive function: "<<POWER_recur(base, exponent)<<endl;
        		        cout<<"Value through iterative function: "<<POWER_iterat(base, exponent)<<endl;
						}
						catch(const char* str)
						{
							cout<<str<<endl;
						}
        		        break;
        		case 4: try
        		        {
        		        cout<<"Enter the term to find the Fibonacci Number: "<<endl;
        		        cin>>term;
        		        cout<<"Series through recursive function: "<<FIBO_recur(term)<<endl;
        		        cout<<"Series through iterative function: "<<FIBO_iterat(term)<<endl;
						}
						catch(const char* str)
						{
							cout<<str<<endl;
						}
        		        break;
        		default: cout<<"Wrong choice of option!!!";
        	}
        	cout<<"Do you want to continue more (Y/N): ";
        	cin>>choice2;
        	
	}while(choice2=='Y'||choice2=='y');
	return 0;
}
