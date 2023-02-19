#include <math.h>

#define LENGTH(arr) (sizeof(arr) / sizeof(arr[0]))

int check(float num){
    int gotone = 0;
    float current = 2;
    while(gotone == 0 && current < num){
        if (fmod(num, current) == 0){
            gotone = 1;
        }
        else{
            current++;
        }
    }
    return gotone;
}

int main(){
    printf("Wie viele Primzahlen moechtest du finden?\n");
    int maximum;
    scanf("%d", &maximum);
    int primes[maximum];
    int count = 0;
    int i = 2;
    while (count < maximum) {
        if (check(i) == 0) {
            primes[count] = i;
            count++;
        }
        i++;
    }
    printf("Die folgenden Primzahlen wurden gefunden:\n");
    for (i = 0; i < count; i++) {
        printf("%d\n", primes[i]);
    }
    return 0;
}
