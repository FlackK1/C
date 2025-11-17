#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static int ft_strlen(const char *str) {
int i = 0;
while(str[i])
i++;
return i;
}

static int count_words(const char *str, char c) {
int i = 0;
int trigger = 0;
while (*str) {
if (*str != c && trigger == 0) {
trigger = 1;
i++;
}
else if (*str == c)
trigger = 0;
str++;
}
return i;
}

static char *word_dup(const char *str, int start, int finish) {
char *word;
int i = 0;
word = malloc((finish - start + 1) * sizeof(char));
while (start < finish)
word[i++] = str[start++];
word[i] = '\0';
return word;
}

char **ft_split(const char *s, char c) {
size_t i = 0;
size_t j = 0;
int index = -1;
char **split;

if (!s)
return NULL;
split = malloc((count_words(s, c) + 1) * sizeof(char *));
if (!split)
return NULL;
while (i <= ft_strlen(s)) {
if (s[i] != c && index < 0)
index = i;
else if ((s[i] == c || i == ft_strlen(s)) && index >= 0) {
split[j++] = word_dup(s, index, i);
index = -1;
}
i++;
}
split[j] = NULL;
return split;
}

int main() {
char string[] = "Koodaaminen on hirmu hauskaa eikös vain???";
char **strings = ft_split(string, ' ');
if (strings) {
for (int i = 0; strings[i] != NULL; i++) {
printf("sana %d: %s\n", i + 1, strings[i]);
free(strings[i]);
}
free(strings);
}
return 0;
}