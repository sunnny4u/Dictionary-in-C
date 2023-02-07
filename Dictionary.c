#include<stdio.h>
int main()
{
    char dictionary[10][2][15]={
        "Baum","Tree",
        "Fahne","Flag",
        "Tisch","Table",
        "Stuhl","Chair",
        "Essen","To Eat",
        "Kopf","Head",
        "Fernseher","TV",
        "Sonnig","Sunny",
        "Schon","Beautiful",
        "Schule","School"
    }
    char german[15];
    printf("Enter a german word: ");
    gets(german);
    int i,c=0;
    for(i = 0;i < 10;i++){
        if(strcmp(german,dictionary[i][0])==0){
            printf("English - %s\n",dictionary[i][1]);
        }
        else c++;
    }
    if(c==10)printf("Not in Dictionary.!");

    return 0;
}
