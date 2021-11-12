#include <iostream>
#include<list>
using namespace std;

// Encapsulation

// Constructor has same name as the class, does not have a return type
class YouTubeChannel {
private:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;

public:
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
    void Subscribe(); // https://www.youtube.com/watch?v=GQp1zzTwrIg, 8:01:00
};

int main(){
    YouTubeChannel channel("Zero", "Viktor");
    channel.PublishedVideoTitles.push_back("Whoowee");
    channel.PublishedVideoTitles.push_back("Eeee");
    channel.PublishedVideoTitles.push_back("Roar");
    channel.GetInfo();



}