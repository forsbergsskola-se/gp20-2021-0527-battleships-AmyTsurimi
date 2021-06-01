// BattleShips.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    //Large Grid
    /*
    string gridH[10] { "A", "B", "C", "D", "E", "F", "G", "H", "I", "J" };
    string gridV[10] { "1", "2", "3", "4", "5", "6", "7", "8", "9", "10" };
    */
    char grid[8][8] = { {'1','2','3','4','5','6','7','8'},
    {'1','2','3','4','5','6','7','8'},
    {'1','2','3','4','5','6','7','8'},
    {'1','2','3','4','5','6','7','8'},
    {'1','2','3','4','5','6','7','8'},
    {'1','2','3','4','5','6','7','8'},
    {'1','2','3','4','5','6','7','8'},
    {'1','2','3','4','5','6','7','8'} };;

    string gridH[8]{ "A", "B", "C", "D", "E", "F", "G", "H"};
    string gridV[8]{ "1", "2", "3", "4", "5", "6", "7", "8"};

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
                cout << grid[i][j];
        }
        cout << endl;
    }
    int DebugStop;
    cin >> DebugStop;

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
