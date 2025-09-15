#include <iostream>
#include <cstring>
using namespace std;

class CWH {
protected:
    string title;
    float rating;
public:
    CWH(string s, float rating) {
        title = s;
        this->rating = rating;
    }
    virtual void display() {
        cout << "bogus code" << endl;
    }
};

class CWH_video : public CWH {
    float video_length;
public:
    CWH_video(string s, float rating, float video_length) : CWH(s, rating) {
        this->video_length = video_length;
        this->rating = rating;
    }
    void display() {
        cout << "Amazing video with title " << title << " and rating " << rating << " out of 5 stars" << endl;
        cout << "The length of video is " << video_length << " minutes" << endl;
    }
};


class CWH_text : public CWH {
    int words;
public:
    CWH_text(string s, float rating, int words) : CWH(s, rating) {
        this->words = words;
        this->rating = rating;
    }
    void display() {
        cout << "Amazing text tutorial with title " << title << " and rating " << rating << " out of 5 stars" << endl;
        cout << "The length of text is " << words << " words" << endl;
    }
};


int main() {
    string title;
    float rating, video_length;
    int words;

    title = "C++ Tutorial";
    video_length = 38;
    rating = 4.98;

    CWH_video vid(title, rating, video_length);
    vid.display();  /*If we are using this, no need of virtual keyword */

    title = "C++ Text Tutorial";
    words = 361;
    rating = 4.25;

    CWH_text txt(title, rating, words);
    txt.display();  /* If we are using this, no need of virtual keyword */

    CWH *tuts[2];
    tuts[0] = &vid;
    tuts[1] = &txt;

    tuts[0]->display();
    tuts[1]->display();  /* If we are using pointers and forgot `virtual` keyword, it will print'bogus code' twice */

    return 0;
}