#include <assert.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

void swap(int tab[], int i, int j){// swap by index
    int a = tab[i];
    int b = tab[j];
    tab[j] = a;
    tab[i] = b;
}


void* list_init(int list[], int n, int l){ /* Create list of random integers up to l*/
    for(int i = 0; i < n; i++){
        list[i] = ( rand() % l ) + 1;
    }
}

void printlist(int list[], int n){
    printf("[");
    for(int i = 0; i<n ; i++){
        if(i == n-1){printf("%d", list[i]);}
        else        {printf("%d,", list[i]);}
    }
    printf("]\n");
}

bool sorted (int* list, int n){ // Is this list sorted?
    for(int i = 0; i<n-1;i++){
        if(list[i] > list[i+1]){
            return false;
        }
    }
    return true;
}

void boolprinta (bool i){
    if (i==1) {printf("True!\n");}
    else printf("False!\n");
}


void swaprandom(int list[],int n){ // n = size of list
    int i = (rand() % n);
    int j = (rand() % n);
    swap(list, i, j);
}

void go(int list[],int n){
    printf("This is our list:");
    printlist(list, n);
    printf("Let's sort it! :) \n");
    int c = 0;
    while( !sorted(list,n) ){
        swaprandom(list, n);
        printf("%d. ", c);
        printlist(list, n);
        c++;
    }

    printf("List of %d items sorted after %d random swaps! \n", n , c);
}

int main(int argc, char *argv[]) {
    int size, maxnum;
    
    char choice[100];

    if (argv[1] == NULL || argv[2] == NULL){
        printf("No arguments entered!\n");
        printf("Enter the desired length for the array of integers:\n");
        scanf("%s", choice);
        size = atoi(choice);
        printf("Enter the upper bound for the list's integers:\n");
        scanf("%s", choice);
        maxnum = atoi(choice);}
    else{size = atoi(argv[1]);
        maxnum = atoi(argv[2]);}
    printf("%d and %d\n", size, maxnum);

    int lista[size];
    
    list_init(lista, size, maxnum);

    go(lista, size);

    return 0;
}
