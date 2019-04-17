#pragma once
#include <string>
using std::string;

namespace bullpgia{

    class Guesser{
        protected:
            string s;
            int length;
        public:
            virtual string guess()=0;
            virtual string learn(string s);
            virtual string startNewGame(int length);
    };
}