#include <stdio.h>
//考試測驗
int main(){
    int num1, num2, num3;
    int inptnum;
    scanf("%d", &inptnum);
    char oupt[inptnum];
    for (int i=0; i<inptnum; i++) {
        scanf("%d %d %d", &num1, &num2, &num3);
        int total = num1 + num2 + num3;
        if (num1 >= 60 && num2 >= 60 && num3 >= 60) {
            oupt[i] = 'P';
        }
        else if (num1 < 60 && num2 >= 60 && num3 >= 60 && total >= 220) {
            oupt[i] = 'P';
        }
        else if (num1 >= 60 && num2 < 60 && num3 >= 60 && total >= 220) {
            oupt[i] = 'P';
        }
        else if (num1 >= 60 && num2 >= 60 && num3 < 60 && total >= 220) {
            oupt[i] = 'P';
        }
        else if (num1 < 60 && num2 >= 60 && num3 >= 60 && total <= 220) {
            oupt[i] = 'M';
        }
        else if (num1 >= 60 && num2 < 60 && num3 >= 60 && total <= 220) {
            oupt[i] = 'M';
        }
        else if (num1 >= 60 && num2 >= 60 && num3 < 60 && total <= 220) {
            oupt[i] = 'M';
        }
        else if (num1 >= 80 && num2 < 60 && num3 < 60) {
            oupt[i] = 'M';
        }
        else if (num2 >= 80 && num1 < 60 && num3 < 60) {
            oupt[i] = 'M';
        }
        else if (num3 >= 80 && num2 < 60 && num1 < 60) {
            oupt[i] = 'M';
        }
        else {
            oupt[i] = 'F';
        }
    }
    
    for (int i=0; i<inptnum; i++) {
        printf("%c\n", oupt[i]);
    }
    return 0;
}
