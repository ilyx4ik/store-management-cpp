#include <iostream>
using namespace std;

int main() {
    int arr[5][4] = {
        {1, 2, 0, 1},
        {1, 1, 0, 1},
        {1, 0, 0, 1},
        {1, 0, 1, 1},
        {1, 0, 3, 1}
    };
    int playerX = 0;
    int playerY = 1;
    char move;
    while (true) {
        system("cls");
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 4; j++) {
                if (arr[i][j] == 0) {
                cout << ". ";
            } else if (arr[i][j] == 1) {
                cout << "# ";
            } else if (arr[i][j] == 2) {
                cout << "P ";
            } else if (arr[i][j] == 3) {
                cout << "E ";
            }
        }
        cout << endl; 
            }

            if (playerX == 4 && playerY == 2) {
                cout << "====================" << endl;
                cout << "You win!";
                cout << "====================" << endl;
                break;
            }

            cout << "Enter move (WASD): ";
            cin >> move;

            if (move == 'q' || move == 'Q') {
                cout << "Exiting game." << endl;
                break;
            }

            switch (move) {
                case 'w': case 'W':
                if (playerX > 0 && arr[playerX - 1][playerY] != 1) {
                    arr[playerX][playerY] = 0;
                    playerX--;
                    arr[playerX][playerY] = 2;
                }
                break;

                case 'a': case 'A':
                if (playerY > 0 && arr[playerX][playerY - 1] != 1) {
                    arr[playerX][playerY] = 0;
                    playerY--;
                    arr[playerX][playerY] = 2;
                }
                break;
                case 's': case 'S':
                if (playerX < 4 && arr[playerX + 1][playerY] != 1) {
                    arr[playerX][playerY] = 0;
                    playerX++;
                    arr[playerX][playerY] = 2;
                }
                break;
                case 'd': case 'D':
                if (playerY < 3 && arr[playerX][playerY + 1] != 1) {
                    arr[playerX][playerY] = 0;
                    playerY++;
                    arr[playerX][playerY] = 2;
                }            
                break;
        }
    }
    return 0;
}