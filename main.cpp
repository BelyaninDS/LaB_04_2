#include <fstream>
#include <cstdio>
#include <cassert>
#include <string.h>
//#include <iostream>

using namespace std;

/*
using namespace std;
const char* load_file (const char* path);
size_t count_nonempty_lines(const char* text);
{
size_t i=0;
while (text[i]=='\n')
{i++;}
return &text[i];
}
char** allocated_lines(size_t line_count);
void to_lines(text,lines);
void deallocated (text,lines);
const char** load_file (const char* path)
{
    ifsream input(path);
    if(input.bad()){return nullptr;}
    input.seekg(0;ios::end);
    size_t size=input.tellg();
    input.seekg(ios::beg);

}
char* data=new char [size+1];
input.read (data;size);
const char* find_lines_end(const char* text)
{
    size_t i=0;
    while (text[i]=='\0')
    {i++;}
    return &text[i];
}
//подсчет пустых  строк
size_t count_nonempty_lines(const char* text)
{
    size_t count=0;
    const char* line_start=skip_empty_lines(text);
    while(*line_start!='\0'){
        const char** line_end=find_line_end(line_start);
        line_start=skip_empty_lines(line_end);
    }


}
char** allocated_lines(){
    return new char* [lines:count];
}
void to_lines (const char* text;char** lines)
{
size_t count=0;
const char* line_start=skip_empty_lines(text);
while (*line_start !='\0')
{
const char** lines_end=find_line_end
}
}
*/



int main(){

    const size_t max_size = 256;
    char file_name[max_size];

    puts("Enter file name:");
    gets(file_name);

    if((strchr(file_name,'*') != NULL)||(strchr(file_name,'"') != NULL) ||
           (strchr(file_name,'<') != NULL)||(strchr(file_name,'>') != NULL)||
           (strchr(file_name,'?') != NULL)||(strchr(file_name,'|') != NULL)){
        puts("Error! Incorrect file name");
        return 0;
    }


    if(!(((strrchr(file_name,':') - file_name + 1) == 2)&&
         (((strrchr(file_name,'\\') - file_name + 1) == 3)||
          isalpha(1) != 0))){
        puts("Error! Incorrect file name");
        return 0;
    }



}




























