#include <stdio.h>
#include <ctype.h>

int main(){

    char questions[][100] = {"What is the lagert planet in the solar system?\n",
                             "What is hottest planet?\n",
                             "What planet has the most moons?\n",
                             "Is the Earth flat?\n"};

    char options[][100] = {" A. Jupiter\n B. Saturn\n C. Uranus\n D. Neotune\n",
                           " A. Mercury\n B. Venus\n C. Earth\n D. Mars\n",
                           " A. Earth\n B. Mars\n C. Jupiter\n D. Saturn\n",
                           " A. Yes\n B. No\n C. Maybe\n D. Sometimes\n"};

    char answerKey[] = {'A', 'B', 'D','B'};
    char guess = '\0';
    int score = 0;

    int questionsCount = sizeof(questions) / sizeof(questions[0]);

    printf("*** QUIZ GAME ***\n");

    for (int i = 0; i < questionsCount; i++){
        printf("\n%s\n", questions[i]);
        printf("\n%s\n", options[i]);
        printf("Enter your choice: ");
        scanf(" %c", &guess);

        guess = toupper(guess);

        if (guess == answerKey[i]){
            printf("CORRECT!\n");
            score ++;
        } else {
            printf("WRONG!\n");
        }
    }
    printf("\n Your score is %d out of %d points\n", score, questionsCount);

    return 0;
}