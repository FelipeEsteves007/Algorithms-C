int getComputerChoice(){
    int max = 3;
    int min = 1;

    srand(time(NULL));
    int pcChoose = (rand() % (max - min + 1)) + min;

    return pcChoose;
}