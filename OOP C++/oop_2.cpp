#include <iostream>
#include<list>
using namespace std;

// Constructor has same name as the class, does not have a return type
class YouTubeChannel {
public:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;

    YouTubeChannel(string name, string ownerName) {
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = 0;
        PublishedVideoTitles = {};
    }

    void GetInfo(){
        cout << "Name " << Name << endl;
        cout << "Owner Name " << OwnerName << endl;
        cout << "Subs " << SubscribersCount << endl;
        cout << "Videos: " << endl;
        for (string videoTitle : PublishedVideoTitles){
            cout << videoTitle << endl;
        }
    }
};

int main(){
    YouTubeChannel channel("Zero", "Viktor");
    channel.PublishedVideoTitles.push_back("Whoowee");
    channel.PublishedVideoTitles.push_back("Eeee");
    channel.PublishedVideoTitles.push_back("Roar");
    channel.GetInfo();



}