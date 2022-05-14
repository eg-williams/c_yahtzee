#ifndef YAHTZEE_H
#define YAHTZEE_H

void roll_all_dice();

struct game_state *setup_game(int player_count);

void role_selected_dice(int diceToRoll[], int array_length);
int return_total_score(); // pass the player who's socre you want to see.

void display_score_options();

void select_score_option();

// Checks if the selected move is a valid move
int check_score_option_free(int option);

// TODO: Check what the bonus is in Yahtzee
int check_bonus(); // if lower is > 63, there's a 100 bonus

// all the moves with no special scores.
typedef int lower_board_moves[6]; 

struct upper_board_moves{
    int three_of_a_kind;
    int four_of_a_kind;
    int full_house;
    int small_straight;
    int long_straight;
    int yahtzee;
    int choice;
};

struct player {
    char *player_name;
    lower_board_moves lower_board;
    struct upper_board_moves upper_board;
    int lower_board_total;
    int upper_board_total;
};

struct game_state {
    struct player player_list [4];
};

#endif
