/*
 * sign of integers
 * Thanks to gdb: monitor the value of the variables
 * us: displaying two octets starting from address &us
 * s:  displaying two octets starting from address &s
 * 
 */

int main(void) {
	unsigned short us;
	short s;

	s = -1;
	us = s;

	s = s + 1;
	us = -2;
	us = us + 2;

	return 0;
}
