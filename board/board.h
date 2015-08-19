#ifndef BOARD_H
#define BOARD_H
#define X 1
#define O 2
class Board{
	private : 
	int board[3][3];
	public:
	Board(){
		for(int i=0;i<3;i++)
			for(int j=0;j<3;j++)
				board[i][j]=0;
	}
	
	int setBoardValue(int i, int j , int val);
	int getBoardValue(int i, int j);
	bool isBoardFull();
};
#endif


