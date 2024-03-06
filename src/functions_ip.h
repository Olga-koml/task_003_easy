#ifndef FUNCTIONS_IP_H
#define FUNCTIONS_IP_H
#include <stdbool.h>
#define MAX_LEN 4

bool is_correct_octet(int octet);
bool input_string_ip();
int input_command();
void print_error();
void input_ip_address_for_mask(int *ip_adress);
bool is_both_addresses_in_one_mask(int * ip_adr_1, int *ip_adr_2);

#endif