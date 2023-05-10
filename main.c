#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define STR_LEN 20
#define MAX_ELEM 10

void findDifference(char *group1[], char *group2[], int n1, int n2, char *diff[], int *diffCountPtr)
{
    int isDifferent;
    *diffCountPtr = 0;

    for(int i = 0; i < n1; i++) {
        isDifferent = 1;
        for(int j = 0; j < n2; j++){
            if(strcmp(group1[i], group2[j]) == 0){
                isDifferent = 0;
                break;
            }
        }
        if(isDifferent == 1){
            diff[*diffCountPtr] = group1[i];
            *diffCountPtr = *diffCountPtr + 1;
        }
    }
}

void printNameSurnameAge(char *diff[], int diffCount)
{
    char *temp[diffCount];
    char temp2[diffCount][20];

    for(int loop = 0; loop < diffCount; loop++){
        temp[loop] = diff[loop];
    }

    for(int loop = 0; loop < diffCount; loop++){
        char destination[20];
        strcpy(destination, temp[loop]);
        strcpy(temp2[loop], destination);
    }

    for(int i = 0; i < diffCount; i++){
        char *p = strtok(diff[i], "_");

        while(p != NULL){
            p[0] = toupper(p[0]);
            printf("%s ", p);
            p = strtok (NULL, "_");
        }

        printf("\n");
    }

    for (int i = 0; i < diffCount; i++)
    {
        strcpy(diff[i], temp2[i]);
    }

}

int main()
{
    char list[MAX_ELEM][STR_LEN] = {"", "zoe_vin_32", "sam_loaf_22",
                                    "jack_lang_12", "david_studi_17", "denzel_bale_65",
                                    "james_feldman_76", "james_alonso_30", "michael_rodriguez_23", "dustin_smith_51"};

    char *group1[MAX_ELEM];
    int n1;

    char *group2[MAX_ELEM];
    int n2;

    int i;
    int ind;

    printf("Number of elements in group1: ");
    scanf("%d",&n1);
    printf("Entries in group1: ");
    for (i = 0; i < n1; i++)
    {
        scanf("%d",&ind);
        group1[i] = list[ind];
    }

    printf("\nNumber of elements in group2: ");
    scanf("%d",&n2);
    printf("Entries in group2: ");
    for (i = 0; i < n2; i++)
    {
        scanf("%d",&ind);
        group2[i] = list[ind];
    }

    char *diff[MAX_ELEM];
    int diffCount;

    findDifference(group1, group2, n1, n2, diff, &diffCount);

    printf("\ngroup1:\n");
    for (int i = 0; i < n1; i++)
    {
        printf("%s\n",group1[i]);
    }

    printf("\ngroup2:\n");
    for (int i = 0; i < n2; i++)
    {
        printf("%s\n",group2[i]);
    }

    printf("\ndifference of group1 from group2:\n");
    for (int i = 0; i < diffCount; i++)
    {
        printf("%s\n",diff[i]);
    }

    printf("\nDo you want to print the difference in Name Surname Age format (1/0)? ");
    int response;

    scanf("%d", &response);

    if (response == 1)
    {
        printf("\ndifference of group1 from group2 in Name Surname Age format:\n");
        printNameSurnameAge(diff, diffCount);

        printf("\ndifference of group1 from group2:\n");
        for (int i = 0; i < diffCount; i++)
        {
            printf("%s\n",diff[i]);
        }
    }

    return 0;
}
