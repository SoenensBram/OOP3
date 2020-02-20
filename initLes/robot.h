//Dit is een HeaderFile

// Include guards (als al includend wordt dit gexclude) (dit is de oude manier)
//#ifndef _HEADER_ROBOT_
//#define _HEADER_ROBOT_

//Nieuwe methode (Include guard)
#pragma once 

#include <string>
// BIG NO NO
// using namespace std;
// geen namespaces openzetten in header files!!!!!
// alle code die deze header gebruikt zal deze namespaces open hebben

namespace Universe{
    class Robot{
        public:
            Robot(void);
            Robot(std::string name);
        
        public:
            std::string say_hello(void); //beste Void ook in C is dit een verschil
            std::string say_bey(void);

        public:
            std::string get_name(void);
            void set_name(std::string name);
        private: //this is default maar beste altijd invoegen in een HeaderFile
            std::string name = "";
        public:

        private:


    };
}


//#endif => hoort bij oude include guard