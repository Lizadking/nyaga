#include "fileLoad.h"
#include <iostream>
int main()
{
    std::shared_ptr<std::vector<std::shared_ptr<manga>>> mangaList; //contains references to all manga
    //Driver test: Make the program sort the objects by alphabetical order 

    //load in titles from file, create a vector of manga pointers to store there mem addresess 
    readTitles(mangaList,"titlesList.txt");
    //sort alphabetical function

    //initalise BST (use the vecotor pointer )

    //after initilization destory the vector pointer (no longer needed)

    //stat main loop

    //exit 

    return 0;
}