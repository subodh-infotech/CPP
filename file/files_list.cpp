
/*
    this program display the list of only .cpp file from specified path
*/
#include <string>
#include <iostream>
#include <filesystem>
namespace fs = std::filesystem;

using namespace std;

int main()
{
    system("cls");
    int file_count = 0;
    std::string path = "D:\\subodh\\cpp\\string";
    for (auto & entry : fs::directory_iterator(path)){
       if(fs::path(entry.path()).extension() == ".cpp") {
            file_count++;
            cout << endl << entry.path().filename();
       }
    }

    cout << endl << "total number of cpp file : " << file_count;
  
}