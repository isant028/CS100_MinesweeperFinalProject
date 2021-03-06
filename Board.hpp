#ifndef BOARD_H
#define BOARD_H
#include "Difficulty.hpp"
#include "Hard.hpp"
#include "Easy.hpp"
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "iterator.hpp"
#include <unordered_map>
class Difficulty;
class Board {
   private:
        char XCoor;
        int YCoor;
        void populate();
	bool isWon();
	Difficulty* diffy;
  public:
	int x,y;
   protected:
        std::vector<std::vector<char>> set;
       std::vector<std::vector<char>> displaySet;
        int Pcount;
   public:
	//std::vector<std::vector<char>> set;
       // std::vector<std::vector<char>> displaySet;
       void clearZero(int i, int j);
    	void clearZero(vector<vector<char>> sz, vector<vector<char>>& ds, int i, int j, unordered_map<int, int>& s);
	void setDiffy(Difficulty*);
        void display();
        Board();
        void getXCoor(char XCoor);
        void getYCoor(int YCoor);
        void run_game();
	void displayPirate();
	int convert();
	bool getMark();
	int getCount();
	void updateBoard(Difficulty* );
	bool check();
        friend class Difficulty;
	friend class Hard;
	friend class Easy;
};
#endif //BOARD_H


