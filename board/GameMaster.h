#ifndef GAME_MASTER_H
#define GAME_MASTER_H
class GameMaster{
	Board bd;
	Player player[2];
	int curr_move;
	GameMaster(){
	player[0].id = 1;
	player[1].id = 2;
	curr_move = 1;
	}
	void gameStart();
	bool isGameDraw();
	bool isGameOver();

}
#endif
