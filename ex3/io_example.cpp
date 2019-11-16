#include <iostream>
#include <fstream>

int main()
{
	std::ifstream in("input_file.txt");
	if (!in.good())
	{
		std::cout << "You screwed up. The file doesn't exist.\n";
	}
	else
	{
		while (!in.fail())
		{
			unsigned hex;
			char c;
			in >> std::hex >> hex;
			c = static_cast<char>(hex);
			std::cout << c;
		}
	}
}
