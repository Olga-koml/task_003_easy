#include "functions_ip.h"

#include <stdio.h>
#include <stdbool.h>

int main(){
    int command = input_command();
    switch (command) {
        case 1: {
            bool is_correct_ip = input_string_ip();
            is_correct_ip ? printf("VALID") : printf("INVALID");
            break;
        }
        case 2: {
            int first_ip_adress[MAX_LEN];
            input_ip_address_for_mask(first_ip_adress);
            int second_ip_adress[MAX_LEN];
            input_ip_address_for_mask(second_ip_adress);
            bool is_in_one_mask = is_both_addresses_in_one_mask(first_ip_adress, second_ip_adress);
            is_in_one_mask ? printf("YES") : printf("NO");
            break;
        }
        default: {
            print_error();
        }
           
    }
    return 0;   
}
