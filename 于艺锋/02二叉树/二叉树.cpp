#include<iostream>
using namespace std;

class Tree
{
public:
    int num=0;
    Tree *lchild=NULL;
    Tree *rchild=NULL;
};
void build(Tree *T)
{
    int c;
    cin>>c;
    if(c==0)
    {
        T=NULL;
    }
    else
    {
        Tree *s1=new Tree;
        Tree *s2=new Tree;
        T->lchild=s1;
        T->rchild=s2;
        T->num=c;
        build(T->lchild);
        build(T->rchild);
    }
}
void ergodic(Tree *t)
{
    if(t!=NULL)
    {
        cout<<t->num<<' ';
        ergodic(t->lchild);
        ergodic(t->rchild);
    }
}
void insertt(Tree* t,Tree *p)
{
    if(t==NULL)
        t=p;
    else if(p->num<t->num)
        insertt(t->lchild,p);
    else
        insertt(t->rchild,p);
}
int main()
{
    int a,b;
    Tree *T=new Tree;
    cin>>a;
    if(a==1)
    {
        cout<<"ÊäÈë¶þ²æÊ÷"<<endl;
        build(T);
        char d;
        d=T->lchild->num;
        cout<<d<<endl;
        ergodic(T);
    }
    cin>>b;
    if(b==2)
    {
        cout<<"²åÈë"<<endl;
        int e;
        cin>>e;
        Tree *s=new Tree;
        s->num=e;
        insertt(T,s);
        ergodic(T);
    }
    return 0;
}
