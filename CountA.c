#include <ctype.h>
#include <stdio.h>
int main() {

  char line[150];
  int vowels, consonant, digit, space;

  // initialize all variables to 0
  vowels = consonant = digit = space = 0;
  // get full line of string input
  // fgets stores array, reading a string values with space. 
  //The fgets() reads a line from the specified stream and stores it into the string pointed to by str. 
  //It stops when either (n-1) characters are read, the newline character is read, 
  //or the end-of-file is reached, whichever comes first.
  printf("Enter a line of string: ");
  fgets(line, sizeof(line), stdin);
  // loop through each character of the string
  //‘\0’ is defined to be a null character. It is a character with all bits set to zero. 
  //This has nothing to do with pointers. 
  //‘\0’ is (like all character literals) an integer constant with the value zero.
  for (int i = 0; line[i] != '\0'; i++) {

    // convert character to lowercase
    line[i] = tolower(line[i]);

    // check if the character is a vowel
    if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' ||
        line[i] == 'o' || line[i] == 'u') {

      // increment value of vowels by 1
      vowels++;
    }

    // if it is not a vowel and if it is an alphabet, it is a consonant
    else if (line[i] >= 'a' && line[i] <= 'z') {
      consonant++;
    }

    // check if the character is a digit
    else if (line[i] >= '0' && line[i] <= '9') {
      digit++;
    }

    // check if the character is an empty space
    else if (line[i] == ' ') {
        space++;
    }
  }

  printf("Vowels: %d", vowels);
  printf("\nConsonants: %d", consonant);
  printf("\nDigits: %d", digit);
  printf("\nWhite spaces: %d\n", space);

  return 0;
}
