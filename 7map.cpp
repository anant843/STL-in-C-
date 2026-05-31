#include<bits/stdc++.h>
using namespace std;
int main(){
    
   unordered_map<string,string>m;//creation

   //insertion
   m["in"]="India";
   m.insert({"us","United States"});

   pair<string,string>p;
    p.first="uk";
    p.second="United Kingdom";
    m.insert(p);

    m.size();// size of map

    m.clear();// clear the map

    m.empty();// check if map is empty or not

    m.at("in");// access the value of key "in"

    m.at("in")="Bharat";// update the value of key "in"

    m["in"];// access the value of key "in"

    m["in"]="Indian";// update the value of key "in"

    unordered_map<string,string>::iterator it=m.begin();// iterator to the beginning of the map
    while(it!=m.end()){
        pair<string,string>p=*it;// dereference the iterator to get the pair
        cout<<p.first<<" "<<p.second<<endl;
        it++;
    }

    m.erase("in");// erase the key "in" from the map

    m.erase(m.begin(),m.end());// erase all the elements from the map

    // find the key "in" in the map using find() function

    if(m.find("in")!=m.end()){// check if the key "in" is present in the map or not
        cout<<"Key is present in the map"<<endl;
    }
    else{
        cout<<"Key is not present in the map"<<endl;
    }

    // find the key "in" in the map using count() function

    if(m.count("in")==1){// check if the key "in" is present in the map or not
        cout<<"Key is present in the map"<<endl;
    }
    else{
        cout<<"Key is not present in the map"<<endl;
    }

    //Ordered Map
    map<int,string>m1;// creation of ordered map

    m1[1]="India";// insertion in ordered map
    m1[3]="United States";
    m1[2]="United Kingdom";

    //Output
    for(auto it:m1){
        cout<<it.first<<" "<<it.second<<endl;
    }
    // 1 India
    // 2 United Kingdom
    // 3 United States


    //In ordered map the keys are stored in sorted order and complexity of insertion, deletion and search is O(log n) but in unordered map the keys are stored in random order and complexity of insertion, deletion and search is O(1) on average case and O(n) in worst case.


   // All function of unordered map can be used in ordered map as well but the complexity of all functions will be O(log n) in ordered map and O(1) on average case and O(n) in worst case in unordered map.

}