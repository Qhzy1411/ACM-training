// 作者：金施成  阳明2024级计算机科学与技术2班  246001340
// 本程序输出值均使用英语以避免不同环境导致的文字乱码
#include <stdio.h>
#include <string.h>
typedef struct student_info
{
    int id;
    char name[20];
    double score[3], total;
} INFO;          // 结构体定义，包含学生ID、姓名、三项成绩与总分
int datanum = 0; // 全局变量，方便记录学生总数
void buffer()    // 在调用UI()前调用此函数，让用户回车以继续程序，方便阅读输出值
{
    printf("Press Enter to continue.");
    getchar();
    return;
}
int query_ID_location(INFO *p, int query) // 查询ID对应学生位置
{
    int location = -1;                // 若未匹配到对应学生则返回-1
    for (int i = 0; i < datanum; i++) // 使用全局变量datanum保证查询每一个学生的信息
        if ((p + i)->id == query)
        {
            location = i; // 若匹配到对应学生，记录位置
            break;        // ID是唯一的，找到对应学生后无需再往后搜索
        }
    return location;
}
void input(INFO *p) // 输入学生信息，整体使用全局变量datanum保证不覆盖上一个学生的数据
{
    int temp;
    printf("Please enter students' infomation, enter 0 in ID to break.\n"); // 当用户在ID栏输入0时退出本函数
    while (1)
    {
        printf("===Student %d===\n", datanum + 1);
        printf("ID:");
        scanf("%d", &temp); // 缓冲ID，若为0退出函数
        getchar();          // 将ID输入末尾的\n吞掉
        if (temp == 0)
        {
            buffer();
            return;
        }
        if (query_ID_location(p, temp) >= 0) // 输入的ID值已经存在对应学生，说明重复了
        {
            printf("This ID already exists in the system. You cannot enter the same ID repeatedly.\n");
            continue; // 重新输入
        }
        (p + datanum)->id = temp; // 将缓冲的ID值存入
        printf("Name:");
        fgets((p + datanum)->name, sizeof((p + datanum)->name), stdin); // 防止名字中带有空格，使用fgets输入姓名
        (p + datanum)->name[strcspn((p + datanum)->name, "\n")] = '\0'; // 将使用fgets得到的姓名的末尾\n替换为\0
        printf("Scores(Chinese Math English):");
        for (int i = 0; i < 3; i++)
            scanf("%lf", &(p + datanum)->score[i]);                                                         // 输入三项成绩
        (p + datanum)->total = (p + datanum)->score[0] + (p + datanum)->score[1] + (p + datanum)->score[2]; // 直接计算总分
        datanum++;                                                                                          // 完整输入了一名学生的信息，学生总数+1
    }
}
void display(INFO *p, int n) // 输出单个学生的信息
{
    printf("%-12d%-22s     %5.1f        %5.1f        %5.1f         %5.1f\n",
           (p + n)->id, (p + n)->name, (p + n)->score[0], (p + n)->score[1], (p + n)->score[2], (p + n)->total); // 对齐不同长度数据
    return;
}
void display_all(INFO *p) // 输出全部学生的信息
{
    if (datanum == 0) // 若系统内不存在学生信息则无法输出
    {
        printf("No student information has been entered into the system, display is not possible.\n");
        buffer();
        return;
    }
    printf("=====ID==============Name==========Chinese Score==Math Score==English Score==Total Score=\n");
    for (int i = 0; i < datanum; i++) // 使用全局变量datanum保证输出每一个学生的信息
        display(p, i);
    buffer();
    return;
}
void query_by_ID(INFO *p) // 按学号查找学生信息
{
    if (datanum == 0) // 若系统内不存在学生信息则无法进行查询
    {
        printf("No student information has been entered into the system, queries cannot be performed.\n");
        buffer();
        return;
    }
    printf("Enter student ID you want to query, enter 0 to break.\n"); // 当用户输入0时退出本函数
    while (1)
    {
        int temp, location;
        printf("Please enter student ID:");
        scanf("%d", &temp);
        getchar();     // 将输入末尾的\n吞掉
        if (temp == 0) // 输入0以退出查询
        {
            buffer();
            return;
        }
        location = query_ID_location(p, temp); // 通过query_ID_location(INFO *, int)函数查询ID对应学生位置
        if (location == -1)                    // 若location值为-1则未匹配到学生
        {
            printf("The student was not found.\n");
        }
        else
        {
            printf("The student has been found.\n");
            printf("=====ID==============Name==========Chinese Score==Math Score==English Score==Total Score=\n");
            display(p, location); // 输出对应学生的信息
        }
    }
}
void query_by_highest_grade(INFO *p) // 显示课程最高分的学生信息
{
    char courses[3][10] = {"Chinese", "Math", "English"}, plural[4][4] = {"\0", "s", "is", "are"};
    if (datanum == 0) // 若系统内不存在学生信息则无法进行查询
    {
        printf("No student information has been entered into the system, queries cannot be performed.\n");
        buffer();
        return;
    }
    printf("Enter the corresponding course number, 1 for Chinese, 2 for Math, 3 for English, 0 to break.\n"); // 输入对应课程的编号，1为Chinese，2为Math，3为English
    while (1)
    {
        char choice;
        printf("Please enter the number:");
        scanf("%c", &choice);
        getchar();         // 将输入末尾的\n吞掉
        if (choice == '0') // 输入0以退出查询
        {
            buffer();
            return;
        }
        else if (choice >= '1' && choice <= '3')
        {
            double max = p->score[choice - '1']; // 初始设第一位学生为最高分
            for (int i = 1; i < datanum; i++)    // 使用全局变量datanum保证查询每一个学生的信息
                if ((p + i)->score[choice - '1'] > max)
                    max = (p + i)->score[choice - '1']; // 更新最高分
            int location[1000] = {0}, n = 0;
            for (int i = 0; i < datanum; i++)
                if ((p + i)->score[choice - '1'] == max)
                    location[n++] = i; // 记录所有最高分位置
            printf("The information of the student%s with the highest score in %s %s as below.\n", plural[n > 1], courses[choice - '1'], plural[2 + (n > 1)]);
            printf("=====ID==============Name==========Chinese Score==Math Score==English Score==Total Score=\n");
            for (int i = 0; i < n; i++)
                display(p, location[i]); // 输出所有对应学生的信息
        }
        else
            printf("Please enter a valid number.\n"); // 若用户输入的值非法，进行提示
    }
}
void query_by_highest_total(INFO *p) // 显示总分最高分的学生信息
{
    char plural[4][4] = {"\0", "s", "is", "are"};
    if (datanum == 0) // 若系统内不存在学生信息则无法进行查询
    {
        printf("No student information has been entered into the system, queries cannot be performed.\n");
        buffer();
        return;
    }
    double max = p->total;            // 初始设第一位学生为最高分
    for (int i = 1; i < datanum; i++) // 使用全局变量datanum保证查询每一个学生的信息
        if ((p + i)->total > max)
            max = (p + i)->total; // 更新最高分
    int location[1000] = {0}, n = 0;
    for (int i = 0; i < datanum; i++)
        if ((p + i)->total == max)
            location[n++] = i; // 记录所有最高分位置
    printf("The information of the student%s with the highest total score %s as below.\n", plural[n > 1], plural[2 + (n > 1)]);
    printf("=====ID==============Name==========Chinese Score==Math Score==English Score==Total Score=\n");
    for (int i = 0; i < n; i++)
        display(p, location[i]); // 输出所有对应学生的信息
    buffer();
    return;
}
void sort_by_total(INFO *p) // 按总分升序排序已有学生信息
{
    INFO temp;
    for (int i = 0; i < datanum - 1; i++)
    {
        for (int j = 0; j < datanum - i - 1; j++)
            if ((p + j)->total > (p + j + 1)->total) // 冒泡排序
            {
                temp = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = temp;
            }
    }
    return;
}
void sort_by_ID(INFO *p) // 按ID升序排序已有学生信息
{
    INFO temp;
    for (int i = 0; i < datanum - 1; i++)
    {
        for (int j = 0; j < datanum - i - 1; j++)
            if ((p + j)->id > (p + j + 1)->id) // 冒泡排序
            {
                temp = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = temp;
            }
    }
    return;
}
void sort_by_total_and_display(INFO *p) // 按总分升序排序并输出
{
    if (datanum == 0) // 若系统内不存在学生信息则无法进行排序
    {
        printf("No student information has been entered into the system, sequencing cannot be performed.\n");
        buffer();
        return;
    }
    sort_by_total(p);
    display_all(p);
    sort_by_ID(p); // 重新按ID排序以正确输出操作2、4、5要求的按ID升序排序结果
    return;
}
char UI() // 主UI界面，用户进行操作选择，返回用户的选择值
{
    char choice;
    printf("=========Welcome to use JSC's Grade Management System=========\n"
           "Enter 1 to input student information,\n"
           "Enter 2 to list all student information,\n"
           "Enter 3 to query student information by student ID,\n"
           "Enter 4 to display the student information with the highest score in the course,\n"
           "Enter 5 to display the student information with the highest total score,\n"
           "Enter 6 to output in ascending order by total score,\n"
           "Enter 0 to exit the system.\nPlease enter your choice:"); // 提示用户输入选择值
    scanf("%c", &choice);
    getchar(); // 将choice输入末尾的\n吞掉
    return choice;
}
int main() // 主函数，负责匹配用户的选择值并转入对应函数进行操作
{
    INFO list[1000]; // 其实这个可以定义在全局变量的，省的一天到晚传参，还能避免定义太大导致的栈溢出，但为了展示指针的作用遂作罢
    char choice;
    while (1)
    {
        choice = UI();     // 通过函数UI()得到用户的选择值
        if (choice == '0') // 若输入0则退出整个系统
        {
            printf("Thank you for using this Grade Management System. Looking forward to meeting you again.");
            break;
        }
        else if (choice == '1') // 若输入1则进行学生信息的输入
            input(list);
        else if (choice == '2') // 若输入2则输出所有学生信息
            display_all(list);
        else if (choice == '3') // 若输入3则按学号查找学生
            query_by_ID(list);
        else if (choice == '4') // 若输入4则查找课程最高分学生
            query_by_highest_grade(list);
        else if (choice == '5') // 若输入5则查找总分最高分学生
            query_by_highest_total(list);
        else if (choice == '6') // 若输入6则按总分升序排序并输出
            sort_by_total_and_display(list);
        else
        {
            printf("Please enter a valid selection value.\n"); // 若用户输入的选择值非法，进行提示
            buffer();
        }
    }
    return 0;
}