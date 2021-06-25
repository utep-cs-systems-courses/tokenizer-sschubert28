#include <stdio.h>

int space_char(char c)
{
  switch (c) {
  case '\t':
  case ' ':
  case '\n':
  case '\0':
    return 1;
  default:
    return 0;
  }
}

int non_space_char(char c)
{
  switch (c) {
  case '\t':
  case ' ':
  case '\n':
  case '\0':
    return 0;
  default:
    return 1;
  }
}

char *word_start(char *str)
{
  
  while (space_char(*str)) {
    *str++;
  }
  return str;
}

char *word_terminator(char *word)
{
  while (non_space_char(*word)) {
    word++;
  }
  return word;
}

int count_words(char *str)
{
  int word_count = 0;
  while (*str != '\0') {
    if(space_char(*str)) {
      *str++;
    } else if (non_space_char(*str)) {
      word_count++;
      while (non_space_char(*str)) {
	str++;
      }
    }
  }
  return word_count;
}

char *copy_str(char *inStr, short len)
{
  return 0; 
}

char **tokenize(char* str)
{
  return 0;
}

void print_tokens(char **tokens)
{
  return;
}

void free_tokens(char **tokens)
{
  return;
}
