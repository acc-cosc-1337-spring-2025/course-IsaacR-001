#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

TEST_CASE("Verify Test Configuration", "verification") {
    REQUIRE(true == true);
}

TEST_CASE("Test game over when board is full") {
    TicTacToe game;

    game.mark_board(1);
    REQUIRE(game.game_over() == false);
    game.mark_board(2);
    REQUIRE(game.game_over() == false);
    game.mark_board(3);
    REQUIRE(game.game_over() == false);
    game.mark_board(4);
    REQUIRE(game.game_over() == false);
    game.mark_board(5);
    REQUIRE(game.game_over() == false);
    game.mark_board(7);
    REQUIRE(game.game_over() == false);
    game.mark_board(6);
    REQUIRE(game.game_over() == false);
    game.mark_board(9);
    REQUIRE(game.game_over() == false);
    game.mark_board(8);
    
    REQUIRE(game.game_over() == true);
    REQUIRE(game.get_winner() == "C");
}

TEST_CASE("Test win by first column", "[X wins]") {
    TicTacToe game;
    game.start_game("X");
    
    game.mark_board(1);
    game.mark_board(2);
    game.mark_board(4);
    game.mark_board(3);
    game.mark_board(7);
    
    REQUIRE(game.game_over() == true);
    REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test win by second row", "[O wins]") {
    TicTacToe game;
    game.start_game("O");
    
    game.mark_board(4);
    game.mark_board(1);
    game.mark_board(5);
    game.mark_board(2);
    game.mark_board(6);
    
    REQUIRE(game.game_over() == true);
    REQUIRE(game.get_winner() == "O");
}

TEST_CASE("Test TicTacToeManager get_winner_total") {
    TicTacToeManager manager;
    int x, o, t;
    
    // X win scenario
    TicTacToe game1;
    game1.start_game("X");
    game1.mark_board(1); // X
    game1.mark_board(2); // O
    game1.mark_board(4); // X
    game1.mark_board(3); // O
    game1.mark_board(7); // X wins
    manager.save_game(game1);
    
    // O win scenario
    TicTacToe game2;
    game2.start_game("O");
    game2.mark_board(1); // O
    game2.mark_board(2); // X
    game2.mark_board(4); // O
    game2.mark_board(3); // X
    game2.mark_board(7); // O wins
    manager.save_game(game2);
    
    // Tie scenario
    TicTacToe game3;
    game3.start_game("X");
    for(int i=1; i<=9; ++i) {
        game3.mark_board(i);
    }
    manager.save_game(game3);
    
    manager.get_winner_total(o, x, t);
    REQUIRE(x == 1);
    REQUIRE(o == 1);
    REQUIRE(t == 1);
}