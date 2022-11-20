

void make_a_move(int n, char A, char B, char C){

    if(n == 1){
        // to move the first disk is always the last move for each tower
        printf("Move disk 1 from tower %c to tower %c\n", A, C);
        return;
    }

    // from source A to auxillary B with the help of the target C
    make_a_move(n - 1, A, C, B);

    // move the last disk from source to target
    printf("Move disk %d from tower %c to tower %c\n",n, A, C);

    // move n-1 disks from the auxiallary tower to the target tower C where A is now the auxillary
    make_a_move(n-1, B, C, A);
}