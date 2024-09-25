# This project aims to create a simple command in the Ubuntu terminal that displays the current user info when executed.

The main goal of this project is to deepen our understanding of system calls in Linux, specifically through the use of the `getuid()` function. 

System calls allow user programs (the `userinfo` command in our case) to interact with the linux kernel, providing access to low-level services such as file handling, process control, and user information. 

By implementing a simple C++ program that fetches and displays the current user's information using `getuid()` and related functions, we gain practical experience in how system calls operate and how they can be effectively used in other programming tasks on Ubuntu.







## Steps

### 1. Create a New Project in VSCode
- Open **Visual Studio Code**.
- Create a new folder for your project.
- Open the folder in VSCode.

### 2. Add `main.cpp` File to the Project Folder
- Inside the project folder, create a new file named `main.cpp`.
- This will be the file where we write our C++ code.

![image](https://github.com/user-attachments/assets/51ddb2b3-d025-4abc-b245-182688f17694)

### 3. Check the glibc Function Documentation
To understand how the getuid() function works:
this can be done by writing `man getuid` in the ubuntu terminal

![image](https://github.com/user-attachments/assets/4b605268-41de-4df7-815a-763a693c1fd9)

### 4. Write the Code in C++

```cpp
#include <iostream>

#include <unistd.h>
#include <sys/types.h>

using namespace std;

int main () 
{
    cout << "userid = " << getuid() << " username = " << getlogin() << endl;
}
```
### 5. Build the Program
Use the following command in the terminal to compile the program:

```g++ main.cpp -o userinfo```

### 6. Check the Output
Run the program inside VSCode's terminal:
```./userinfo```

The output should display information similar to:

![image](https://github.com/user-attachments/assets/10d95ff3-277b-4b44-9525-2d7ab0990579)

Now, you can confirm that the program correctly displays the desired output.

### 7. Running the Command in Ubuntu Terminal
If you try running the command ```userinfo``` in the Ubuntu terminal, you will encounter the following error:
```command 'userinfo' not found```

### 8. Understanding the Error: $PATH
This error occurs because the Ubuntu terminal looks for binary files in specific directories listed in the $PATH environment variable.
To see which directories are searched, run the following command:
```$PATH```
You will see a list of directories separated by colons, such as:
![image](https://github.com/user-attachments/assets/ad02848c-7600-42f3-93e1-2ecc791ad50c)

### 9. Copy the Binary to a Directory in $PATH
To make the userinfo command accessible from anywhere, copy the binary to one of the directories listed in $PATH. For example, copy it to /usr/bin using the following command : 
```sudo cp userinfo /usr/bin/```

### 10. Verify the Command Works Globally
Now, try running the userinfo command from any directory in the terminal:
![image](https://github.com/user-attachments/assets/85bbee35-1996-4e64-86d1-fcf2b348f666)

The command should now run successfully and display the user information globally without the command not found error.

