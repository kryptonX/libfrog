#include <stdio.h>
#include <stdlib.h>
#include "../../include/libfrog.h"
#include "winmain.h"

#ifdef _WIN32
       #include <windows.h>
#else #include <unistd.h>
#endif
typedef const char* string;

int main(int argc, const char *argv[]) {    
    return 0;        
}

int g_newline(int counter) {
    int stage = 0;
    char c;       
    
    for (stage = 0; stage < counter; stage++) {
        if ((c == getchar()) != EOF && c == '\n')
           return 0;
        else {
             return (-1);     
        }
               
    }
}

int g_newtab(int counter) {
    int stage = 0;
    char c;
    
    for (stage = 0; stage < counter; stage++) {
        if ((c == getchar()) != EOF && c == '\t')
           return 0;
        else {
              return (-1);
             }
    }   
}

int infinite_nl() {
    char c;
    int nl = 0;
    while ((c == getchar()) != EOF) {
          if (c == '\n') {
                ++nl;
             return 0;
          }
          else return (-1);
             
    }     
}

int infinite_nt() {
    char c;
    int nt = 0;
    while ((c == getchar()) != EOF) {
          if (c == '\t') {
             ++nt;
             return 0;    
          }  
    }   
}

void headers_check() {
#ifdef _WIN32
       #include <stdlib.h>
#endif          
}

int _char(char ch) {
    char c = getchar();
    if (c == ch)
       return 0;
    else return (-1);       
}

int g_char(char ch, int counter) {
    int stage = 0;
    
    for (stage = 0; stage < counter; ++counter) {
      char _c = getchar();
        if (_c == ch)
            return 0;
        else return (-1);
    }
}

int _string(const char str) {
    const char c_ = getchar();
    if (c_ == str)   
       return 0;
    else return (-1);
}




