#include "manga.h"

#include <string>
#include <iostream>
#include <vector>

manga::manga(){};
manga::manga(std::string name)
        {
            title = name;
            completed = false;
            currentChapter = 0;
        }

std::string manga::getTitle(){return title;}
void manga::setTile(std::string name){title = name;}

bool manga::getCompleteStatus(){return completed;}
void manga::setCompleteStatus(bool stat){completed = stat;}

int manga::getCurrChapter(){return currentChapter;}
void manga::setCurrChapter(int chapter){currentChapter = chapter;}


