#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	srand(time(0));
	int randomnumber=rand()%100+1;
	int guess;
	
	cout<<"I have chosen a number between 1 and 100.Can you guess it?"<<endl;
	do{
		cout<<"enter your guess";
		cin>>guess;
		if(guess>randomnumber){
			cout<<" Too high!Try again."<<endl;
			}else if(guess<randomnumber){
			cout<<" Too low!Try again."<<endl;}
			else{
			cout<<"Congrats!You guessed it."<<endl;
			
		}
	} while(guess!=randomnumber);
	return 0;
}
