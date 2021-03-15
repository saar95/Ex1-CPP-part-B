#include <iostream>
#include "snowman.hpp"
#include <string>
const int ten = 10;
const int eight = 8;
const int hundreed = 100;
const int thousand = 1000;
const int tenthousand = 10000;
const int hundreedthousand=100000;
const int million = 1000000;
const int tenmillion=10000000;
using namespace std;



namespace ariel {

    string snowman(int str) {
        string ans;
        if (to_string(str).length() > eight || to_string(str).length() < eight){
            throw invalid_argument("Please insert 8 digits argument (The digits should be between 1-4).");
        }
        switch (str / tenmillion % ten) { //Head
        case 1:
            ans=ans+ " \n _===_\n";
            break;
        case 2:
            ans = ans + "  ___ \n .....\n";
            break;
        case 3:
            ans = ans + "   _  \n  /_\\ \n";
            break;
        case 4:
            ans = ans + "  ___ \n (_*_)\n";
            break;
        default:
            throw invalid_argument("Please insert a number between 1-4");
        }
        switch (str / thousand % ten) { //L1 arm
        case 1:case 3:case 4:
            ans = ans + " ";
            break;
        case 2:
            ans = ans + "\\";
            break;
        default:
            throw invalid_argument("Please insert a number between 1-4");
        }
        switch (str / hundreedthousand % ten) { //L eye
        case 1:
            ans = ans + "(.";
            break;
        case 2:
            ans = ans + "(o";
            break;
        case 3:
            ans = ans + "(O";
            break;
        case 4:
            ans = ans + "(-";
            break;
        default:
            throw invalid_argument("Please insert a number between 1-4");
        }
        switch (str / million % ten) { //Nose
        case 1:
            ans = ans + ",";
            break;
        case 2:
            ans = ans + ".";
            break;
        case 3:
            ans = ans + "_";
            break;
        case 4:
            ans = ans + " ";
            break;
        default:
            throw invalid_argument("Please insert a number between 1-4");
        }
        switch (str / tenthousand % ten) { //R eye
        case 1:
            ans = ans + ".)";
            break;
        case 2:
            ans = ans + "o)";
            break;
        case 3:
            ans = ans + "O)";
            break;
        case 4:
            ans = ans + "-)";
            break;
        default:
            throw invalid_argument("Please insert a number between 1-4");
        }
        switch (str / hundreed % ten) { //R arm
        case 1:case 3:case 4:
            ans = ans + " \n";
            break;
        case 2:
            ans = ans + "/\n";
            break;
        default:
            throw invalid_argument("Please insert a number between 1-4");
        }
        switch (str / thousand % ten) { //L arm2
        case 1:
            ans = ans + "<";
            break;
        case 2:
            ans = ans + " ";
            break;
        case 3:
            ans = ans + "/";
            break;
        case 4:
            ans = ans + " ";
            break;
        default:
            throw invalid_argument("Please insert a number between 1-4");
        }
        switch (str / ten % ten) { //Torso
        case 1:
            ans = ans + "( : )";
            break;
        case 2:
            ans = ans + "(] [)";
            break;
        case 3:
            ans = ans + "(> <)";
            break;
        case 4:
            ans = ans + "(   )";
            break;
        default:
            throw invalid_argument("Please insert a number between 1-4");
        }
        switch (str / hundreed % ten) { //R2 arm
        case 1:
            ans = ans + ">\n";
            break;
        case 2:
            ans = ans + " \n";
            break;
        case 3:
            ans = ans + "\\\n";
            break;
        case 4:
            ans = ans + " \n";
            break;
        default:
            throw invalid_argument("Please insert a number between 1-4");
        }
        switch (str % ten) { //Base
        case 1:
            ans = ans + " ( : )\n";
            break;
        case 2:
            ans = ans + " (\" \")\n";
            break;
        case 3:
            ans = ans + " (___)\n";
            break;
        case 4:
            ans = ans + " (   )\n";
            break;
        default:
            throw invalid_argument("Please insert a number between 1-4");
        }
        return ans;
    
    }
    }
