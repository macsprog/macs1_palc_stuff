int main(void) {
	char c;
	unsigned char uc;
	short s;
	unsigned short us = 2;
	int i;
	unsigned int ui;
	int sizeOfVar = 0;
	float f = 4.3;
	double d = 0.1;

	sizeOfVar = sizeof(c);
	sizeOfVar = sizeof(uc);
	sizeOfVar = sizeof(s);
	sizeOfVar = sizeof(us);
	sizeOfVar = sizeof(i);
	sizeOfVar = sizeof(ui);
	sizeOfVar = sizeof(f);
	sizeOfVar = sizeof(d);

	c = 'a';
	c = c + 1;

	s = 1;
	us = 523;
	i = 3;
	ui = 4;
	sizeOfVar = sizeOfVar * 2;
	d = d / 2.3;
	f = f + 1.2;

	return 0;
}
