int main() {
	
	int i = -1, &r = 0;
	
	int i2 = 0;
	
	int *const p2 = &i2;
	
	const int ii = -1, &rr = 0;
	
	const int * const p3 = &i2;
	
	const int * p1 = &i2;
	
	const int & const r2;
	
	const int ii2 = i, &rr2 = i;
}
	