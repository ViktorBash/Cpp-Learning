#include <iostream>
#include<list>
using namespace std;

// Inheritance

// Constructor has same name as the class, does not have a return type
class YouTubeChannel {
private:
    string Name;
    int SubscribersCount;
    list<string> PublishedVideoTitles;
protected: // Can be edited/used in derived classes
    string OwnerName;

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

// Inherits YouTubeChannel class, derived class inherits from the base class
class CookingYouTubeChannel:public YouTubeChannel {
public:
    CookingYouTubeChannel(string name, string ownerName): YouTubeChannel(name, ownerName){

    }

    void Practice() {
        cout << OwnerName << ": This user is practicing cooking videos" << endl;
    }
};

int main(){
    CookingYouTubeChannel channel("Bob's Burgers", "Bobert");
    channel.PublishVideo("Apple pie");
    channel.PublishVideo("Food that is good");
    channel.Subscribe();
    channel.GetInfo();
    channel.Practice();


};
