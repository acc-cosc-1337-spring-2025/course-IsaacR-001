#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include<iostream>
#include<string>
#include<memory>

using std::cout; using std::cin; using std::string;

int main()
{
    TicTacToeManager manager;
    std::unique_ptr<TicTacToe> game;
    string first_player;
    char user_choice = 'y';
    int game_choice;
    int x_wins, o_wins, ties;

    do
    {
        cout<<"Choose game (3 for 3x3, 4 for 4x4): ";
        cin>>game_choice;
        
        if(game_choice == 3) {
            game = std::make_unique<TicTacToe3>();
        } else {
            game = std::make_unique<TicTacToe4>();
        }

        cout<<"Enter first player: ";
        cin>>first_player; 

        game->start_game(first_player);

        int position;

        while(!game->game_over())
        {
            cout<<"Enter a position: ";
            cin>>position;
            game->mark_board(position);
            game->display_board();
        }

        manager.save_game(game);
        manager.get_winner_total(x_wins, o_wins, ties);

        cout<<"Play again? (y/n): ";
        cin>>user_choice;
    } while(user_choice == 'y' || user_choice == 'Y');

    cout<<"\nGame over - Statistics:\n";
    cout<<"X wins: "<<x_wins<<"\n";
    cout<<"O wins: "<<o_wins<<"\n";
    cout<<"Ties: "<<ties<<"\n";

    manager.display_games();

    return 0;
}