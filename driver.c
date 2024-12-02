/*

//////////////////////////TEAM//////////////////////////
BITS ID             Member Name
2020A7PS0073P       Shashank Agrawal
2020A7PS0096P       Akshat Gupta
2020A7PS0129P       Anish Ghule
2020A7PS0134P       Shadan Hussain
2020A7PS1513P       Tarak P V S

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "linkedList.h"
#include "hashmap.h"
#include "lexer.h"
#include "parser.h"
#include "parseTree.h"
#include "global.h"
#include "removeComment.h"

int main(int argc, char* argv[]){

    char choice[50];
    BUFF_SIZE = atoi(argv[3]);
    if(BUFF_SIZE < 20){
        printf("\033[33mWarning: Buffersize is too Small (Enter Buffersize atleast 20 to avoid errors)!\033[0m\n");
    }

    printf("(a) \033[32mFIRST and FOLLOW set automated\033[0m\n");
    printf("(b) \033[32mBoth Lexer and Parser working fine\033[0m\n");
    printf("(c) \033[32mAll modules compile and work fine\033[0m\n");
    printf("(d) \033[32mWorks on all 6 given testcases as well as our custom testcases\033[0m\n");
    printf("(e) \033[32mParse Tree generated\033[0m\n");
    printf("(f) \033[32mSynchronization Set Panic Mode Recovery Heurestics implemented successfully!\033[0m\n");
    printf("(g) \033[32mColor highlighting done\033[0m\n");

    do{
        BUFF_SIZE = atoi(argv[3]);
        initializeGlobals();
        printf("\n\033[34mDriver Menu ::\033[0m\n");
        printf("0: \033[36mExit\033[0m\n");
        printf("1: \033[36mRemove Comments\033[0m\n");
        printf("2: \033[36mPrint Token List\033[0m\n");
        printf("3: \033[36mParse the Code\033[0m\n");
        printf("4: \033[36mGet Time Taken\033[0m\n");
        printf("Enter your choice: ");
        scanf("%s",choice);
        printf("\n");  
        if(strlen(choice)>1){
            printf("Wrong Choice\n");
        }
        else if(choice[0] == '0'){
            printf("\033[36mThanks for using 'SASTA' (\033[0m"); 
            printf("\033[33mS\033[0m");
            printf("\033[36mhadan\033[0m");
            printf("\033[33m A\033[0m");
            printf("\033[36mkshat\033[0m");
            printf("\033[33m S\033[0m");
            printf("\033[36mhashank\033[0m");
            printf("\033[33m T\033[0m");
            printf("\033[36marak\033[0m");
            printf("\033[33m A\033[0m");
            printf("\033[36mnish) compiler\033[0m\n");
        }
        else if(choice[0] == '1'){
            removeComments(argv[1], "CommentFreeTestcase.txt");
        }
        else if(choice[0] == '2'){
            printAllTokens(argv[1], atoi(argv[3]));
        }
        else if(choice[0] == '3'){
            parseTheCode(argv[1],argv[2]);
        }
        else if(choice[0] == '4'){
            printExecutionTime(argv[2], argv[1]);
        }
        else{
            printf("Wrong Choice\n");
        }
    } while(choice[0] != '0' || strlen(choice) !=1);
    return 0;
}