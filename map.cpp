#include "map.hpp"
#include <stdlib.h>
#include "auxilliary_functions.cpp"
using namespace std;

/*
CREDIT: This map class uses a template provided by CU Boulder's CSCI 1300 2022 Fall Semester Class
*/

Map::Map()
{
    resetMap();
}

void Map::resetMap()
{
    player_position_[0] = 3;
    player_position_[1] = 2;

    for (int i = 0; i < max_locations_; i++)
    {
        location_positions_[i][0] = -1;
        location_positions_[i][1] = -1;
    }
    room_count_ = 0;

    for (int i = 0; i < max_trees_; i++)
    {
        tree_positions_[i][0] = -1;
        tree_positions_[i][1] = -1;
    }
    tree_count_ = 0;

    for (int i = 0; i < num_rows_; i++)
    {
        for (int j = 0; j < num_cols_; j++)
        {
            map_data_[i][j] = UNEXPLORED;
        }
    }
}

int Map::getPlayerRow()
{
    return player_position_[0];
}

int Map::getPlayerCol()
{
    return player_position_[1];
}

void Map::setPlayerPosition(int row, int col)
{
    if (isOnMap(row, col))
    {
        player_position_[0] = row;
        player_position_[1] = col;
    }
}

int Map::getNumRows()
{
    return num_rows_;
}

int Map::getNumCols()
{
    return num_cols_;
}

bool Map::isOnMap(int row, int col)
{
    if (0 <= row && row < num_rows_ && 0 <= col && col < num_cols_)
    {
        return true;
    }
    return false;
}

bool Map::isRoomLocation(int row, int col)
{
    if (!isOnMap(row, col))
    {
        return false;
    }
    for (int i = 0; i < 5; i++)
    {
        if (row == location_positions_[i][0] && col == location_positions_[i][1])
        {
            return true;
        }
    }
    return false;
}

bool Map::isTreeLocation(int row, int col)
{
    if (!isOnMap(row, col))
    {
        return false;
    }
    for (int i = 0; i < max_trees_; i++)
    {
        if (row == tree_positions_[i][0] && col == tree_positions_[i][1])
        {
            return true;
        }
    }
    return false;
}

bool Map::isExplored(int row, int col)
{
    if (!isOnMap(row, col))
    {
        return false;
    }
    if (map_data_[row][col] == EXPLORED)
    {
        return true;
    }
    for (int i = 0; i < 5; i++)
    {
        if (location_positions_[i][0] == row && location_positions_[i][1] == col)
        {
            if (location_positions_[i][2] == true)
            {
                return true;
            }
            break;
        }
    }
    return false;
}

bool Map::isFreeSpace(int row, int col)
{
    if (!isOnMap(row, col))
    {
        return false;
    }
    if (isRoomLocation(row, col))
    {
        return false;
    }
    if (isTreeLocation(row, col))
    {
        return false;
    }

    return true;
}

bool Map::addRoom(int row, int col)
{
    if (room_count_ >= max_locations_)
    {
        return false;
    }
    if (!isFreeSpace(row, col))
    {
        return false;
    }

    location_positions_[room_count_][0] = row;
    location_positions_[room_count_][1] = col;
    location_positions_[room_count_][2] = true; // *** changes visibility ***
    if(row == 1 && col == 1){
        map_data_[row][col] = FARM;
    }
    else if(row == 2 && col == 1){
        map_data_[row][col] = STORE;
    }
    else if(row == 3 && col == 1){
        map_data_[row][col] = BASE;
    }
    else if(row == 1 && col == 4){
        map_data_[row][col] = SCHOOL;
    }
    else if(row == 2 && col == 4){
        map_data_[row][col] = CHURCH;
    }
    else if(row == 3 && col == 4){
        map_data_[row][col] = BANK;
    } 
    room_count_++;
    return true;
}

bool Map::addTree(int row, int col)
{
    if (tree_count_ >= max_trees_)
    {
        return false;
    }
    if (!isFreeSpace(row, col))
    {
        return false;
    }

    tree_positions_[tree_count_][0] = row;
    tree_positions_[tree_count_][1] = col;
    tree_positions_[tree_count_][2] = true; // *** changes visibility ***
    map_data_[row][col] = TREE; 
    tree_count_++;
    return true;
}

void Map::exploreSpace(int row, int col)
{
    for (int i = 0; i < room_count_; i++)
    {
        if (row == location_positions_[i][0] && col == location_positions_[i][1])
        {
            // mark NPC as found
            location_positions_[i][2] = 1;
            return;
        }
    }
    if (isFreeSpace(row, col))
    {
        map_data_[player_position_[0]][player_position_[1]] = EXPLORED;
    }
}

bool Map::move(char direction)
{
    // check input char and move accordingly
    switch (tolower(direction))
    {
    case 'w': // if user inputs w, move up if it is an allowed move
        if (player_position_[0] > 0)
        {
            player_position_[0] -= 1;
        }
        else
        {
            return false;
        }
        break;
    case 's': // if user inputs s, move down if it is an allowed move
        if (player_position_[0] < num_rows_ - 1)
        {
            player_position_[0] += 1;
        }
        else
        {
            return false;
        }
        break;
    case 'a': // if user inputs a, move left if it is an allowed move
        if (player_position_[1] > 0)
        {
            player_position_[1] -= 1;
        }
        else
        {
            return false;
        }
        break;
    case 'd': // if user inputs d, move right if it is an allowed move
        if (player_position_[1] < num_cols_ - 1)
        {
            player_position_[1] += 1;
        }
        else
        {
            return false;
        }
        break;
    default:
        return false;
    }
    // if new location is an NPC location, mark as explored
    if (isRoomLocation(player_position_[0], player_position_[1]))
    {
        exploreSpace(player_position_[0], player_position_[1]);
    }
    return true;
}

void Map::displayMap()
{
    for (int i = 0; i < num_rows_; i++)
    {
        for (int j = 0; j < num_cols_; j++)
        {
            if (player_position_[0] == i && player_position_[1] == j)
            {
                cout << PLAYER;
            }
            else
            {
                cout << map_data_[i][j];
            }
        }
        cout << endl;
    }
}