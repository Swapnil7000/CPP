// Instruction to use git
#include <iostream>
using namespace std;
int main()
{
    char git;
    cout << "Enter the character from choices i,c,a,p"<<endl;
    cin >> git;
    switch (git)
    {
    case 'a':
        cout << "git add . is the command to add files";
        break;
    case 'i':
        cout << "git init is the command to intialize the repo";
        break;
    case 'c':
        cout << "git commit is the command to commit the changes in a git repo";
        break;
    case 'p':
        cout << "git pull is the command to pull the changes to local repo from github";
        break;
    default:
        cout << "git push to push the changes to github";
        break;
    }
    return 0;
}