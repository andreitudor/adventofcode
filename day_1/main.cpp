#include <iostream>
#include <fstream>

int main()
{
    float final_frequency = 0;
    std::ifstream infile("./frequencies");
    int frequency;

    while (infile >> frequency) {
        final_frequency += frequency;
        std::cout << frequency << "\t" << final_frequency << "\n";
    }

    std::cout << final_frequency;
}
