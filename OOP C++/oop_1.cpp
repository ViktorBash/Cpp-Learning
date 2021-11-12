#include <iostream>
#include<list>
using namespace std;

class YouTubeChannel {
public:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;

};

int main(){
    YouTubeChannel ytChannel;
    ytChannel.Name = "Zero";
    ytChannel.OwnerName = "Viktor";
    ytChannel.SubscribersCount = 23;
    ytChannel.PublishedVideoTitles = {"You won't believe this", "It worked", "Wow, I love YouTube"};

    cout << "Name " << ytChannel.Name << endl;
    cout << "Owner Name " << ytChannel.OwnerName << endl;
    cout << "Subs " << ytChannel.SubscribersCount << endl;
    cout << "Videos: " << endl;
    for (string videoTitle : ytChannel.PublishedVideoTitles){
        cout << videoTitle << endl;
    }
}