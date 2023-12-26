#include <iostream>
#include <fstream>
#include <vector>

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
        vector.push_back(line);
    }

    file.close();
    return vector;
}

int main()
{
    const std::vector<std::string> lines = getInput();

    for (int i = 0; i < lines.size(); ++i)
    {
        std::cout << lines.at(i) << std::endl;
    }

    return 0;
}
