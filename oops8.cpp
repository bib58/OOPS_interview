#include<iostream>
using namespace std;

class Student {
protected:
    int roll_no;
public:
    void set_roll(int roll_no) {
        this->roll_no = roll_no;
    }
    void display_roll() {
        cout << "Your Roll no. is " << roll_no << endl;
    }
};

/* We used virtual inheritance so that Student exists only once in the hierarchy, preventing ambiguity, duplicate data, and errors when Result inherits from both Test and Sports. */

class Test : virtual public Student {
protected:
    float maths , physics , chemistry;
public:
    void set_marks(float , float , float);
    void display_marks();
};

void Test :: set_marks(float maths , float physics , float chemistry) {
    this->chemistry = chemistry;
    this->maths = maths;
    this->physics = physics;
}
void Test :: display_marks() {
    cout << "Your result is as:" << endl
        << "Maths: " << maths << endl
        << "Physics: " << physics << endl
        << "Chemistry: " << chemistry << endl;
}


class Sports : virtual public  Student {
protected:
    float score;
public:
    void set_score(float score) {
        this->score = score;
    }
    void display_score() {
        cout << "Your PT score is: " << score << endl;
    }
};


class Result : public Test , public Sports {
private:
    float total;
public:
    void display_result() {
        total = maths + physics + score + chemistry;
        display_roll();
        display_marks();        
        display_score();
        cout << "Total credits are: " << total << endl;
    }
};

int main() {
    Result Bibhu;
    Bibhu.set_roll(121);
    Bibhu.set_marks(99,100,99);
    Bibhu.set_score(88);

    Bibhu.display_result();    
    return 0;
}