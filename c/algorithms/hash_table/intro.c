#include <stdio.h>

void using_switch(int i) {
    switch (i)
    {
    case 1:
        printf("one\n");
        break;
    case 2:
        printf("two\n");
        break;
    case 3:
        printf("three\n");
        break;
    case 4:
        printf("four\n");
        break;
    case 5:
        printf("five\n");
        break;
    case 6:
        printf("six\n");
        break;
    case 7:
        printf("seven\n");
        break;
    case 8:
        printf("eight\n");
        break;
    case 9:
        printf("nine\n");
        break;
    case 10:
        printf("ten\n");
        break;
    default:
        break;
    }
}


void using_arr(int i) {
    // if num_to_str is declared as a global variable, then we have no 
    // control over that variable. So we cannot guarantee the correct answer
    static char* num_to_str[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};
    printf("%s\n", num_to_str[i-1]);
}

void erratic() {
    // num_to_str[3] = "bomb";
} 

void str_to_int_switch (char * str) {
    // Unfortunately not possible
}

void str_to_int_arr (char * str) {
    static char * num_to_str[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};

    for (int i = 0; i < 10; i++) {
        if (str == num_to_str[i]) {
            printf("%s = %d\n", str, i+1);
            break;
        }
    }

}

//TODO
int str_equals(char *s1, char *s2) {
    // If equal return 1 else 0
    return 0;
}

int main () {
    // If the user enters number from 1..10 print "one".."ten"
    using_arr(4);
    erratic();
    using_arr(4);

    str_to_int_arr("four");
    printf("I broke the default behaviour\n");
    char four[] = {'f', '0', '1'};
    str_to_int_arr(four);

    // "one" -> 1
    // "two" -> 2
}