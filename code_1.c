#include <stdio.h>
         /*this code takes in a number from the user and using the 
         given template prints the different equivelent scores*/
int main() {
    int score;

    while (1) { // creates an infinite loop until 0 ir 1 is entered
        printf("Enter the NFL score (0 or 1 to STOP): ");
        scanf("%d", &score);
                    
        if (score <= 1) {
            break;
        }
        // prints the calculated score
        printf("Possible combos of scoring plays for score %d:\n", score);
        // for loops to create the template and scores
        for (int td2pt = 0; td2pt <= score / 8; td2pt++) {
            for (int td1pt = 0; td1pt <= score / 7; td1pt++) {
                for (int td = 0; td <= score / 6; td++) {
                    for (int fg = 0; fg <= score / 3; fg++) {
                        for (int safety = 0; safety <= score / 2; safety++) {
                            int total = td2pt * 8 + td1pt * 7 + td * 6 + fg * 3 + safety * 2;
         
        
                            if (total == score) { // if total = score this is printed
                                printf("%d TD + 2pt, %d TD + FG, %d TD, %d FG, %d Safety\n",
                                       td2pt, td1pt, td, fg, safety);
                            }
                        }
                    }
                }
            }
        }
        printf("\n");
    }

    return 0;
}

