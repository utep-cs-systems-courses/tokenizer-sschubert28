#include <stdio.h>
#include <string.h>
#include "tokenizer.h"

int main() 
{
  printf("\nWelcome to Tokenizer!\n");
  while(1) {
    printf("Please enter your string or 'q' to quit.\n");
    printf("> ");
    
    char sentence [100];
    char quit [2] = "q";
    fgets(sentence, 100, stdin);
    if(strcmp(sentence, quit) == 10)
      goto done;
    printf("%s", sentence);
    
    printf("There is %d word/s\n", count_words(sentence));

    
 
  }
 done:
  printf("Bye!\n");
  return 0;
}
