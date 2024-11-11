#include <stdio.h>

int len(char a[]) {
	for (int i=0; ; i++)
		if (a[i] == '\0') // Increase i until we find ending of string
			return i; // Self-explanatory
}

int main(int argc, char* argv[]) {
	if (argc < 2) { // Exit if necessary argument is missing
		printf("Error: No argument provided\n");
		return 1;
	}

	int l = len(argv[1]) - 1; // Figure out length of argument

	for (int i=0; i<l; i++)
		printf("0x%x, ", argv[1][i]); // Print the ascii number

	printf("0x%x\n", argv[1][l]); // Print the number without comma & with newline before ending

	return 0;
}
