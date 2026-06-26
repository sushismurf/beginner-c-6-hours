#include <stdio.h>
#include <stdbool.h>
int main(void) {
    int age = 25;
    float height = 174.5;
    bool is_student = 55; // In C, any non-zero value is considered true
    char *favourite_food = "nihari";
    float gpa = 3.01; // use double if you need more precision
    printf("I am %d years old.\nI am %.1f cm tall.\nI like eating %s.\nMy GPA is %.1f\n", age, height, favourite_food, gpa);
    printf("%s, I am a student.", is_student ? "Yes" : "No");
    if(is_student){
        printf("I am a student.");
    }
    else if(!is_student){
        printf("I am not a student.");
    }
    else{
        printf("I don't know if I am a student or not.");
    }
    return 0;
}