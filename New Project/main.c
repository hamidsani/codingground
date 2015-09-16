#include <stdio.h>

int main()
{
    int counter;
    for (counter = 0; counter <= 100; counter++ ){
        
        //prints "Fizz" every time the count is a multiple of 3
        if(counter%3 == 0){     
            printf("Fizz\n");
        }   
        
        //prints "Buzz" every time the count is a multiple of 5
        if(counter%5 == 0){
            printf("Buzz\n");
        }   
        
        //prints the count otherwise
        if(counter%5 != 0 && counter%3 != 0){
            printf("%d\n", counter);
        }
    }

    return 0;
}

