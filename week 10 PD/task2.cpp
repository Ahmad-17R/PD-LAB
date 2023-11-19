#include<iostream>
using namespace std;
int checking(string word,char a);
int count(string elements[],int size,char check);

main(){
    int num;
    char check;
    cout<<"Enter how many words you want to enter: ";
    cin>>num;
    string word[num];
    for (size_t i = 0; i < num; i++)
    {
        cout<<"Enter word "<<i+1<<": ";
        cin>>word[i];

    }
    int size = sizeof(word)/sizeof(word[0]);
    cout<<"Enter the letter you want to count: ";
    cin>>check;
    int result=count(word,size,check);
    cout<<check<<" shows up "<<result<<" times in the data.";

    
}
int count(string elements[],int size,char check){
    int sum=0;
    for (int i = 0; i < size; i++)
    {
        int num=checking(elements[i],check);
        sum=sum+num;
    }
    return sum;

}
int checking(string word,char a){
    int count=0;
    for (int i = 0; word[i] !='\0' ; i++)
    {
        if (word[i]==a)
        {
            count++;
        }
        
    }
    return count;
}
