//Manag.h

#ifndef MANGA_H
#define MANGA_H

#include <string>
#include <iostream>
#include <vector>

class manga
{

    //should make a copy constructor eventually 
    public:
        manga();  // in reality this should never be called 
        manga(std::string name = " ");
        
        std::string getTitle();
        void setTile(std::string name);
        
        bool getCompleteStatus();
        void setCompleteStatus(bool stat);

        bool getDroppedStatus();
        void setDroppedStatus(bool status);
        
        int getCurrChapter();
        void setCurrChapter(int chapter);

        std::string getMagazine();
        void setMagazine(std::string magazine);


        friend std::ostream& operator<<(std::ostream& os, const manga& i)
        {

            std::cout<< "NAME: "<< i.title <<"\n"
                      <<"COMPLETED STATUS: "<< i.completed<<"\n"
                      <<"CURRENT CHAPTER:"<< i.currentChapter<<std::endl;
            return os;
        }
	    friend bool operator<(const manga& n1, const manga& n2)
        {
            if( n1.title< n2.title)
            {
                return true;
            }
            else
            return false;
        }
	    friend bool operator>(const manga& n1, const manga& n2)
        {
              if( n1.title< n2.title)
            {
                return true;
            }
            else
            return false;
        }
	    friend bool operator==(const manga& n1, const manga& n2)
        {
              if( n1.title< n2.title)
            {
                return true;
            }
            else
            return false;
        }

    

    private:
        std::string title,magazine;
        bool completed;
        bool dropped;
        int currentChapter;
};


#endif
