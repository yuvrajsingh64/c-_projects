#include<iostream>
using namespace std;

void printBoard(char board[3][3]){
	for(int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			cout<<board[i][j];
		
			if (j < 2) cout<<" | ";
		} 
		cout<<endl;
		if(i<2)cout<<"------\n";
	}
	}
bool checkWin(char board[3][3],char player){
	for(int i=0;i<3;i++)
	if(board[i][0]==player && board[i][1]== player && board[i][2] == player)
	return true;
	
	for(int i=0;i<3;i++)
	if(board[0][i]==player && board[1][i]== player && board[2][i] == player)
	return true;
	
	if(board[0][0]==player && board[1][1]== player && board[2][2] == player)
	return true;
	if(board[0][2]==player && board[1][1]== player && board[2][0] == player)
	return true;
	
	return false;
	
	
}

bool checkDraw(char board[3][3]){
	for(int i=0;i<3;i++)
	for(int j=0;j<3;j++)
	if(board[i][j] ==' ')
	return false;
	return true;
}
void switchPlayer(char &currentPlayer){
	currentPlayer=(currentPlayer=='X')?'O':'X';
}
void playTicTacToe(){
	char board[3][3]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};

	char currentPlayer='X';
	bool gameOver=false;
	cout<<"Welcome to Tic tac Toe"<<endl;
	while(!gameOver){
		printBoard(board);
		cout<<"player"<<currentPlayer<<"s turn."<<endl;
		int row,col;
		while(true){
			cout<<"enter row(0,1,2):";
			cin>>row;
			cout<<"enter column(0,1,2):";
			cin>>col;
			if(row>=0 && row<3 && col>=0 && col<3 && board[row][col]==' ')
			break;
			else
			cout<<"invalid move. Try again."<<endl;
		}
		board[row][col]=currentPlayer;
		
		if(checkWin(board,currentPlayer)){
			printBoard(board);
			cout<<"Player"<<currentPlayer<<"wins"<<endl;
			gameOver=true;
		}
		else{
			switchPlayer(currentPlayer);
		}
	}
	string playAgain;
	cout<<"Do you want to play again?(yes/no)";
	cin>>playAgain;
	if(playAgain == "yes")
	playTicTacToe();
	else
	cout<<"thanks for playing."<<endl;
}
int main(){
	playTicTacToe();
	return 0;
}



