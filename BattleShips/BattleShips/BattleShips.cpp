// BattleShips.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>

using namespace std;

void grid() {
    string Hit = "[ * ]";
    string Miss = "[ : ]";
    string gridRadar[11][11] = {
    {"[   ]","[ A ]","[ B ]","[ C ]","[ D ]","[ E ]","[ F ]","[ G ]","[ H ]","[ I ]","[ J ]"},
    {"[ 0 ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]"},
    {"[ 1 ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]"},
    {"[ 2 ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]"},
    {"[ 3 ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]"},
    {"[ 4 ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]"},
    {"[ 5 ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]"},
    {"[ 6 ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]"},
    {"[ 7 ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]"},
    {"[ 8 ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]"},
    {"[ 9 ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]"}
    };
    cout << "Grid Radar" << endl;
    for (int i = 0; i < 11; i++) {
        for (int j = 0; j < 11; j++) {
            cout << gridRadar[i][j];
        }
        cout << endl;
    }
}
void gridCoordinates() {
    
}

int main()
{
    cout << "Battleships" << endl;
    srand(time(0));
   
    int gridCint[10][11] = {
    {0,0,0,0,0,0,0,0,0,0,0},
    {1,0,0,0,0,0,0,0,0,0,0},
    {2,0,0,0,0,0,0,0,0,0,0},
    {3,0,0,0,0,0,0,0,0,0,0},
    {4,0,0,0,0,0,0,0,0,0,0},
    {5,0,0,0,0,0,0,0,0,0,0},
    {6,0,0,0,0,0,0,0,0,0,0},
    {7,0,0,0,0,0,0,0,0,0,0},
    {8,0,0,0,0,0,0,0,0,0,0},
    {9,0,0,0,0,0,0,0,0,0,0},
    };
    
    grid();
    cout << gridCint[4][2] << endl;

    gridCoordinates();
    cout << endl;
    cout << "What coordinates do you want to shoot?" << endl;
    
    cout << "What vertical do you want to be on 0-9?" << endl;
    int vLine;
    cin >> vLine;
    cout << "What horizontal do you want to shoot at A-J or Back?" << endl;
    int hLine;
    cin >> hLine;


    //Maybe use Vector as the input for the grid.
    //Add if they want to know the rulls.
    //Add who to start. Roll for it.
    int DebugStop;
    cin >> DebugStop;



    /*
    string coordinates;
    cin >> coordinates;
    if (coordinates.find("A")) {
        cout << "A been selected" << endl;
    }

    string gridPossition[11][11] = {
    {"[   ]","[ A ]","[ B ]","[ C ]","[ D ]","[ E ]","[ F ]","[ G ]","[ H ]","[ I ]","[ J ]"},
    {"[ 1 ]","[A 1]","[B 1]","[C 1]","[D 1]","[E 1]","[F 1]","[G 1]","[H 1]","[I 1]","[J 1]"},
    {"[ 2 ]","[A 2]","[B 2]","[C 2]","[D 2]","[E 2]","[F 2]","[G 2]","[H 2]","[I 1]","[J 1]"},
    {"[ 3 ]","[A 3]","[B 3]","[C 3]","[D 3]","[E 3]","[F 3]","[G 3]","[H 3]","[I 1]","[J 1]"},
    {"[ 4 ]","[A 4]","[B 4]","[C 4]","[D 4]","[E 4]","[F 4]","[G 4]","[H 4]","[I 1]","[J 1]"},
    {"[ 5 ]","[A 5]","[B 5]","[C 5]","[D 5]","[E 5]","[F 5]","[G 5]","[H 5]","[I 1]","[J 1]"},
    {"[ 6 ]","[A 6]","[B 6]","[C 6]","[D 6]","[E 6]","[F 6]","[G 6]","[H 6]","[I 1]","[J 1]"},
    {"[ 7 ]","[A 7]","[B 7]","[C 7]","[D 7]","[E 7]","[F 7]","[G 7]","[H 7]","[I 1]","[J 1]"},
    {"[ 8 ]","[A 8]","[B 8]","[C 8]","[D 8]","[E 8]","[F 8]","[G 8]","[H 8]","[I 1]","[J 1]"},
    {"[ 9 ]","[A 8]","[B 8]","[C 8]","[D 8]","[E 8]","[F 8]","[G 8]","[H 8]","[I 1]","[J 1]"},
    {"[ 0 ]","[A 8]","[B 8]","[C 8]","[D 8]","[E 8]","[F 8]","[G 8]","[H 8]","[I 1]","[J 1]"}
    };

    cout << "Grid Possition" << endl;
    for (int i = 0; i < 11; i++) {
        for (int j = 0; j < 11; j++) {
            cout << gridPossition[i][j];
        }
        cout << endl;
    }
    */

    //Sploosh Kaboom
    /*
    
    string HitMessage = "KABOOM!";
    string MissMessage = "SPLOOSH!";
    string SKgridPossition[9][10] = {
   {"[   ]","[ A ]","[ B ]","[ C ]","[ D ]","[ E ]","[ F ]","[ G ]","[ H ]"},
   {"[ 1 ]","[A 1]","[B 1]","[C 1]","[D 1]","[E 1]","[F 1]","[G 1]","[H 1]"},
   {"[ 2 ]","[A 2]","[B 2]","[C 2]","[D 2]","[E 2]","[F 2]","[G 2]","[H 2]"},
   {"[ 3 ]","[A 3]","[B 3]","[C 3]","[D 3]","[E 3]","[F 3]","[G 3]","[H 3]"},
   {"[ 4 ]","[A 4]","[B 4]","[C 4]","[D 4]","[E 4]","[F 4]","[G 4]","[H 4]"},
   {"[ 5 ]","[A 5]","[B 5]","[C 5]","[D 5]","[E 5]","[F 5]","[G 5]","[H 5]"},
   {"[ 6 ]","[A 6]","[B 6]","[C 6]","[D 6]","[E 6]","[F 6]","[G 6]","[H 6]"},
   {"[ 7 ]","[A 7]","[B 7]","[C 7]","[D 7]","[E 7]","[F 7]","[G 7]","[H 7]"},
   {"[ 8 ]","[A 8]","[B 8]","[C 8]","[D 8]","[E 8]","[F 8]","[G 8]","[H 8]"}
    };
    string SKgridRadar[9][10] = {
    {"[   ]","[ A ]","[ B ]","[ C ]","[ D ]","[ E ]","[ F ]","[ G ]","[ H ]"},
    {"[ 1 ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]"},
    {"[ 2 ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]"},
    {"[ 3 ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]"},
    {"[ 4 ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]"},
    {"[ 5 ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]"},
    {"[ 6 ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]"},
    {"[ 7 ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]"},
    {"[ 8 ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]","[   ]"}
    };

    string gridH[8]{ "A", "B", "C", "D", "E", "F", "G", "H"};
    string gridV[8]{ "1", "2", "3", "4", "5", "6", "7", "8"};
    cout << endl;
    cout << "Sploosh Kaboom" << endl;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 10; j++) {
                cout << SKgridRadar[i][j];
        }
        cout << endl;
    }
    */

    //cout << "[" << gridH[0] << "]" << "[" << gridH[1] << "]" << "[" << gridH[2] << "]" << "[" << gridH[3] << "]" << "[" << gridH[4] << "]" << "[" << gridH[5] << "]"<< "[" << gridH[6] << "]" << "[" << gridH[7] << "]" << endl;
    //cout << "[" << gridV[0] << "]" << "[" << gridV[1] << "]" << "[" << gridV[2] << "]" << "[" << gridV[3] << "]" << "[" << gridV[4] << "]" << "[" << gridV[5] << "]"<< "[" << gridV[6] << "]" << "[" << gridV[7] << "]" << endl;
    
    
    /*
    Make an AI file.
    Make a base system file.
        //Might need to make it into a Function File for the Grid
        Need a Grid system:
        -------------------
            One for Player and One for AI.
                string array[10] gridH {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J"}
                string array[10] gridV {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10"}
                string array[10] gridInfo {" ", " ", " ", " ", " ", " ", " ", " ", " ", " "}
            Prototype:
            //Horizontal ID A-J
                cout << "[" << gridH[0] << "]" << "[" << gridH[1] << "]" << "[" << gridH[2] << "]" 
                     << "[" << gridH[3] << "]" << "[" << gridH[4] << "]" << "[" << gridH[5] << "]" 
                     << "[" << gridH[6] << "]" << "[" << gridH[7] << "]" << "[" << gridH[8] << "]" 
                     << "[" << gridH[9] << "]" << endl;
		        
            //Vertical ID 1-10 
                cout << "[" << gridV[0] << "]" << "[" << gridV[1] << "]" << "[" << gridV[2] << "]" 
                     << "[" << gridV[3] << "]" << "[" << gridV[4] << "]" << "[" << gridV[5] << "]" 
                     << "[" << gridV[6] << "]" << "[" << gridV[7] << "]" << "[" << gridV[8] << "]" 
                     << "[" << gridV[9] << "]" << endl;

            //Grid
                //First[i] is the grid line of how many slots.
                //Second[j] is the amount of these grids.
                char grid[10][10]

            //Squid Grid
                //First[i] is the grid line of how many slots.
                //Second[j] is the amount of these grids.
                char grid[8][8]
            //Selection System
                Prototype:
                    Maybe use a switch that first lets you pick from the Hori than the Vert.
                    To declear where to places your shoots and where the ships will be.
        First system
        -------------------
        * Make an AI for RNG placement of the ships
        * Have the player than shoot for the placements of the ships with a set amount of shoots.
        * Inspierd by Windwake battleship minigame.
        * Link: https://www.youtube.com/watch?v=q_rQpf7yF9Y
        * Insperation
        * Link 2: https://www.youtube.com/watch?v=1hs451PfFzQ
        
        Ship amount:
        -------------------
        //Might need to make a Ship Function File
            Make so there is a 50/50 chance if they are turned vertical or horizontal.

        Squids:         Size:
        Large	    |   4
        Medium	    |   3
        Small	    |   2

        Shoots      |   24

        Ship Class:     Size:
        Carrier	    |   5
	    Battleship	|   4
	    Cruiser	    |   3
	    Submarine	|   3
	    Destroyer   |   2


    Make "Kaboom" and "Splush" for hit and Miss (Windwaker for fun).
    
    */
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
