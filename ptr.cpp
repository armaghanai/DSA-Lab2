#include <iostream>

using namespace std;

void analyzePointer(int* ptr);
int main()
{
	int iValue = 87;
	int* ptr = &iValue;

	cout << "Stack Pointer:\n";
	analyzePointer(ptr);

	int* heapPointer = new int(67);

	cout << "\nHeap Pointer:\n";
	analyzePointer(heapPointer);

	delete heapPointer;
	heapPointer = nullptr;

	return 0;
}
void analyzePointer(int* ptr)
{
	cout << "Address: " << ptr << endl;
	cout << "Value: " << *ptr;
}