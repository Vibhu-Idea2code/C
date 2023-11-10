
#include <stdio.h>  
   
int main()  
{  
    char sentence[] = "developing by Vibhu Sheladiya";  
    int wordCount = 0;  
      
    for(int i = 0; i < strlen(sentence)-1; i++) {  
        if(sentence[i] == ' ' && isalpha(sentence[i+1]) && (i > 0)) {  
            wordCount++;  
        }  
    }    
    wordCount++;  

    printf("Total number of words in the given string: %d", wordCount);  
   
    return 0;  
}   