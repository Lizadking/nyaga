#ifndef FILELOAD_H
#define FILELOAD_H

#include <string>
#include <iostream>
#include <vector>
#include <memory>
#include "manga.h"

//Function: readFile
//Behavior: reads in a CSV and generates manga objects 
//Expected return value: a shared vector pointer of manga objects, use is for the initlization step 
std::shared_ptr<manga> readFile(std::string filename);

//Function: readTitles
//Behavior: TESTING FUNCTION ONLY, read in titles, should create empty objects
//Expected return value:a shared vector pointer of manga objects, use is for the initlization step 
std::shared_ptr<manga> readTitles(std::string filename);
void displayTitleList(const std::vector<std::string> *title);


#endif
