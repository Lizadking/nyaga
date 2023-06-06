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


        friend std::ostream& operator<<(std::ostream& os, const manga& i)
        {

            std::cout<< i.title <<",\n"<<
            i.completed<<",\n"<<
            i.currentChapter<<",\n"<<std::endl;
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
        std::string title;
        bool completed;
        bool dropped;
        int currentChapter;
};


#endif
