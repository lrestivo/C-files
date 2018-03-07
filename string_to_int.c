#include <stdio.h>

int str2int(char *strg_data, int n) 
{
    int i;
    char data[n];
        
    for (i = 0; i < n; i++) {
        data[i] = strg_data[i];
    }
    
    return atoi(data);
}


int main(void)
{  
    char code[25];
    int n_integer;
    
        printf("\r\nEnter the code: \r\n"); 
        scanf("%s", code); //armazena a string
        printf("\r\ncode inserted: %s\r\n", code);
        n_integer = str2int(&code[0], 3, 2); //começa no valor de code[2] e vai até + 3 posições
        printf("\r\nInteger from code[2] to code[4]: %i\r\n", n_integer); 
    return 0;   
}