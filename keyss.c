
#include <windows.h>    // importing windows function
#include <conio.h>      // console input-output
    // file input-output stream
using namespace std;
int main(){
char key_press;
int ascii_value;                                                 fstream afile;                                                 afile.open("key_file.txt", ios::in | ios::out);                         afile.close();                                                 
while(true){
/* Block 1 Starts */
key_press = getch();
ascii_value = key_press;
cout << "Here --> " << key_press << endl;
if(7 < ascii_value && ascii_value < 256){
    keys(key_press, afile);  // calling keys method
}    // if condition over
/* Block 1 Ends */
}  // while loop over
return 0;
}   
