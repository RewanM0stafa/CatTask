#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;  
    cin >> n;
    string str;
    cin>>str;
    int key;
    cin >> key;
    
for (char &c : str) {
        if (isalpha(c)) { 
            c+=key;
            if (islower(c) && c>'z') 
                c=(c-'z')+('a'-1); 
            else if(isupper(c) && c>'Z')
                c=(c-'Z')+('A'-1);
    }
}
    cout<<str;
    return 0;
}
