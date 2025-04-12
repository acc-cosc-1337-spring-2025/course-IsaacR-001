#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include<iostream>
#include<string>

using std::cout; using std::cin; using std::string;

int main()
{
    TicTacToeManager manager;
    TicTacToe game;
    string first_player;
    char user_choice = 'y';
    int x_wins, o_wins, ties;

    do
    {
        cout<<"Enter first player: ";
        cin>>first_player; 

        game.start_game(first_player);

        int position;

        while(!game.game_over())
        {
            cout<<"Enter a position: ";
            cin>>position;
            game.mark_board(position);
            game.display_board();
        }

        manager.save_game(game);
        manager.get_winner_total(x_w



