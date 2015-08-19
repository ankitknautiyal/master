#include"board.h"
#include<iostream>
using namespace std;
bool Board::isBoardFull(){
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			if(board[i][j]==0)
				return false;
	return true;
}

int Board::getBoardValue(int i, int j){
	if(i<0 || i>2 || j<0 || j>2){
		cout<<"index_out_of_bound";
		return -1;
	}
	return board[i][j];
}

int Board::setBoardValue(int i, int j, int val){
	if(i<0 || i>2 || j<0 || j>2){
		cout<<"index_out_of_bound";
		return -1;
	}
	if(val != O && val != X){
		cout<<"Invalid value";
		return -1;
	}
	board[i][j] = val;
}
void Board::printBoard(){
	cout<<"\nBoard State:";
	for(int i=0;i<3;i++){
		cout<<"\n";
		for(int j=0;j<3;j++){
			int val=board[i][j];
			switch(val){
				case 0:
					cout<<"_";
					break;
				case X:
					cout<<"X";
					break;
				case O:
					cout<<"O";
					break;
			}
		}
	}
	cout<<"\n";
}
int main()
{
	Board bd;
	if(bd.setBoardValue(0,0,X) == -1)
		return -1;
	bd.printBoard();
	if(bd.setBoardValue(0,1,O) == -1)
		return -1;
	bd.printBoard();
	if(bd.setBoardValue(1,1,X) == -1)
		return -1;
	bd.printBoard();
	if(bd.setBoardValue(1,0,O) == -1)
		return -1;
	bd.printBoard();
	return 0;
}

