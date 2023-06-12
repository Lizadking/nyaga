#include "fileLoad.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream> 
#include <memory>
#include "manga.h"

void readFile(std::shared_ptr<std::vector<manga>> initialvector, std::string filename)
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

void readTitles(std::shared_ptr<std::vector<std::shared_ptr<manga>>> initialvector, std::string filename)
{

    //Initialization variables for the dataserialization
    std::ifstream myFile;
    std::string magazine,name,complete,currentChapter;

    myFile.open(filename);
    if(myFile.fail())
    {
        std::cout<<"The file cannot be read..."<<std::endl;
        myFile.close();
    }
    else
    {
        while(getline(myFile,magazine,','))
        {
            
            getline(myFile,name,',');
            getline(myFile,complete,',');
            getline(myFile,currentChapter);
            
            initialvector->push_back(createMangaFromCSV(magazine,name,complete,currentChapter));
        }
    }
    

}

std::shared_ptr<manga> createMangaFromCSV(std::string magazine,std::string name, std::string completeStatus,std::string currentChapter)
{
    //check the bool value then convert the rest of the content 
    bool convertedCompleteStatus = false;
    int convertedCurrentChapter = 0;
    if(completeStatus == "1")
    {
        //std::cout<<"COMPLETED_MANGA FOUND"<<std::endl;
        convertedCompleteStatus = true;
    }
    else
    {
        convertedCompleteStatus = false;
    }
    //convert current chapter string to an int
     convertedCurrentChapter = std::stoi(currentChapter);
     std::shared_ptr<manga> temp = std::make_shared<manga>(name);
     temp->setTile(name);
     temp->setMagazine(magazine);
     temp->setCompleteStatus(convertedCompleteStatus);
     temp->setCurrChapter(convertedCurrentChapter);

     //std::cout<<*temp<<std::endl;
     return temp;
     
}
void displayTitleList(std::shared_ptr<std::vector<std::shared_ptr<manga>>> list)
{
  for (std::vector<std::shared_ptr<manga>>::iterator it = list->begin();it != list->end();++it)
    {
        std::cout<<**it<<std::endl;
    }
}

void iterateMangaList(std::shared_ptr<std::vector<std::shared_ptr<manga>>> initialvector)
{
     
    for(std::vector<std::shared_ptr<manga>>::iterator it = initialvector->begin(); it != initialvector->end();++it)
    {
        std::cout<<**it<<std::endl;
    }
}