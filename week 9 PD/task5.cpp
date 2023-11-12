#include<iostream>
#include<algorithm>
using namespace std;
int common(string str1,string str2);

main(){
    string str1,str2;
    cout<<"Enter the first string: ";
    cin>>str1;
    cout<<"Enter the second string: ";
    cin>>str2;
    cout<<"Number of common characters: "<<common(str1,str2);

}
int common(string str1,string str2){
               
            sort(str1.begin(), str1.end());
            sort(str2.begin(), str2.end());

            
            int count = 0;
            int i = 0, j = 0;

                    while (i < str1.length() && j < str2.length()) {
                        if (str1[i] == str2[j]) {
                        count++;
                        i++;
                        j++;
                        } else if (str1[i] < str2[j]) {
                        i++;
                        } else {
                        j++;
                        }
                    }

    

        
    
    return count;
    
}