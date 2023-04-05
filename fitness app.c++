
#include <iostream>
#include <string>
#include <chrono>
#include <ctime>
#include <iostream>
#include <stdlib.h>
#include <iostream>
#include <string>


using namespace std;



class Calories_Burned_During_Cardio {
private:
  double distance; 
  double time; 
public:
  Calories_Burned_During_Cardio(double distance, double time) {
    distance = distance;
    time = time;
  }
  double Calculate_Calories() {
    double weight = 150.0;
    double calories = (0.75 * weight * distance) / (time / 60.0);
    return calories;
  }
};

class Cardio_Session {
private:
  double distance;
  double time;

public:
  Cardio_Session() {
      distance = 0.0;
      time = 0.0;

  }

  


  void setDistance(double distance) {
    distance = distance;
  }

  void setTime(double time) {
    time = time;
  }

  double getSpeed() {
    return distance / time * 60;
  }
};

string bmi_message(double bmi) {
    cout << "in" << endl;
    if (bmi < 18.5) {
        return "which means you are underweight";
    }
    else if (bmi >= 18.5 and bmi < 24.9) {
        return "which means you are normal";
    }
    else if (bmi >=24.9 and bmi < 29.9) {
        return "which means you are overweight";
    }
    else{
        return "which means you are obese";
    }
}


class BMI {
    private:
        double weight; 
        double height; 

    public:
        BMI(double w, double h) {
            weight = w;
            height = h;
        }

        double bmi_calc() {
            
            int bmi;
            string result;
            result = bmi_message(bmi);
            bmi =  weight / (height * height);
            cout << "your BMI is:"<< " " << bmi << " " << result << endl;
            
            
        }



    
};

int main() {
    // Get the current time
    auto now = std::chrono::system_clock::now();

    std::time_t now_t = std::chrono::system_clock::to_time_t(now);

    std::tm now_tm = *std::localtime(&now_t);

    int year = now_tm.tm_year + 1900; 
    int month = now_tm.tm_mon + 1; 
    int day = now_tm.tm_mday; 

    // Output current date
    std::cout << "Current date: " << year << "-" << month << "-" << day << std::endl;
    cout << "welcome to the app! Todays Date is"<< " "<< year << "/"<< month << "/"<< day << endl;
    cout << "would you like to check your bmi? Enter yes if so!" << endl;
    string ans;
    cin >> ans;
    if (ans == "yes" or  ans == "Yes"){
        double weight, height;
        cout << "Enter weight (in kg): ";
        cin >> weight;
        cout << "Enter height (in m): ";
        cin >> height;
        BMI person(weight, height);
        cout << "after constructed" << endl;
        person.bmi_calc();
    }
    
    
    cout << "Do you want to work on your Cardiac Health? Enter yes if so!" << endl;
    string ans1;
    cin >> ans1;
    double time;
    double distance;
    if (ans1 == "yes" or ans1== "Yes") {
        Cardio_Session obj1;
        cout << "please set the time and distance that you would like to run in KM" << endl;
        cout << "Enter the time that you want to finsih the cardio session in miniutes: ";
        cin >> time;
        obj1.setTime(time);
        cout << "Enter the distance you want to run in the cardio session: ";
        cin >> distance;
        obj1.setDistance(distance);
        cout << "this will be your estimated time to finish speed of your session" << " " << obj1.getSpeed() << endl;
        
        cout << "would you also like to know how much calories you burned? Type yes if so" << endl;
        string ans2;
        cin >> ans2;
        if (ans2 == "yes" or ans2 == "Yes"){
            double calories;
            Calories_Burned_During_Cardio burned(distance,time);
            calories = burned.Calculate_Calories();
            cout << "you have burned " << " " << calories << " " << "very well done indeed!" << endl;

        }

    }

    cout << "Do you want to build muscle in the ? Enter yes if so!" << endl;
    string ans3;
    cin >> ans3;
    if (ans3 == "yes" or ans3 == "Yes") {
        cout << "What mucsle group would you like to tackle, we can give you a workout plan as per your liking. Enter 1 for bicep, 2 for tricep, 3 for back, 4 for chest, and 5 for core" << endl;
        if (ans3 == "1") {
            cout << "here is the exercise plan for biceps!" << " " << system("https://www.anytimefitness.com/ccc/workouts/the-best-bicep-workout-for-beginners/") << endl;
            

        }
        else if (ans3 == "2") {
            cout << "here is the exercise plan for triiceps!" << " " << system("https://www.livritefitness.com/workouts/tricep-workouts") << endl;


            
        }
        else if (ans3 == "3") {
            cout << "here is the exercise plan for back!" << " " << system("https://fitbod.me/blog/best-bulking-back-workouts/") << endl;


            
        }
        else if (ans3 == "4") {
            cout << "here is the exercise plan for chest!" << " " << system("https://www.womenshealthmag.com/fitness/g26871210/best-chest-exercises/") << endl;


            
        }
        else if (ans3 == "5") {
            cout << "here is the exercise plan for core!" << " " << system("https://www.muscleandfitness.com/routine/workouts/workout-routines/six-week-power-abs-routine/") << endl;


            
        }

        


    }



    cout << "hope you had an amazing time using the fitness app!" << endl;
    
    return 0;
}






