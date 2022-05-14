#ifndex YAHTZEE_H
#define YAHTZEE_H


void roll_all_dice();
void role_selected_dice(int[] diceToRoll);
int return_total_score(); // pass the player who's socre you want to see.
void select_score_option();
// Checks if the selected move is a valid move
char check_score_option_free(int option);


#endif
