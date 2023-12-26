#include <iostream>
#include <fstream>
#include <vector>

int main()
{
    return 0;
}

std::vector<std::string> getInput()
{
    std::vector<std::string> vector;

    std::ifstream file("../puzzle_input.txt");
    if (!file.is_open())
    {
        std::cout << "file doesn't exist" << std::endl;
        return vector;
    }

    std::string line;
    while (getline(file, line))
    {
        std::cout << line << std::endl;
    }

    file.close();
    return vector;
}

