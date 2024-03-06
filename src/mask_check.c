#include <stdio.h>
#include <stdbool.h>
#define MAX_LEN 4

bool is_correct_octet(int octet);
void input_string_ip();
bool is_both_addresses_in_one_mask(int * ip_adr_1, int *ip_adr_2);

int main(){
    int first_ip_adress[MAX_LEN];
    input_string_ip(first_ip_adress);
    int second_ip_adress[MAX_LEN];
    input_string_ip(second_ip_adress);
    bool is_in_one_mask = is_both_addresses_in_one_mask(first_ip_adress, second_ip_adress);
    is_in_one_mask ? printf("YES") : printf("NO");
    return 0;   
}

void input_string_ip(int *ip_adress) {
    int first_octet, second_octet, third_octet, fourth_octet;
    scanf("%d.%d.%d.%d", &first_octet, &second_octet, &third_octet, &fourth_octet);
    ip_adress[0] = first_octet;
    ip_adress[1] = second_octet;
    ip_adress[2] = third_octet;
    ip_adress[3] = fourth_octet;

}

bool is_both_addresses_in_one_mask(int * ip_adr_1, int *ip_adr_2) {
    bool is_in_one_mask = true;
    for (int i = 0; i < 3; i++){
        if (ip_adr_1[i] != ip_adr_2[i]) {
        is_in_one_mask = false;
        break;
    }
    }
    return is_in_one_mask;
}