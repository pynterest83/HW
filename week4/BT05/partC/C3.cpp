#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

void draw(vector<vector<string>> asciiArt, string text){
    int n=text.length();
    while (n!=0){
        for (int i=0; i<6; i++){
            cout << asciiArt[text[i]-'a'][i] << endl;
        }
        n--;
    }
}
vector<vector<string>> asciiArt = {
    { " ####  ", " #    #", " #    #", " ######", " #    #", " #    #" },  // A
    { " ##### ", " #    #", " ######", " #    #", " #    #", " ##### " },  // B
    { "###### ", "#      ", "#      ", "#      ", "#      ", "###### " },  // C
    { " ##### ", " #    #", " #    #", " #    #", " #    #", " ##### " },  // D
    { "###### ", "#      ", "###### ", "#      ", "#      ", "###### " },  // E
    { "###### ", "#      ", "###### ", "#      ", "#      ", "#     " },  // F
    { " ####  ", " #    #", "#      ", "#      ", " #    #", " ####  " },  // G
    { "#    # ", "#    # ", "#    # ", "#######", "#    # ", "#    # " },  // H
    { "###### ", "   #   ", "   #   ", "   #   ", "   #   ", "###### " },  // I
    { " ##### ", "    #  ", "    #  ", "    #  ", "#   #  ", " ##    " },  // J
    { "#    # ", "#   #  ", "#  #   ", "###    ", "#  #   ", "#   #  " },  // K
    { "#      ", "#      ", "#      ", "#      ", "#      ", "###### " },  // L
    { "#    # ", "##   # ", "# #  # ", "#  # # ", "#   ## ", "#    # " },  // M
    { "#    # ", "##   # ", "# #  # ", "#  # # ", "#  # # ", "#    # " },  // N
    { " ####  ", "#    # ", "#    # ", "#    # ", "#    # ", " ####  " },  // O
    { "###### ", "#    # ", "#    # ", "###### ", "#      ", "#      " },  // P
    { " ####  ", "#    # ", "#    # ", "#  # # ", "#   ## ", " ##### " },  // Q
    { "###### ", "#    # ", "#    # ", "###### ", "#   #  ", "#    # " },  // R
    { " ####  ", "#      ", " ####  ", "     # ", "#    # ", " ####  " },  // S
    { "###### ", "   #   ", "   #   ", "   #   ", "   #   ", "   #   " },  // T
    { "#    # ", "#    # ", "#    # ", "#    # ", "#    # ", " ####  " },  // U
    { "#    # ", "#    # ", "#    # ", "#    # ", " #  #  ", "  ##   " },  // V
    { "#    # ", "#    # ", "#    # ", "#  # # ", "# #  # ", " #  #  " },  // W
    { "#    # ", " #  #  ", "  ##   ", "  ##   ", " #  #  ", "#    # " },  // X
    { "#    # ", " #  #  ", "  ##   ", "   #   ", "   #   ", "   #   " },  // Y
    { "###### ", "    #  ", "   #   ", "  #    ", " #     ", "###### " },  // Z
};
int main(){
    string text;
    cin >> text;
    draw(asciiArt, text);
    return 0;
}