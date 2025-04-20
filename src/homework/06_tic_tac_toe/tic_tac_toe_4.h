#include "tictactoe.h"

class TicTacToe4 : public TicTacToe {
private:
    bool check_column_win() override;
    bool check_row_win() override;
    bool check_diagonal_win() override;
public:
    TicTacToe4() : TicTacToe(4) {}
};