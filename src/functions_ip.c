#include "functions_ip.h"

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool is_correct_octet(int octet) {
    return octet >= 0 && octet < 256;
}

bool input_string_ip() {
    int first_octet, second_octet, third_octet, fourth_octet;
    char c;
    scanf("%d.%d.%d.%d%c", &first_octet, &second_octet, &third_octet, &fourth_octet, &c);
    return is_correct_octet(first_octet) &&
        is_correct_octet(second_octet) &&
        is_correct_octet(third_octet) && 
        is_correct_octet(fourth_octet) &&
        (c == ' ' || c == '\n');

}

void print_error() {
    fprintf(stderr, "Puck you, Verter!");
    exit(EXIT_FAILURE);
}

int input_command() {
    int command;
    char c;
    if (scanf("%d%c", &command, &c) && command > 0 && command < 3 && (c ==' ' || c == '\n')) {
        return command;
    } else {
        return -1;
    }
}

void input_ip_address_for_mask(int *ip_adress) {
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
