#include <iostream>
#include <fstream>
#include <cstring>

int main()
{
    char buffer[100];
    int size = 0, max = 0, count = 0;
    char word[20];
    std::ifstream infile;
    infile.open("text.txt");

    if(!infile.is_open())
       std::cerr << "Error  " << std::endl;
    else
        while( infile >> buffer)
        {
            size = strlen(buffer);
            if(size > max)
            {
                strcpy(word, buffer);
                count = 1;
                max = size;
                continue;
            }
            if(strcmp(word, buffer) == 0)
                count++;
        }
        infile.close();
        std::cout <<"Max word " << word << std::endl;
        std::cout <<"Count "<< count << std::endl;
}
