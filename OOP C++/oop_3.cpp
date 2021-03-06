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
    void Subscribe(){
        SubscribersCount++;
    };
    void UnSubscribe(){
        if(SubscribersCount > 0)
            SubscribersCount--;
    }

    void PublishVideo(string title){
        PublishedVideoTitles.push_back(title);

    }

};

int main(){
    YouTubeChannel channel("Zero", "Viktor");
    channel.PublishVideo("Whoowee");
    channel.PublishVideo("Eeee");
    channel.PublishVideo("Roar");
    channel.Subscribe();
    channel.Subscribe();
    channel.Subscribe();
    channel.UnSubscribe();
    channel.GetInfo();

}
