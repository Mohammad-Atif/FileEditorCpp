/* C++ code to remove the starting numbers from file
*/
#include<bits/stdc++.h>
#include<fstream>
using namespace std;

int  main()
{
    string line;
    string::iterator it;
    ifstream mainFile;
    mainFile.open("dotFile.txt",ios::in);
    ofstream newFile;
    newFile.open("newDotFile.txt",ios::out);
    while(getline(mainFile,line))
    {
        for ( it = line.begin();it!=line.end(),*it!='.';it++);
        string updatedLine(it+1,line.end());
        newFile<<updatedLine<<endl;

    }
    newFile.close();
    mainFile.close();
    return 0;
}