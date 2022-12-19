#ifndef TEXT_H
#define TEXT_H

#include <string>

class Text {
    private:
        std::string str;
    public:
        Text();
        Text(std::string file);

        void readFile(std::string file);
        std::string contents();
};

#endif