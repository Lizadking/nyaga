#ifndef FILELOAD_H
#define FILELOAD_H

#include <string>
#include <iostream>
#include <vector>
#include <memory>
#include "manga.h"

//Function: readFile
//Behavior: reads in a CSV and generates manga objects 
//Expected return value: populate the initial vector
void readFile(std::shared_ptr<std::vector<std::unique_ptr<manga>>> initialvector, std::string filename);

//Function: readTitles
//Behavior: TESTING FUNCTION ONLY, read in titles, should create empty objects
//Expected return value: populate the initial vector
void readTitles(std::shared_ptr<std::vector<std::shared_ptr<manga>>> initialvector, std::string filename);
void displayTitleList(const std::vector<std::string> *title);
void iterateMangaList(std::shared_ptr<std::vector<std::shared_ptr<manga>>> initialvector);


#endif
