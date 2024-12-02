/*

//////////////////////////TEAM//////////////////////////
BITS ID             Member Name
2020A7PS0073P       Shashank Agrawal
2020A7PS0096P       Akshat Gupta
2020A7PS0129P       Anish Ghule
2020A7PS0134P       Shadan Hussain
2020A7PS1513P       Tarak P V S

*/
#ifndef GLOBAL_H
#define GLOBAL_H

#include<stdio.h>
#include "hashmap.h"
#include "lexer.h"

// GLOBALS
extern bool readCodeCompletely; // set to true when fp reaches EOF
extern int lineNo;
extern bool noTokensLeft;
extern char *buff1, *buff2;
extern int forward, begin;
extern bool bufferFlush;
extern int lexLength;
extern bool lexLengthExceeded;
extern char ch;
extern bool isComment;
extern STATE current;
extern HashmapEntry *lookupTable;
extern int BUFF_SIZE;

#endif /* GLOBAL_H */