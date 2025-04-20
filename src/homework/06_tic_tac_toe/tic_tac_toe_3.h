#include "tictactoe.h"

class TicTacToe3 : public TicTacToe {
private:
    bool check_column_win() override;
    bool check_row_win() override;
    bool check_diagonal_win() override;
public:
    TicTacToe3() : TicTacToe(3) {}
};