#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
void display();
void player1();
void keyposition(),move();
void villain(),villain1(),villain2();
void brick1();
int temp,temp1,temp2,temp3,temp4,temp5,t1,t2,t3,t4,t5,t6,t7,t8;
int B,f,v,n,mid,i,j,k,l,p4,p3,k3,k4,v3,v4,v5,v6,v8,v9,b2[10],b3[10],flag=0,h=99;
char m,a[26][26],p1[2],k1[2],v1[2],v2[2],b1[2],v7[2];
char c[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
void display()
{
clrscr();
for(i=0;i<n;i++)
{
 for(j=0;j<n;j++)
 {if(i==0||j==0)
   {for(k=0;k<i;k++)
     {a[i][j]=c[k];
     a[j][i]=c[k];
   }}
   else{};}}
 for(i=1;i<n;i++)
 {for(j=1;j<n;j++)
 {
  if(i==1||j==1||i==n-1||j==n-1||(j%2==1&&i%2==1))
  {a[i][j]='*';}
  else{a[i][j]=' ';}
 }
 }
 a[0][1]='A';a[1][0]='A';
 if(a[p3][p4]=='*')
 {cout<<"\n\n\n\n\t\t....Sorry your move went wrong....";getch();exit(0);}
 a[p3][p4]='P';
 a[k3][k4]='K';
 a[v3][v4]='V';
 a[v5][v6]='V';
 a[v8][v9]='V';
 for(i=0;i<B;i++)
 {a[b2[i]][b3[i]]='B';}
if(temp5==1)
 {if(a[temp1+1][temp2]=='B'){a[temp1+1][temp2]=' ';a[temp1][temp2]=' ';t1=temp1+1;t2=temp2;}
 else if(a[temp1][temp2+1]=='B'){a[temp1][temp2+1]=' ';a[temp1][temp2]=' ';t3=temp1;t4=temp2+1;}
 else if(a[temp1-1][temp2]=='B'){a[temp1-1][temp2]=' ';a[temp1][temp2]=' ';t5=temp1-1;t6=temp2;}
 else if(a[temp1][temp2-1]=='B'){a[temp1][temp2-1]=' ';a[temp1][temp2]=' ';t7=temp1;t8=temp2-1;}
 else if(a[temp1+1][temp2]=='V'){a[temp1+1][temp2]=' ';a[temp1][temp2]=' ';t1=temp1+1;t2=temp2;}
 else if(a[temp1][temp2+1]=='V'){a[temp1][temp2+1]=' ';a[temp1][temp2]=' ';t3=temp1;t4=temp2+1;}
 else if(a[temp1-1][temp2]=='V'){a[temp1-1][temp2]=' ';a[temp1][temp2]=' ';t5=temp1-1;t6=temp2;}
 else if(a[temp1][temp2-1]=='V'){a[temp1][temp2-1]=' ';a[temp1][temp2]=' ';t7=temp1;t8=temp2-1;}
 else {a[temp1][temp2]=' ';}temp=0;temp5=0;temp4=0;temp3=0;temp2=0;temp1=0;}
 if(temp==1)
 {a[temp1][temp2]='X';temp4=0;temp5=1;}
 if(a[p3][p4]=='K')
 {cout<<"Win the match";getch();exit(0);}
 if(temp1==0){a[t1][t2]=' ';a[t3][t4]=' ';a[t5][t6]=' ';a[t7][t8]=' ';}
 a[0][0]=' ';
 for(i=0;i<n;i++)
 {for(j=0;j<n;j++)
 {cout<<a[i][j]<<"  ";}
 cout<<"\n";}
 if(a[p3][p4]=='V')
 {
 clrscr();
 cout<<"Misson terminated";getch();exit(0);}

}
void player1()
{
cin>>p1;
for(i=0;i<1;i++)
{for(j=0;j<n;j++)
{
 if(p1[0]==a[i][j])
 {
 p3=j;
 }}}
for(i=0;i<n;i++)
{for(j=0;j<1;j++)
{if(p1[1]==a[i][j])
{p4=i;}}}
}
void keyposition()
{
cin>>k1;
for(i=0;i<1;i++)
{for(j=0;j<n;j++)
{
 if(k1[0]==a[i][j])
 {
 k3=j;
 }}}
for(i=0;i<n;i++)
{for(j=0;j<1;j++)
{if(k1[1]==a[i][j])
{k4=i;}}}
}
void villain()
{
cin>>v1;
for(i=0;i<1;i++)
{for(j=0;j<n;j++)
{
 if(v1[0]==a[i][j])
 {
 v3=j;
 }}}
for(i=0;i<n;i++)
{for(j=0;j<1;j++)
{if(v1[1]==a[i][j])
{v4=i;}}}
}
void villain1()
{
cin>>v2;
for(i=0;i<1;i++)
{for(j=0;j<n;j++)
{
 if(v2[0]==a[i][j])
 {
 v5=j;
 }}}
for(i=0;i<n;i++)
{for(j=0;j<1;j++)
{if(v2[1]==a[i][j])
{v6=i;}}}
}
void villain2()
{
cin>>v7;
for(i=0;i<1;i++)
{for(j=0;j<n;j++)
{
 if(v7[0]==a[i][j])
 {
 v8=j;
 }}}
for(i=0;i<n;i++)
{for(j=0;j<1;j++)
{if(v7[1]==a[i][j])
{v9=i;}}}
}
int main()
{
cin>>n;
display();
player1();
keyposition();
cin>>v;
switch(v)
{
case 1:
villain();
break;
case 2:
villain();
villain1();
break;
case 3:
villain();
villain1();
villain2();
break;
default:
break;
}
cin>>B;
brick1();
display();
move();
display();
return 0;
}
void brick1()
{
for(f=0;f<B;f++)
{
cin>>b1;
for(i=0;i<1;i++)
{for(j=0;j<n;j++)
{
 if(b1[0]==a[i][j])
 {
 b2[flag]=j;
 }}}
for(i=0;i<n;i++)
{for(j=0;j<1;j++)
{if(b1[1]==a[i][j])
{b3[flag]=i;}}}
flag++;
}}
void move()
{
for(i=0;i<h;i++)
{cin>>m;
switch(m)
{
case 'W':
  p3=p3-1;display();
  if(temp4==1)
  {temp=1;display();}
  break;
case 'S':
  p3=p3+1;display();
  if(temp4==1)
  {temp=1;display();}break;
case 'A':
  p4=p4-1;display();
  if(temp4==1)
  {temp=1;display();}break;
case 'D':
  p4=p4+1;display();
  if(temp4==1)
  {temp=1;display();}break;
case 'Q':
  p3=p3-1;p4=p4-1;display();
  if(temp4==1)
  {temp=1;display();}break;
case 'Z':
  p3=p3+1;p4=p4-1;display();
  if(temp4==1)
  {temp=1;display();}break;
case 'E':
  p3=p3-1;p4=p4+1;display();
  if(temp4==1)
  {temp=1;display();}break;
case 'C':
  p4=p4+1;p3=p3+1;display();
  if(temp4==1)
  {temp=1;display();}break;
case 'X':
  temp1=p3;temp2=p4;temp4=1;
  break;
default:
 i=100;
 break;
 } }
}