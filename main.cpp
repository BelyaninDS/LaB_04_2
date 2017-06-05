#include <fstream>
#include <cstring>
#include <iostream>

using namespace std;

char file_name[256];



int main(){
    cout << "Enter file name: ";
    cin >> file_name;

    if((strchr(file_name,'*') != NULL)||(strchr(file_name,'"') != NULL) ||
    (strchr(file_name,'<') != NULL)||(strchr(file_name,'>') != NULL)||
    (strchr(file_name,'?') != NULL)||(strchr(file_name,'|') != NULL)){
    puts("Error! Incorrect file name");
    return 1;
    }


    if((strchr(file_name,':') != NULL)&&
    (!(((strchr(file_name,':') - file_name + 1) == 2)&&
    (((strchr(file_name,'\\') - file_name + 1) == 3)||
    isalpha(1) != 0)))){
    cout << "Error! Incorrect file name";
    return 1;
    }

    int a = strlen(file_name);

    char * lastDotPnt = strrchr(file_name, '.');

    if(lastDotPnt != NULL){
        if(strcoll(lastDotPnt, ".txt")!=0){
            strcat(file_name, ".txt");
        }
    }
    else
    {
        strcat(file_name, ".txt");
    }

    ifstream ifs(file_name);
    int file_length = 0;

    if (ifs) {
        ifs.seekg (0, ifs.end);
        file_length = ifs.tellg();
        ifs.seekg (0, ifs.beg);
        char * file_content = new char[file_length];
        ifs.read(file_content, file_length);
        ifs.close();

        cout << "Enter a string to search for (up to 255 characters):" << endl;
        char substr[256];
        cin >> substr;

        int count = 0;
        const char *tmp = file_content;
        while(tmp = strstr(tmp, substr))
        {
            count++;
            tmp++;
        }
        cout << "The string \"" << substr << "\" occures in the file " << file_name << " "  << count << " times." << endl;
        delete[] file_content;
        delete[] tmp;
    }

    delete[] lastDotPnt;
}



















