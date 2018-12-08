#include <iostream>
#include <fstream>
#include <vector>

bool findDoubleFrequency(std::vector<float> &, float &);

int main()
{
    std::vector<float> v;
    float final_frequency = 0;
    v.push_back(final_frequency);

    int i = 0;

   while(true) {
        std::cout << "Go with function " << i << "\n\n";
        bool finish = findDoubleFrequency(v, final_frequency);

        if (finish) {
            return 1;
        }

        i++;
    }

    return 0;
}

bool findDoubleFrequency(std::vector<float> &v, float &final_frequency) {
    float frequency;
    std::ifstream infile("./frequencies");

    while (infile >> frequency) {
        final_frequency += frequency;

        if (v.size() == 0) {
            v.push_back(final_frequency);
        } else {
            for(std::vector<float>::iterator it = v.begin(); it != v.end(); ++it) {
                if (final_frequency == *it) {
                    std::cout << final_frequency;

                    return true;
                }
            }
            v.push_back(final_frequency);
        }
    }

    return false;
}
