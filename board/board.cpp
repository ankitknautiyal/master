#include<board.h>
bool Board::isBoardFull(){
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			if(board[i][j]==0)
				return false;
	return true;
}

int Board::getBoardValue(int i, int j){
	return board[i][j];
}

int Board::setBoardValue(int i, int j, int val){
	board[i][j] = val;
}



