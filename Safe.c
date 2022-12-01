#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

void printSpaces(int amountOfSpaces);
void inputQuestion();

int A1[4] = { 0,0,0,0 };
size_t size = sizeof A1 / sizeof(int);
int A = 0;
int B = 0;
int C = 0;
int L;
int J;
int M;

struct xorshift32_state* global_state = NULL;

struct xorshift32_state {
    uint32_t h;
};

uint32_t xorshift32(struct xorshift32_state* state) {
    uint32_t x = state->h;
    x ^= x << 13;
    x ^= x >> 17;
    x ^= x << 5;
    return state->h = x;
}

float rnd(float upper) {
    if (global_state == NULL) {
        int size = sizeof(struct xorshift32_state);
        struct xorshift32_state* pointer = malloc(size);
        global_state = pointer;
    }
    global_state->h = xorshift32(global_state);
    return (global_state->h / (float)UINT32_MAX) * upper;
}

char* input() {
    char* Answer = malloc(10);
    scanf("%s", Answer);
    return Answer;
}
void inputQuestionN() {
    printf("OKAY, START TO THE RIGHT,  SHHHHHH!!!!!!!!!!!!!!\n");
    inputQuestion();
}
void inputQuestion() {
    char* AnswerQuestion = malloc(10);
    printf("ARE YOU READY ");
    scanf("%s", AnswerQuestion);
    while (1) {
        if (strcmp(AnswerQuestion, "YES") == 0)
        {
            printf("\nOKAY, THEN LET'S START ");
            L = 100 - A;
          
            for (int P = 0; P < size; P++)
            {
                A1[P] = 5 - P * L / 5 + A;             
            }
            break;
        }
        else
        {
            exit(EXIT_SUCCESS);
        }
    }
    J = 1;
    goto_500_570_420();
}

void SensorQuestion() {
    printf("THE SENSOR HAS BEEN TRI6GERED\n");
    printf("LEAVE WHILE YOU CAN BEFORE THE\n");
    printf("POLICE GET HERE.\n");
    printf("WANT TO TRY THE SAME SAFE ");
    ranC();
    char* SensorQuestion = malloc(10);
    scanf("%s", SensorQuestion);
    while (1) {
        if (strcmp(SensorQuestion, "YES") == 0)
        {
            inputQuestion();
            break;
        }
        else
        {
            exit(EXIT_SUCCESS);
        }
    }
}

void goto_570() {
    printf("** CLICK **\n");
    L = L + B;
    for (int K = 0; K < size; K++) {
        A1[K] = K * L / 5 + B;
    }
    printf("AND NOW TO THE LEFT\n");
    J = 1;
    goto_660_500_680();
}

void goto_420() {
    for (int K = 0; K < size; K++) {
        if (M > A1[K]) {
            printf("CLICK\n");
        }
    }
    if (J >= 10) {
        SensorQuestion();
    }
    else
    {
        J = J + 1;
        goto_500_570_420();
    }
}

void goto_670() {
    M = M + 100;
    goto_680();
}

int goto_680() {
    for (int K = 0; K < size; K++) {
        if (M < A1[K]) {
            printf("CLICK\n");
            A1[K] = 200;
        }
    }
    if (J >= 10) {
        SensorQuestion();
    }
    else
    {
        J = J + 1;
        goto_660_500_680();
    }
}

void goto_760() {
    printf("** CLICK **\n");
    L = (100 - C) + B;
    for (int K = 0; K < size; K++) {
        A1[K] = B + 100 - K * L / 5;
    }
    printf("AND NOW TO THE RIGHT AGAIN\n");
    J = 1;
    goto_860_500_850();
}

int goto_870() {

    for (int K = 0; K < size; K++) {
        if (M > A1[K]) {
            printf("CLICK\n");
            A1[K] = -200;
        }
    }
    if (J >= 10) {
        SensorQuestion();
    }
    else
    {
        J = J + 1;
        goto_860_500_850();
    }
}

void goto_950() {
    printf("** CLICK **...YOU OPENED IT\n");
    printf("BUT OH,OH, HE MUST HAVE MOVED IT\n");
    printf("TRY THE ONE OVER THERE\n");
    inputQuestionN();
}

int goto_500_570_420()
{  
    scanf("%d", &M);
    if (((M - A) + 2) < 0)
    {
        SensorQuestion();
    }
    else if (((M - A) + 2) == 0)
    {
        goto_570();
    }
    else if (((M - A) + 2) > 0)
    {
        goto_420();
    }
}

int goto_660_500_680() {
    scanf("%d", &M);

        if (((M - B) + 2) <= -1)
        {
            goto_670();
        }
        else if (((M - B) + 2) == 0)
        {
            goto_760();
        }
        else if (((M - B) + 2) >= 1)
        {
            SensorQuestion();
        }
    

}

int goto_860_500_850()
{
    scanf("%d", &M);
        if (((M - C) + 2) <= -1)
        {
            SensorQuestion();
        }
        else if (((M - C) + 2) == 0)
        {
            goto_950();
        }
        else if (((M - C) + 2) >= 1)
        {
            goto_870();
        }
}

void ranC() {
   C = rnd(99);
}

int main() {

    printSpaces(28);
    printf("SAFE\n");
    printSpaces(20);
    printf("CREATIVE CONFUTING\n");
    printSpaces(18);
    printf("MORRISTOWN, NEW JERSEY\n\n\n");
    printf("DO YOU WANT DIRECTIONS ");

    while (1) {
        char* h = input();
        if (strcmp(h, "YES") == 0) {
            printf("\n\nYOU ARE A BURGULAR AND HAVE ENCOUNTERED A SAFE.  YOU  MUST\n");
            printf("OPEN THE SAFE TO GET THE SECRET PLANS THAT YOU CAME FOR.\n");
            printf("TO DO THIS , YOU MUST ENTER THE NUMBER OF WHAT YOU WANT THE\n");
            printf(" DIAL TURNED TO, THE COMPUTER WILL ACT AS THE SAFE AND WILL\n");
            printf("HELP YOU BY GIVING A SORT OF CLUE, THAT IS YOU WILL'HEAR'\n");
            printf("A CLICK AT EVENLY SPACED NOTCHES AS YOU MOVE TO THE PROPER\n");
            printf("NUMBER.  THERE ARE FOUR OF THEM BEFORE THE FINAL CLICK IS\n");
            printf("'HEARD'. AFTER THE FINAL ONE IS HEARD, YOU WILL GO ON TO\n");
            printf("THE NEXT NUMBER. THE COMPUTER WILL'SAY' 'CLICK' FOR EACH\n");
            printf("NOTCH THAT YOU PASS AND '**CLICK**' WHEN YOU REACH THE\n");
            printf("PROPER NUMBER.  IF YOU PASS IT OR TAKE LONGER THAN TEN TRIES\n");
            printf("ON ANY ONE NUMBER, YOU WILL ACTIVATE THE ALARM.\n");
            printf("REMEMBER THAT WHEN YOU TURN THE DIAL TO THE LEFT, THE\n");
            printf("NUMBERS GO FROM 1 -99 ,AND WHEN YOU GO TO THE RIGHT, THE\n");
            printf("NUMBERS GO FROM 99-1\n");
            printf("OKAY, START TO THE RIGHT,  SHHHHHH!!!!!!!!!!!!!!\n");
            break;
        }
        else if (strcmp(h, "NO") == 0) {
            printf("OKAY, START TO THE RIGHT,  SHHHHHH!!!!!!!!!!!!!!\n");
            break;
        }
        else {
            printf("ANSWER YES OR NO \n");
            printf("DO YOU WANT DIRECTIONS ");
        }
    }
    A = rnd(99);
    B = rnd(99);
    ranC();
    /*  printf("%d", A); Answers for passing the game number -2
        printf("%d", B); 
        printf("%d", C); */
    inputQuestion();
}

void printSpaces(int amountOfSpaces) {
    for (int space = 0; space < amountOfSpaces; space++) {
        printf(" ");
    }
}

