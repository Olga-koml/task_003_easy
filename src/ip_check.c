#include <stdio.h>
#include <stdbool.h>

bool is_correct_octet(int octet);
bool input_string_ip();

int main(){
    bool is_correct_ip = input_string_ip();
    is_correct_ip ? printf("VALID") : printf("INVALID");
    return 0;   
}

bool is_correct_octet(int octet) {
    return octet >= 0 && octet < 256;
}

bool input_string_ip() {
    int first_octet, second_octet, third_octet, fourth_octet;
    scanf("%d.%d.%d.%d", &first_octet, &second_octet, &third_octet, &fourth_octet);
    return is_correct_octet(first_octet) &&
        is_correct_octet(second_octet) &&
        is_correct_octet(third_octet) && 
        is_correct_octet(fourth_octet);

}
