#include <iostream>

void PrintBinaryAndDecimal(int iMyNumber) {
	using namespace std;
	cout << "Bin = ";
	for (int i = 31; i >= 0; --i) {
		std::cout << (((iMyNumber >> i) % 2) ? '1' : '0');
	}
	cout << " : Dec = " << iMyNumber << endl << endl;
}

int main() {
	using namespace std;

	int iMyNumber = -38;

	cout << "Original:" << endl;
	PrintBinaryAndDecimal(iMyNumber);

	cout << "Left-shifted:" << endl;
	PrintBinaryAndDecimal(iMyNumber << 1);

	cout << "Right-shifted:" << endl;
	PrintBinaryAndDecimal(iMyNumber >> 1);

	// Keep the window open
	cin.get();
	return 0;
}
