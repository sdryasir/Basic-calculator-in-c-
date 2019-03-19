#include<iostream>

using namespace std;
int add(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);
int main()
{
	int choice;
	char op;
	int num1, num2;
	
	do{
		cout<<"1 - Add\n2 - Sub\n3 - Mul\n4 - Div\n";
		cout<<"Enter 1st Number";
		cin>>num1;
		cout<<"Enter 2nd Number";
		cin>>num2;
		cout<<"Enter your choice(1 - 4)";
		cin>>choice;
		if(choice ==1)
		{
			cout<<add(num1, num2);
		}else if(choice ==2)
		{
			cout<<sub(num1, num2);	
		}else if(choice ==3)
		{
			cout<<mul(num1, num2);	
		}else if(choice==4)
		{
			cout<<div(num1, num2);	
		}else{
			cout<<"Invalid choice";
		}
		cout<<"\n\n\nDo you want to perform again?(Y/N)";
		cin>>op;
	}while(op !='n');
}

int add(int num1, int num2)
{
	int add = num1+num2;
	return add;
}
int sub(int num1, int num2)
{
	int sub = num1-num2;
	return sub;	
}
int mul(int num1, int num2)
{
	int mul = num1*num2;
	return mul;
}
int div(int num1, int num2)
{
	int div = num1/num2;
	return div;	
}

