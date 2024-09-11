/*  roi 240911
	substitues in <filename> all <str2replace> strings with <str2replace_with> 
	strings 
	threatment of errors with 'try' 'catch' */

#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv)
{
	try 
	{
		if (argc != 4)
			throw "Usage: sedForLosers <filename> <str2replace> <str2replace_with>";

		std::ifstream ifs(argv[1]);
		if(!ifs)
			throw "Cannot open the input file";

		std::ofstream ofs(std::string(argv[1]) + ".replace");
		if(!ofs)
			throw "Cannot open the output '*.replace' file";

		std::string line;
		size_t pos;
		while (std::getline(ifs, line))
		{
			pos = 0;
			while ((pos = line.find(argv[2], pos)) !=  std::string::npos)
			{
				line = line.substr(0, pos) + argv[3] + line.substr(pos + std::string(argv[2]).size());
				pos += std::string(argv[2]).size();
			}
			ofs << line << std::endl;
		}
	} 
	catch (const char *error) 
	{
		std::cerr << "Error: " << error << std::endl;
		return 1;
	}
	return 0;
}