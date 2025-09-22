//Deepseek
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

// 课程结构体
struct Course {
    string name;
    int day;
    string timeSlot;
    string teacher;
};

// 学生信息结构体
struct Student {
    string name;
    string id;
    string className;
};

// 函数声明
void addCourse(vector<Course>& courses);
void queryByDay(const vector<Course>& courses);
void gradeJudgment();
void displayMenu();

int main() {
    Student student;
    vector<Course> courses;

    // 输入学生信息
    cout << "请输入姓名：";
    getline(cin, student.name);
    cout << "请输入学号：";
    getline(cin, student.id);
    cout << "请输入班级：";
    getline(cin, student.className);

    // 添加课程
    int courseCount = 0;
    cout << "\n【添加第1门课程】" << endl;
    addCourse(courses);
    courseCount++;

    cout << "\n【添加第2门课程】" << endl;
    addCourse(courses);
    courseCount++;

    cout << "\n用户输入" << endl;
    cout << courseCount << "门课程就可以" << endl;
    cout << "---" << endl;

    // 显示功能菜单
    int choice;
    do {
        displayMenu();
        cout << "请输入选择（1/2）：";
        cin >> choice;
        cin.ignore(); // 清除输入缓冲区

        switch (choice) {
        case 1:
            queryByDay(courses);
            break;
        case 2:
            gradeJudgment();
            break;
        default:
            cout << "输入无效，请重新选择！" << endl;
        }
    } while (choice != 1 && choice != 2);

    return 0;
}

// 添加课程函数
void addCourse(vector<Course>& courses) {
    Course course;
    cout << "课程名：";
    getline(cin, course.name);
    cout << "星期（1-7）：";
    cin >> course.day;
    cin.ignore(); // 清除输入缓冲区
    cout << "时间段：";
    getline(cin, course.timeSlot);
    cout << "老师：";
    getline(cin, course.teacher);
    courses.push_back(course);
}

// 按星期查询课程
void queryByDay(const vector<Course>& courses) {
    int day;
    cout << "\n【查询课程】请输入要查询的星期（1-7）：";
    cin >> day;

    cout << "\n【周" << (day == 1 ? "一" : day == 2 ? "二" : day == 3 ? "三" :
        day == 4 ? "四" : day == 5 ? "五" : day == 6 ? "六" : "日")
        << "的课程】" << endl;

    bool found = false;
    for (const auto& course : courses) {
        if (course.day == day) {
            cout << "课程名：" << course.name
                << "，时间段：" << course.timeSlot
                << "，老师：" << course.teacher << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "该星期没有课程安排" << endl;
    }
}

// 成绩等级判断
void gradeJudgment() {
    double score;
    cout << "\n【成绩等级判断】请输入成绩：";
    cin >> score;

    if (score >= 90) {
        cout << "成绩等级：优秀" << endl;
    }
    else if (score >= 80) {
        cout << "成绩等级：良好" << endl;
    }
    else if (score >= 70) {
        cout << "成绩等级：中等" << endl;
    }
    else if (score >= 60) {
        cout << "成绩等级：及格" << endl;
    }
    else {
        cout << "成绩等级：不及格" << endl;
    }
}

// 显示菜单
void displayMenu() {
    cout << "\n---" << endl;
    cout << "【功能菜单】" << endl;
    cout << "1. 按星期查询课程" << endl;
    cout << "2. 成绩等级判断" << endl;
}













//我的思路
#include <string.h>
int main()
{
    int choice, i;
    char weekchoice[100];
    printf("=====校园个人学习助手（选择版）=====\n");
    char name[20], studentID[30], classname[30];
    printf("请输入姓名：");
    scanf("%s", name);
    printf("请输入学号：");
    scanf("%s", studentID);
    printf("请输入班级：");
    scanf("%s", classname);

    printf("【添加第1门课程】\n");
    char course1[100], week1[100], time1[20], teacher1[30];
    printf("课程名：");
    scanf("%s", &course1);
    printf("星期（1-7）：");
    scanf("%s", &week1);
    printf("时间段：");
    scanf("%s", &time1);
    printf("老师：");
    scanf("%s", &teacher1);
    printf("【添加第2门课程】\n");
    char course2[20], week2[100], time2[20], teacher2[30];
    printf("课程名：");
    scanf("%s", &course2);
    printf("星期（1-7）：");
    scanf("%s", &week2);
    printf("时间段：");
    scanf("%s", &time2);
    printf("老师：");
    scanf("%s", &teacher2);
    printf("【功能菜单】\n");
    printf("1.按星期查询课程\n");
    printf("2.成绩等级判断\n");
    printf("请输入选择（1/2):");
    scanf("%d", &choice);
    if (choice == 1) {
        printf("【查询课程】请输入要查询的星期（1-7）：");
        scanf("%s", &weekchoice);
        printf("\n【周%s的课程】\n", weekchoice);
        if (strcmp(week1, weekchoice) == 0) {
            printf("课程名：%s,时间段：%s,老师：%s\n", course1, time1, teacher1);
        }
        else if (strcmp(week2, weekchoice) == 0) {
            printf("课程名：%s,时间段：%s,老师：%s\n", course2, time2, teacher2);
        }
    }
    else if (choice == 2) {
        printf("【成绩等级判定】请输入成绩：");
        scanf("%d", &i);
        printf("\n【您的等级为：】\n", i);
        if (i < 0 || i>100) {
            printf("Score is error!\n");
        }
        else if (i >= 80) {
            printf("A\n");
        }
        else if (i >= 60) {
            printf("B\n");
        }
        else {
            printf("C\n");
        }
    }
    return 0;
}