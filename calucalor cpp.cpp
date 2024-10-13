#include<iostream>
using namespace std;
float add(float x, float y){
	return x+y;
	
}
float subtract(float x, float y){
	return x-y;
}
float multiply(float x, float y){
	return x*y;
}
float divide(float x,float y){
	if(y==0)
	{
		cout<<"error"<<endl;
		return 0;
	}
	return x/y;
}

int main()
{
	int choice;
	float num1,num2;
	
	cout<<"select operator:"<<endl;
	cout<<"1.Add"<<endl;
	cout<<"2.subtract"<<endl;
	cout<<"3.Multiply"<<endl;
	cout<<"4.Divide"<<endl;
	cin >> choice;
	
	if (choice >= 1 && choice<=4){
		cout <<"enter first number :";
		cin >> num1;
		cout <<"enter second number :";
		cin >>num2;
		
		if (choice ==1)
		cout<<"Result:"<<
		add(num1,num2)<<endl;
		else if (choice ==2)
		cout<<"Result:"<<
		subtract(num1,num2)<<endl;
		else if (choice ==3)
		cout<<"Result:"<<
		multiply(num1,num2)<<endl;
		else if (choice ==4)
		cout<<"Result:"<<
		divide(num1,num2)<<endl;
	}
	else{
		cout<<"invalid input"<<endl;
	}
	return 0;
}
