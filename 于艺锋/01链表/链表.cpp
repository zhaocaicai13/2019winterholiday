#include<iostream>
#include<string>
using namespace std;

class L
{
public:
    string A;
    L *next;
};
void increase(L *Z)
{
    L *p=Z;
    L *N=new L;
    N->next=NULL;
    while(p->next)
    {
        p=p->next;
    }
    p->next=N;
    string m;
    cout<<"请输入新增链表的内容：";
    cin>>m;
    cout<<endl;
    N->A=m;
    cout<<"添加成功！"<<endl;
}
void deletee(L *Z)
{
    L *p=Z;
    string m;
    cout<<"请输入您要删除链表的内容：";
    cin>>m;
    while(p->next->A!=m)
    {
        p=p->next;
    }
    p->next=p->next->next;
    cout<<endl;
    cout<<"删除成功！"<<endl;
}
void change(L *Z)
{
    L *p=Z;
    string m;
    cout<<"请输入修改之前链表的内容：";
    cin>>m;
    while(p->next->A!=m)
    {
        p=p->next;
    }
    string nm;
    cout<<"请输入修改之后链表的内容：";
    cin>>nm;
    p->next->A=nm;
    cout<<endl;
    cout<<"修改成功！"<<endl;
}
void show(L *Z)
{
    L *p=Z;
    cout<<"储存内容如下："<<endl;
    while(p->next)
    {
        cout<<p->next->A<<endl;
        p=p->next;
    }
    cout<<"显示完成！"<<endl;
}
int main()
{
    L *Z=new L;
    Z->next=NULL;
    int n;
    for(;;)
    {
        cout<<"请选择你对链表的操作："<<endl;
        cout<<"1->增加链表"<<endl;
        cout<<"2->删除链表"<<endl;
        cout<<"3->修改链表"<<endl;
        cout<<"4->显示链表"<<endl;
        cout<<"0->结束"<<endl;
        cout<<"请输入："<<endl;
        cin>>n;
        cout<<endl;
        if(n==1)
        {
            increase(Z);
        }
        if(n==2)
        {
            deletee(Z);
        }
        if(n==3)
        {
            change(Z);
        }
        if(n==4)
        {
            show(Z);
        }
        if(n==0)
        {
            break;
        }
        if(n>4||n<0)
        {
            cout<<"<<<无此命令，请重新输入>>>"<<endl;
            cout<<endl;
        }
    }
    return 0;
}
