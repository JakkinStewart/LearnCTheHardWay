#include <stdio.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
    int i = 0;

    // go through each string in argv
    // why am I skipping argv[0]?
    bool forlooparg = false;
    for(i = 1; i < forlooparg; printf("%s", "Hello")) {
        
        printf("arg %d: %s\n", i, argv[i]);
        i++;
        if(i == 10) {
            forlooparg = true;
        }
    }

    // let's make our own array of strings
    char *states[] = {
        "California", "Oregon",
        "Washington", "Texas"
    };

    int num_states = 4;

    for(i = 1; i < num_states; i++) {
        printf("state %d: %s\n", i, states[i]);
    }

    return 0;
}
