#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <cctype>
#include <algorithm> // Pour std::sort
using namespace std;




bool isPalindrome(string& str){
    int taille = str.size();
    for(int i= 0; i <taille/2;i++){
        if(str[i]!=str[taille-i-1]){return false;}
        
    }
    
    return true;
}

int countUnique(std::vector<int> tab) {
    std::set<int> uniqueElements(tab.begin(), tab.end()); // Insert all elements into a set
    return uniqueElements.size(); // The size of the set is the number of unique elements
}

int main()
{
cout << "revision c++ "<<endl;
//cout << "COMANCER : "<<endl;

int a = 7;
cout<<++a<<endl; // postfixe
cout<<a++<<endl; // prefixe


cout << "======================================== "<<endl;

string s1= "kayak";
string s2 = "rida";
bool ss1 = isPalindrome(s1);
cout<<"le mot"<<s1<<"est "<<ss1<<" Palindrome" <<endl;
cout<<"le mot"<<s2<<"est "<<isPalindrome(s2)<<" Palindrome" <<endl;


cout << "Vector : "<<endl;
cout << "======================================== "<<endl;
//std::vector<int> v1 = {10, 22, 51, 20, 12, 35, 255, 37};
// Initialisation du vecteur sans liste d'initialisation
    std::vector<int> v1;
    v1.push_back(10);
    v1.push_back(22);
    v1.push_back(51);
    v1.push_back(20);
    v1.push_back(12);
    v1.push_back(35);
    v1.push_back(255);
    v1.push_back(37);
//afficher le vecteur avant la modification 
int sizeofvector = v1.size();
for(int i = 0; i<sizeofvector; i++){
    cout<<"v1("<<i<<") = "<<v1[i]<<endl;
}
cout<<"ordonner le vector croissant"<<endl;
std::sort(v1.begin(),v1.end(),std::greater<int>()); 
//int sizeofvector = v1.size();
for(int i = 0; i<sizeofvector; i++){
    cout<<"v1("<<i<<") = "<<v1[i]<<endl;
}

return 0;
}















