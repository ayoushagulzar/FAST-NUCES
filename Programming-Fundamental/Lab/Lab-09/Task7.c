// You are recording runs scored by 11 players in a match. Write functions to take input
// run into an array.Calculate and return the total and average score using pointers. Find
// and display the highest scorer and their index (player number).

#include<stdio.h>

float calculateScore(int runs[], int size){
    int total = 0;            
    int highestScore = runs[0];
    int highestIndex = 0;
	int i;
    int *p = runs;        

    for (i = 0; i < size; i++) {
        total += *(p + i); 
		      
        if (*(p + i) > highestScore) {
            highestScore = *(p + i);
            highestIndex = i;
        }
    }

    printf("\nTotal Runs: %d\n", total);
    printf("Highest Scorer is player %d who scores %d runs\n", highestIndex+1, highestScore);

    float average = (float)total / size;
    return average;
}

int main(){
    int runs[11] , i;
    printf("Enter runs scored by 11 players:\n");
    for (i = 0; i < 11; i++) {
        printf("Player %d: ", i + 1);
        scanf("%d", &runs[i]);
    }

    float avg = calculateScore(runs, 11);
    printf("Average score is %.2f\n", avg);

    return 0; 
}

