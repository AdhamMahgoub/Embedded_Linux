#include <iostream>

#include <unistd.h>
#include <sys/types.h>

using namespace std;

int main () 
{
    cout << "userid = " << getuid() << " username = " << getlogin() << endl;
}
