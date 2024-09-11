#include <iostream>
#include <fstream>
#include <string>

int	ft_error(int i)
{
	if (i == 0)
		std::cerr << "Wrong amount of arguments" << std::endl;
	if (i == 1)
		std::cerr << "Wrong file path" << std::endl;
	return (1);
}

int main(int argc, char **argv)
{
	if (argc != 4)
		return (ft_error(0));
	std::ifstream	inputFile(argv[1]);
	if (!inputFile.is_open())
		return(ft_error(1));
		
	std::string		s1 = argv[2];
	std::string		s2 = argv[3];
	size_t			len;
	std::string		line;
	std::string		filename(argv[1]);
	std::string		outputFilename = filename + ".replace";
	const char*		outputFilenameC = outputFilename.c_str();
	std::ofstream	outputFile(outputFilenameC);
	std::string		linecopy;
	while (std::getline(inputFile, line))
	{
		len = 0;
		linecopy = line;
			while ((len = linecopy.find(s1, len)) != std::string::npos)
			{
				linecopy = linecopy.substr(0, len) + s2 + linecopy.substr(len + s1.size());
				len += s2.size();
			}
		outputFile << linecopy << std::endl;
	}
	outputFile.close();
	inputFile.close();
}