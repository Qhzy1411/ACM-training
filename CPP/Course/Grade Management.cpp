// 作者：金施成  阳明2024级计算机科学与技术2班  246001340
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
    printf("按下回车键以继续...");
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
    printf("请录入学生信息，在ID栏输入0以结束录入\n"); // 当用户在ID栏输入0时退出本函数
    while (1)
    {
        printf("=====学生 %d=====\n", datanum + 1);
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
            printf("这个ID已经存在于系统中，您不能录入重复的ID\n");
            continue; // 重新输入
        }
        (p + datanum)->id = temp; // 将缓冲的ID值存入
        printf("姓名:");
        fgets((p + datanum)->name, sizeof((p + datanum)->name), stdin); // 防止名字中带有空格，使用fgets输入姓名
        (p + datanum)->name[strcspn((p + datanum)->name, "\n")] = '\0'; // 将使用fgets得到的姓名的末尾\n替换为\0
        printf("三门课程成绩(语文 数学 英语):");
        for (int i = 0; i < 3; i++)
            scanf("%lf", &(p + datanum)->score[i]);                                                         // 输入三项成绩
        (p + datanum)->total = (p + datanum)->score[0] + (p + datanum)->score[1] + (p + datanum)->score[2]; // 直接计算总分
        datanum++;                                                                                          // 完整输入了一名学生的信息，学生总数+1
    }
}
void display(INFO *p, int n) // 输出单个学生的信息
{
    printf("%-12d|%-22s|%8.1f|%8.1f|%8.1f|%8.1f|\n",
           (p + n)->id, (p + n)->name, (p + n)->score[0], (p + n)->score[1], (p + n)->score[2], (p + n)->total); // 对齐不同长度数据
    return;
}
void display_all(INFO *p) // 输出全部学生的信息
{
    if (datanum == 0) // 若系统内不存在学生信息则无法输出
    {
        printf("该系统暂未录入学生信息，输出功能暂不可用\n");
        buffer();
        return;
    }
    printf("-----ID-----|---------姓名---------|--语文--|--数学--|--英语--|--总分--|\n");
    for (int i = 0; i < datanum; i++) // 使用全局变量datanum保证输出每一个学生的信息
        display(p, i);
    buffer();
    return;
}
void query_by_ID(INFO *p) // 按学号查找学生信息
{
    if (datanum == 0) // 若系统内不存在学生信息则无法进行查询
    {
        printf("该系统暂未录入学生信息，查询功能暂不可用\n");
        buffer();
        return;
    }
    printf("输入您想查询的ID值，输入0以退出查询\n"); // 当用户输入0时退出本函数
    while (1)
    {
        int temp, location;
        printf("请输入学生ID:");
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
            printf("未找到该学生\n");
        }
        else
        {
            printf("该学生信息如下\n");
            printf("-----ID-----|---------姓名---------|--语文--|--数学--|--英语--|--总分--|\n");
            display(p, location); // 输出对应学生的信息
        }
    }
}
void query_by_highest_grade(INFO *p) // 显示课程最高分的学生信息
{
    char courses[3][10] = {"语文", "数学", "英语"};
    if (datanum == 0) // 若系统内不存在学生信息则无法进行查询
    {
        printf("该系统暂未录入学生信息，查询功能暂不可用\n");
        buffer();
        return;
    }
    printf("请输入对应课程编号，输入1以显示语文最高分，输入2以显示数学最高分，输入3以显示英语最高分，输入0以退出显示\n"); // 输入对应课程的编号，1为Chinese，2为Math，3为English
    while (1)
    {
        char choice;
        printf("请输入编号:");
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
            printf("%s最高分学生信息如下\n", courses[choice - '1']);
            printf("-----ID-----|---------姓名---------|--语文--|--数学--|--英语--|--总分--|\n");
            for (int i = 0; i < n; i++)
                display(p, location[i]); // 输出所有对应学生的信息
        }
        else
            printf("请输入有效编号值\n"); // 若用户输入的值非法，进行提示
    }
}
void query_by_highest_total(INFO *p) // 显示总分最高分的学生信息
{
    if (datanum == 0) // 若系统内不存在学生信息则无法进行查询
    {
        printf("该系统暂未录入学生信息，查询功能暂不可用\n");
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
    printf("总分最高分学生信息如下\n");
    printf("-----ID-----|---------姓名---------|--语文--|--数学--|--英语--|--总分--|\n");
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
        printf("该系统暂未录入学生信息，排序功能暂不可用\n");
        buffer();
        return;
    }
    sort_by_total(p);
    display_all(p);
    sort_by_ID(p); // 重新按ID排序以正确输出操作3、5、6要求的按ID升序排序结果
    return;
}
void modify(INFO *p) // 修改已有学生信息
{
    if (datanum == 0) // 若系统内不存在学生信息则无法进行查询
    {
        printf("该系统暂未录入学生信息，修改功能暂不可用\n");
        buffer();
        return;
    }
    printf("输入您想修改信息的ID值，输入0以退出修改\n"); // 当用户输入0时退出本函数
    while (1)
    {
        int temp, location;
        printf("请输入学生ID:");
        scanf("%d", &temp);
        getchar();     // 将输入末尾的\n吞掉
        if (temp == 0) // 输入0以退出查询
        {
            sort_by_ID(p); // ID可能被修改，重新排序
            buffer();
            return;
        }
        location = query_ID_location(p, temp); // 通过query_ID_location(INFO *, int)函数查询ID对应学生位置
        if (location == -1)                    // 若location值为-1则未匹配到学生
        {
            printf("未找到该学生\n");
        }
        else
        {
            printf("该学生信息如下\n");
            printf("-----ID-----|---------姓名---------|--语文--|--数学--|--英语--|--总分--|\n");
            display(p, location); // 输出对应学生的信息
            printf("请输入该学生修改后信息\n");
            printf("ID:");
            scanf("%d", &temp);
            getchar(); // 将ID输入末尾的\n吞掉
            (p + location)->id = temp;
            printf("姓名:");
            fgets((p + location)->name, sizeof((p + location)->name), stdin); // 防止名字中带有空格，使用fgets输入姓名
            (p + location)->name[strcspn((p + location)->name, "\n")] = '\0'; // 将使用fgets得到的姓名的末尾\n替换为\0
            printf("三门课程成绩(语文 数学 英语):");
            for (int i = 0; i < 3; i++)
                scanf("%lf", &(p + location)->score[i]);                                                            // 输入三项成绩
            (p + location)->total = (p + location)->score[0] + (p + location)->score[1] + (p + location)->score[2]; // 重新计算总分
        }
    }
}
char UI() // 主UI界面，用户进行操作选择，返回用户的选择值
{
    char choice;
    printf("=========欢迎使用本成绩管理系统=========\n"
           "输入1以录入学生信息,\n"
           "输入2以修改已有学生信息,\n"
           "输入3以显示全部学生信息,\n"
           "输入4以通过学生ID查找学生信息,\n"
           "输入5以显示单项课程最高分的学生信息,\n"
           "输入6以显示总分最高分的学生信息,\n"
           "输入7以通过总分升序显示所有学生信息,\n"
           "输入0以退出本系统\n请输入您的选择:"); // 提示用户输入选择值
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
            printf("感谢您使用本成绩系统，期待我们的下一次相遇");
            break;
        }
        else if (choice == '1') // 若输入1则进行学生信息的输入
            input(list);
        else if (choice == '2') // 若输入2则修改已有学生信息
            modify(list);
        else if (choice == '3') // 若输入3则输出所有学生信息
            display_all(list);
        else if (choice == '4') // 若输入4则按学号查找学生
            query_by_ID(list);
        else if (choice == '5') // 若输入5则查找课程最高分学生
            query_by_highest_grade(list);
        else if (choice == '6') // 若输入6则查找总分最高分学生
            query_by_highest_total(list);
        else if (choice == '7') // 若输入7则按总分升序排序并输出
            sort_by_total_and_display(list);
        else
        {
            printf("请输入有效选择值\n"); // 若用户输入的选择值非法，进行提示
            buffer();
        }
    }
    return 0;
}