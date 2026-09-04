#include <stdio.h>
#include <stdlib.h>

//Board for the game
char board[8][8] = {
{' ', '|', 'A', '|', 'B', '|', 'C', '|'},
{'-', '+', '-', '+', '-', '+', '-', '+'},
{'1', '|', ' ', '|', ' ', '|', ' ', '|'},
{'-', '+', '-', '+', '-', '+', '-', '+'},
{'2', '|', ' ', '|', ' ', '|', ' ', '|'},
{'-', '+', '-', '+', '-', '+', '-', '+'},
{'3', '|', ' ', '|', ' ', '|', ' ', '|'},
{'-', '-', '-', '-', '-', '-', '-', '-'},
};

//print the boardy
void print_board()
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            printf ("%c", board[i][j]);
        }
        printf ("\n");
    }
};

int game_X();
int game_O();


void start()
{
    char game_start;

    printf("...\n\n");
    printf("Here is game X and O. If you want to play, type 'Y'; if not, type 'N'.\n:");

    scanf(" %c", &game_start);

    if (game_start == 'Y' || game_start == 'y')
    {
        printf("Starting game\n");
        game_X();
    }
    else if (game_start == 'N' || game_start == 'n')
    {
        printf("Exiting\n");
        return (exit(0));
    }
    else
    {

        printf("Invalid input\n");
        return (start());
    } 
};

int main()
{   
    start();
    return (0);
}

int game_X()
{
    print_board();

    printf("Player X starting game.\nType where do you want put cross X from A1 to C3 \n:");
        char move [2];
        scanf ("%s", &move);

    if (move[0] == 'A' || move[0] == 'a' && move[1] == '1')
    {
        board[2][2] = 'X';
        game_O();
    }
    else if (move[0] == 'A' || move[0] == 'a' && move[1] == '2')
    {
        board[4][2] = 'X';
        game_O();
    }
    else if (move[0] == 'A' || move[0] == 'a' && move[1] == '3')
    {
        board[6][2] = 'X';
        game_O();
    }
    else if (move[0] == 'B' || move[0] == 'b' && move[1] == '1')
    {
        board[2][4] = 'X';
        game_O();
    }
    else if (move[0] == 'B' || move[0] == 'b' && move[1] == '2')
    {
        board[4][4] = 'X';
        game_O();
    }
    else if (move[0] == 'B' || move[0] == 'b' && move[1] == '3')
    {
        board[6][4] = 'X';
        game_O();
    }
    else if (move[0] == 'C' || move[0] == 'c' && move[1] == '1')
    {
        board[2][6] = 'X';
        game_O();
    }
    else if (move[0] == 'C' || move[0] == 'c' && move[1] == '2')
    {
        board[4][6] = 'X';
        game_O();
    }
    else if (move[0] == 'C' || move[0] == 'c' && move[1] == '3')
    {
        board[6][6] = 'X';
        game_O();
    }
    else
    {
        printf("Invalid input\n");
        return (game_X());
    }

}
int game_O()
{
    print_board();

    printf("Player O starting game.\nType where do you want put circle O from A1 to C3 \n:");
        char move [2];
        scanf ("%s", &move);

        
    if (move[0] == 'A' || move[0] == 'a' && move[1] == '1')
    {
        board[2][2] = 'O';
        game_X();
    }
    else if (move[0] == 'A' || move[0] == 'a' && move[1] == '2')
    {
        board[4][2] = 'O';
        game_X();
    }
    else if (move[0] == 'A' || move[0] == 'a' && move[1] == '3')
    {
        board[6][2] = 'O';
        game_X();
    }
    else if (move[0] == 'B' || move[0] == 'b' && move[1] == '1')
    {
        board[2][4] = 'O';
        game_X();
    }
    else if (move[0] == 'B' || move[0] == 'b' && move[1] == '2')
    {
        board[4][4] = 'O';
        game_X();
    }
    else if (move[0] == 'B' || move[0] == 'b' && move[1] == '3')
    {
        board[6][4] = 'O';
        game_X();
    }
    else if (move[0] == 'C' || move[0] == 'c' && move[1] == '1')
    {
        board[2][6] = 'O';
        game_X();
    }
    else if (move[0] == 'C' || move[0] == 'c' && move[1] == '2')
    {
        board[4][6] = 'O';
        game_X();
    }
    else if (move[0] == 'C' || move[0] == 'c' && move[1] == '3')
    {
        board[6][6] = 'O';
        game_X();
    }
    else
    {
        printf("Invalid input\n");
        return (game_O());
    }

}
