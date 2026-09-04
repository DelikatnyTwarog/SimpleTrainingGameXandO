#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

//Clear the console (Windows and Linux)
void clear_screen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}


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
}

int game_X(void);
int game_O(void);
int gameover(void);

//Start the game
void start()
{
    char game_start;
    clear_screen();

    printf("...\n\n");
    printf("Here is game X and O. If you want to play, type 'Y'; if not, type 'N'.\n:");

    scanf(" %c", &game_start);

    if (game_start == 'Y' || game_start == 'y')
    {
        clear_screen();
        printf("Starting game\n");
        game_X();
    }
    else if (game_start == 'N' || game_start == 'n')
    {
        clear_screen();
        printf("Exiting\n");
        return (exit(0));
    }
    else
    {
        clear_screen();
        printf("Invalid input\n");
        return (start());
    } 
};


//Main function

int main()
{   
    start();
    return (0);
}

//Alert message for the game
const char *Alert = "...\n";
int game_counter = 0;

//Player X game function

int game_X()
{

    clear_screen();
    printf(Alert);
    print_board();
    

    printf("Player X starting game.\nType where do you want put cross X from A1 to C3 \n:");
    char move[3];
    scanf(" %2s", move);

    char col_char, row_char;

        
    if (isalpha(move[0]))
    {
        col_char = tolower(move[0]);
        row_char = move[1];
    }
    else
    {
        col_char = tolower(move[1]);
        row_char = move[0];
    }

    if (col_char == 'a' && row_char == '1')
    {
        if (board[2][2] == 'X' || board[2][2] == 'O') 
        {
            Alert = "This spot is already taken\n";
            game_X();
        }
        else
        {
            board[2][2] = 'X';
            Alert = "...\n";
            game_counter++;
            game_O();
            
        }
    }
    else if (col_char == 'a' && row_char == '2') 
    {
        if (board[4][2] == 'X' || board[4][2] == 'O') 
        {
            Alert = "This spot is already taken\n";
            game_X();
        }
        else
        {
            board[4][2] = 'X';
            Alert = "...\n";
            game_counter++;
            game_O();
            
        }
    }
    else if (col_char == 'a' && row_char == '3') 
    {
        if (board[6][2] == 'X' || board[6][2] == 'O') 
        {
            Alert = "This spot is already taken\n";
            game_X();
        }
        else
        {
            board[6][2] = 'X';
            Alert = "...\n";
            game_counter++;
            game_O();
        
        }
    }
    else if (col_char == 'b' && row_char == '1') 
    {
        if (board[2][4] == 'X' || board[2][4] == 'O') 
        {
            Alert = "This spot is already taken\n";
            game_X();
        }
        else
        {
            board[2][4] = 'X';
            Alert = "...\n";
            game_counter++;
            game_O();
            
        }
    }
    else if (col_char == 'b' && row_char == '2') 
    {
        if (board[4][4] == 'X' || board[4][4] == 'O') 
        {
            Alert = "This spot is already taken\n";
            game_X();
        }
        else
        {
            board[4][4] = 'X';
            Alert = "...\n";
            game_counter++;
            game_O();
            
        }
    }
    else if (col_char == 'b' && row_char == '3') 
    { 
        if (board[6][4] == 'X' || board[6][4] == 'O') 
        {
            Alert = "This spot is already taken\n";
            game_X();
        }
        else
        {
            board[6][4] = 'X';
            Alert = "...\n";
            game_counter++;
            game_O();
            
        }
    }
    else if (col_char == 'c' && row_char == '1') 
    {
        if (board[2][6] == 'X' || board[2][6] == 'O') 
        {
            Alert = "This spot is already taken\n";
            game_X();
        }
        else
        {
            board[2][6] = 'X';
            Alert = "...\n";
            game_counter++;
            game_O();
            
        }
    }
    else if (col_char == 'c' && row_char == '2') 
    {
        if (board[4][6] == 'X' || board[4][6] == 'O') 
        {
            Alert = "This spot is already taken\n";
            game_X();
        }
        else
        {
            board[4][6] = 'X';
            Alert = "...\n";
            game_counter++;
            game_O();
            
        }   
    }
    else if (col_char == 'c' && row_char == '3') 
    {
        if (board[6][6] == 'X' || board[6][6] == 'O') 
        {
            Alert = "This spot is already taken\n";
            game_X();
        }
        else
        {
            board[6][6] = 'X';
            Alert = "...\n";
            game_counter++;
            game_O();
            
        }
    }
    else 
    {   
        Alert = "Invalid input\n";
        game_X();
    }
}

//Player O game function

int game_O()
{
    clear_screen();
    printf(Alert);
    print_board();

    printf("Player O starting game.\nType where do you want put circle O from A1 to C3 \n:");
    
    char move[3];
    scanf(" %2s", move);

    char col_char, row_char;

        
    if (isalpha(move[0]))
    {
        col_char = tolower(move[0]);
        row_char = move[1];
    }
    else
    {
        col_char = tolower(move[1]);
        row_char = move[0];
    }

    if (col_char == 'a' && row_char == '1')
    {
        if (board[2][2] == 'X' || board[2][2] == 'O') 
        {
            Alert = "This spot is already taken\n";
            game_O();
        }
        else
        {
            board[2][2] = 'O';
            Alert = "...\n";
            game_counter++;
            game_X();
        }
    }
    else if (col_char == 'a' && row_char == '2') 
    {
        if (board[4][2] == 'X' || board[4][2] == 'O') 
        {
            Alert = "This spot is already taken\n";
            game_O();
        }
        else
        {
            board[4][2] = 'O';
            Alert = "...\n";
            game_counter++;
            game_X();
        }
    }
    else if (col_char == 'a' && row_char == '3') 
    {
        if (board[6][2] == 'X' || board[6][2] == 'O') 
        {
            Alert = "This spot is already taken\n";
            game_O();
        }
        else
        {
            board[6][2] = 'O';
            Alert = "...\n";
            game_counter++;
            game_X();
        }
    }
    else if (col_char == 'b' && row_char == '1') 
    {
        if (board[2][4] == 'X' || board[2][4] == 'O') 
        {
            Alert = "This spot is already taken\n";
            game_O();
        }
        else
        {
            board[2][4] = 'O';
            Alert = "...\n";
            game_counter++;
            game_X();
        }
    }
    else if (col_char == 'b' && row_char == '2') 
    {
        if (board[4][4] == 'X' || board[4][4] == 'O') 
        {
            Alert = "This spot is already taken\n";
            game_O();
        }
        else
        {
            board[4][4] = 'O';
            Alert = "...\n";
            game_counter++;
            game_X();
        }
    }
    else if (col_char == 'b' && row_char == '3') 
    { 
        if (board[6][4] == 'X' || board[6][4] == 'O') 
        {
            Alert = "This spot is already taken\n";
            game_O();
        }
        else
        {
            board[6][4] = 'O';
            Alert = "...\n";
            game_counter++;
            game_X();
        }
    }
    else if (col_char == 'c' && row_char == '1') 
    {
        if (board[2][6] == 'X' || board[2][6] == 'O') 
        {
            Alert = "This spot is already taken\n";
            game_O();
        }
        else
        {
            board[2][6] = 'O';
            Alert = "...\n";
            game_counter++;
            game_X();
        }
    }
    else if (col_char == 'c' && row_char == '2') 
    {
        if (board[4][6] == 'X' || board[4][6] == 'O') 
        {
            Alert = "This spot is already taken\n";
            game_O();
        }
        else
        {
            board[4][6] = 'O';
            Alert = "...\n";
            game_counter++;
            game_X();
        }   
    }
    else if (col_char == 'c' && row_char == '3') 
    {
        if (board[6][6] == 'X' || board[6][6] == 'O') 
        {
            Alert = "This spot is already taken\n";
            game_O();
        }
        else
        {
            board[6][6] = 'O';
            Alert = "...\n";
            game_counter++;
            game_X();
        }
    }
    else 
    {   
        Alert = "Invalid input\n";
        game_O();
    }
}

int gameover()
{
    clear_screen();
    printf(Alert);
    print_board();
    if (game_counter == 9)
    {
        printf("Game over\n");
        (exit(0));
    }
    return 0;
}


