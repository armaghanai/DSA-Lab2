#include <iostream>
#include <string>

void reverseString(std::string&);

int main()
{
	std::string str;
	std::cout << "Enter a string:\n";
	std::cin >> str;
	reverseString(str);
	std::cout << "Reversed string: " << str;

	return 0;
}
void reverseString(std::string& str)
{
	char* start = &str[0];
	char* end = &str[str.length() - 1];
	while (start < end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}