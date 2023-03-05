#ifndef MAP_H
#define MAP_H

#pragma once

#include <iostream>

using namespace std;

class Map
{
private:
    const string UNEXPLORED = "  "; // marker for unexplored spaces
    const string EXPLORED = "  ";   // marker for explored spaces
    const string FLOOR = "  "; // marker for floor spaces
    const string FARM = "🏡";       // marker for locations
    const string SCHOOL = "🏫"; 
    const string CHURCH = "⛪"; 
    const string STORE = "🏪"; 
    const string BASE = "🏠"; 
    const string BANK = "🏦"; 
    const string TREE = "🌲"; 
    const string PLAYER = "😄";      // marker for party position   

    static const int num_rows_ = 5; // number of rows in map
    static const int num_cols_ = 12; // number of columns in map
    static const int max_locations_ = 6; // max number of locations
    static const int max_trees_ = 19; // max number of locations


    int player_position_[2];              // player position (row,col)
    int location_positions_[max_locations_][2];   // stores the (row,col) positions of rooms present on map
    int tree_positions_[max_trees_][2];// stores the (row,col) positions of trees present on map
    string map_data_[num_rows_][num_cols_]; // stores the character that will be shown at a given (row,col)

    int room_count_;
    int tree_count_;

public:
    Map();

    void resetMap();

    // getters
    int getPlayerRow();
    int getPlayerCol();
    int getTableCount();
    int getNPCCount();
    int getNumRows();
    int getNumCols();
    bool isOnMap(int row, int col);
    bool isRoomLocation(int row, int col);
    bool isTreeLocation(int row, int col);
    bool isExplored(int row, int col);
    bool isFreeSpace(int row, int col);

    // setters
    void setPlayerPosition(int row, int col);

    // other
    void displayMap();
    bool move(char);
    bool addRoom(int row, int col);
    bool addTree(int row, int col);
    void exploreSpace(int row, int col);
};

#endif