#include "fileLoad.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream> 
#include <memory>
#include "manga.h"

std::shared_ptr<manga> readFile(std::string filename)
{
    /*
    std::cout<<"Loading file..."<<std::endl;
    std::vector<std::string> *titleList = new std::vector<std::string>; //dynamic vector 
    auto start = high_resolution_clock::now(); //start the clock
    //file io
    std::ifstream myFile;
    myFile.open(filename);
    std::string line;
    int lineCount = 0;

    if(myFile.fail())
    {
        std::cout<<"The file cannot be read..."<<std::endl;
        myFile.close();
    }
    else
    {
        std::cout<<"reading file..."<<std::endl;
        while(getline(myFile,line))
        {
            titleList->push_back(line);
            lineCount++;
        }
        std::cout<<"Done reading file..."<<std::endl;
        myFile.close();
    }
    auto stop = high_resolution_clock::now(); // end the clock
    auto duration = duration_cast<milliseconds>(stop - start);
    std::cout <<"fileLoad time:"<<duration.count() << std::endl; // get the duration of the clock in seconds
    return titleList;
    */
}
std::shared_ptr<manga> readTitles(std::string filename);

void displayTitleList(const std::vector<std::string> *title)
{
    /*
    auto start = high_resolution_clock::now(); //start the clock
    for(unsigned int i = 0; i < title->size();i++)
    {
        std::cout<<title->at(i)<<std::endl;
    }
    auto stop = high_resolution_clock::now(); // end the clock
    auto duration = duration_cast<milliseconds>(stop - start);
    std::cout <<"displayTitleList time:"<<duration.count() << std::endl; // get the duration of the clock in seconds
    */
}