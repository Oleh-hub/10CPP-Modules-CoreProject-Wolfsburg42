#include <iostream>
#include <fstream>

int main(void)
{
	unsigned int	dst;
	unsigned int	dst2;
	std::fstream	ifs("fstream1in.txt");

	ifs >> dst >> dst2;
	std::cout << dst << " " << dst2 << std::endl;
	ifs.close();

	std::ofstream	ofs("fstream1out.txt");
	ofs << dst2 << " thats the output file " << dst << std::endl;
	system("cat fstream1out.txt");
	ofs.close();
}