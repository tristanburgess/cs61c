#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "ex1.h"

int main(int argc, char **argv) {
    printf("Running tests...\n\n");
    /************ Part 1 Test Cases ************/
    char *str1 = "hello world!";

    int num_l = num_occurrences(str1, 'l');
    assert(num_l == 3);

    int num_z = num_occurrences(str1, 'z');
    assert(num_z == 0);

    int num_nl = num_occurrences(str1, '\0');
    assert(num_nl == 0);

    char *str2 = "FW#Fg4w\tLooOo";

    int num_pnd = num_occurrences(str2, '#');
    assert(num_pnd == 1);

    int num_tc = num_occurrences(str2, 't');
    assert(num_tc == 0);

    int num_tab = num_occurrences(str2, '\t');
    assert(num_tab == 1);

    int num_o = num_occurrences(str2, 'o');
    assert(num_o == 3);

    int num_up_o = num_occurrences(str2, 'O');
    assert(num_up_o == 1);

    printf("Congrats! If you have made it to this line, your Part 1 Test cases are all passing!\n");

    /************ Part 2 Test Cases ************/
    DNA_sequence dna_seq_1;
    strcpy(dna_seq_1.sequence, "ACTTTGAAC");
    compute_nucleotide_occurrences(&dna_seq_1);
    assert(dna_seq_1.A_count == 3);
    assert(dna_seq_1.C_count == 2);
    assert(dna_seq_1.G_count == 1);
    assert(dna_seq_1.T_count == 3);

    DNA_sequence dna_seq_2;
    strcpy(dna_seq_2.sequence, "AAAACCC");
    compute_nucleotide_occurrences(&dna_seq_2);
    assert(dna_seq_2.A_count == 4);
    assert(dna_seq_2.C_count == 3);
    assert(dna_seq_2.G_count == 0);
    assert(dna_seq_2.T_count == 0);

    DNA_sequence dna_seq_3;
    strcpy(dna_seq_2.sequence, "");
    compute_nucleotide_occurrences(&dna_seq_3);
    assert(dna_seq_3.A_count == 0);
    assert(dna_seq_3.C_count == 0);
    assert(dna_seq_3.G_count == 0);
    assert(dna_seq_3.T_count == 0);

    printf("Congrats! If you have made it to this line, your Part 2 Test cases are all passing!\n");

    return 0;
}
