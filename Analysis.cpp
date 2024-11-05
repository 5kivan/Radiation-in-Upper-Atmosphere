#include <cmath>
#include <iostream>
#include <stdio.h>
#include<stdlib.h>
#include <iomanip>
#include <cstdlib>
#include <fstream>
#include <iso646.h>
#include <math.h>
using namespace std;

void main() {
	int g=17;
	setlocale (LC_ALL, "RUS");
	int SIZE2=543; 
	ifstream f("D:\\ivan\\Vernov_data\\ProfileData\\20141017035913.txt");	
	int numberOfString=0,n=0;
    while (!f.eof()) if (f.get()=='\n') numberOfString++;  
    cout<<numberOfString<<endl;	
//system ("pause");
	f.clear();
	f.seekg(0);
 n=numberOfString;
 //ofstream dur;
//dur.open("D:\\ivan\\Vernov_data\\finale\\результаты проги\\dur.txt", ios::out);
    double **a=new double *[n];     
    for (int i=0; i<n; i++)
    {
		a[i]=new double [SIZE2];
	} 
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<SIZE2; j++) //+1
		{		 
			f>>a[i][j];
		}
    } 
/*
for (int i=242; i<244; i++)
    {
        for (int j=0; j<SIZE2; j++) //+1
		{		 
			dur<<a[i][j]<<"\t";
		}
    } 


dur.close();*/
    f.close();
/*	
double **od=new double *[n];     
    for (int i=0; i<n; i++)
    {
		od[i]=new double [j];
	} 

*/

ofstream inf;
inf.open("D:\\ivan\\Vernov_data\\finale\\результаты проги\\proverka.txt", ios::out);
//подсчет среднего и логарифма интенсивности
double I,s=0,b=256;
 for (int i=0; i<n; i++)
 {
	 //s=36;
  for (int j=262; j < 518; j++)
  { 
   s+=a[i][j]/(b);

  }
  cout <<s<<"/t";
  I=(s*9.2*powl(10,25))/powl(a[i][6],8.3);
  double logI;
  logI=log10(I);
  inf<<logI<<"\t"<<a[i][519]<<"\t"<<a[i][520]<<"\t"<<a[i][531]<<"\t"<<a[i][525]<<"\t"<<a[i][528]<<"\t";
    inf<<endl; 
	s=0;
  } 
 inf.close();
/*
ofstream expos;
expos.open("D:\\ivan\\Vernov_data\\finale\\результаты проги\\expos.txt", ios::out);
 for (int i=0; i<n; i++)
 {
	
  expos<<a[i][0]<<"\t"<<a[i][1]<<"\t"<<a[i][2]<<"\t"<<a[i][3]<<"\t"<<a[i][4]<<"\t"<<a[i][519]<<"\t"<<a[i][520]<<"\t"<<a[i][531]<<"\t"<<a[i][525]<<"\t"<<a[i][528]<<"\t";
    expos<<endl; 
  } 
 expos.close();
*/




ifstream f1("D:\\ivan\\Vernov_data\\finale\\результаты проги\\proverka.txt");
f1.clear();
	f1.seekg(0);
    double **a1=new double *[n];     
    for (int i=0; i<n; i++)
    {
		a1[i]=new double [6];
	} 
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<6; j++) //+1
		{f1>>a1[i][j];
		//cout << "c1"<<"\t"<<a1[i][0]<<"\t"<<i<<"\t";
		}
    } 
	f1.close();







ofstream udo;
udo.open("D:\\ivan\\Vernov_data\\finale\\результаты проги\\udobstvo.txt", ios::out);
//подсчет среднего и логарифма интенсивности
 for (int i=0; i<n; i++)
 {
	
  udo<<a1[i][1]<<"\t"<<a1[i][0]<<"\t";
    udo<<endl; 
  } 
 udo.close();


	int num; 
    cout << "введите длину скользящей суммы ";
    cin >> num;

		double **s1=new double *[n];     
    for (int h=0; h<n; h++)
    {
		s1[h]=new double [1];
	} 
	
	double **s11=new double *[n];     
    for (int h=0; h<n; h++)
    {
		s11[h]=new double [1];
	}
int i=0,h,k=0,j=0;
double sum;
 
while (k<n-num)
{ 
	for(h=0; h<n-num; h++)
	{ sum=0;
		for(i=k; i<k+num;i++)
		{   
			sum=sum+a1[i][0];
			if (i>k+num)
			{
				break;
			}
		}
		s1[h][0]=sum/num;
		k++;
	}
	
}

ofstream z2;
 //вывод массива в файл
//открываем файл в режиме записи,
//режим ios::out устанавливается по умолчанию
z2.open("D:\\ivan\\Vernov_data\\finale\\результаты проги\\z2.txt", ios::out);
//inf.open("proverka.txt", ios::out);

for (int h=0; h<n-num; h++)
 {
     z2<<s1[h][0]<<"\t";
    z2<<endl;
  }
z2.close();
double  standartfon,Intensivfon,min;
int m=0; 
min = s1[0][0];
        for(h = 0; h < n-num; h++) 
		{
            if (min>s1[h][0])
			{ min=s1[h][0];
			m=h;
			}
        }
		Intensivfon=min;
cout<<min<<"\t"<<m<<"\t";


int q=0;
		double **a111=new double *[num];     
    for (int q=0; q<num; q++)
    {
		a111[q]=new double [1];
	} 
	double **m0=new double *[num];     
    for (int q=0; q<num; q++)
    {
		m0[q]=new double [1];
	} 
	double **m00=new double *[num];     
    for (int q=0; q<num; q++)
    {
		m00[q]=new double [1];
	} 

	double m1=0,m2,m3;
	
for (q=0; q<num;q++)
{
for (i=m; i<m+num;i++)
{
	 m00[q][0]=a1[i][0]-Intensivfon;
	 m3=m00[q][0];
            m0[q][0]=m3*m3;
			m1+=m0[q][0];
			m2=(m1/num)/num;
        standartfon=sqrt(m2);
        //cout << "m00"<<m00[q][0]<<"\t";
		}
}

cout<<" min"<<min<<"\t"<<standartfon<<"\t"<<endl;//


		double **b1=new double *[n];     
    for (int i=0; i<n; i++)
    {
		b1[i]=new double [4];
	} 
for (int i=0; i<numberOfString; i++)
 {
  for (int j=0; j < 1; j++)
     b1[i][0]=a1[i][0]-min;
     b1[i][1]=a1[i][1];
	 b1[i][2]=a1[i][2];
	 b1[i][3]=a1[i][3];
  }
//северный терминатор
int p;
double min1 = b1[0][0];
for(i = 0; i < 76; i++) 
		{
            if (min1>b1[i][0])
			{ min1=b1[i][0];
			p=i;
			}
        }





ofstream b11;
b11.open("D:\\ivan\\Vernov_data\\finale\\результаты проги\\b.txt", ios::out);
for (int i=p; i<n; i++)
 {
  for (int j=0; j < 4; j++)
     b11<<b1[i][j]<<"\t";
    b11<<endl;
  }
b11.close();
double **b2=new double *[n];     
    for (int i=0; i<n; i++)
    {
		b2[i]=new double [4];
	} 
for (int i=p; i<n; i++)
 {
  for (int j=0; j < 1; j++)
  if (b1[i][0]>15*standartfon)
			{ b2[i][0]=b1[i][0];
              b2[i][1]=b1[i][1];
			  b2[i][2]=b1[i][2];
			  b2[i][3]=b1[i][3];
			}
  else {
              b2[i][0]=0;
              b2[i][1]=0;
			  b2[i][2]=0;
			  b2[i][3]=0;
  }
  }


for (int i=0; i < p; i++)
 {
	  for (int j=0; j<1; j++)
	  {
		 b2[i][0]=0;
         b2[i][1]=0;
		 b2[i][2]=0;
		 b2[i][3]=0;
	  }
}
// южный терминатор
for (int i=0; i < n; i++)
 {
	  for (int j=0; j<1; j++)
	  { if(b2[i][1]>60)
	  {b2[i][0]=0;
	  b2[i][1]=0;
	  b2[i][2]=0;
	  b2[i][3]=0;}
	  }
}
ofstream b12;
b12.open("D:\\ivan\\Vernov_data\\finale\\результаты проги\\b2.txt", ios::out);
for (int i=0; i<n; i++)
 {
  for (int j=0; j < 4; j++)
     b12<<b2[i][j]<<"\t";
    b12<<endl;
  }
b12.close();


 //обработка по другому

int chislo=8; 
   /* cout << "введите кол-во элементов ";
    cin >> chislo;*/

		double **ch=new double *[n];     
    for (int i=0; i<n; i++)
    {
		ch[i]=new double [6];
	} 
	
	double **ch1=new double *[n];     
    for (int i1=0; i1<n; i1++)
    {
		ch1[i1]=new double [40];
	}

for(i=8; i<n-8; i++)
{  sum=0;
			sum=(-8*a1[i-8][0]-7*a1[i-7][0]-6*a1[i-6][0]-5*a1[i-5][0]-4*a1[i-4][0]-3*a1[i-3][0]-2*a1[i-2][0]-1*a1[i-1][0]+0*a1[i][0]+1*a1[i+1][0]+2*a1[i+2][0]+3*a1[i+3][0]+4*a1[i+4][0]+5*a1[i+5][0]+6*a1[i+6][0]+7*a1[i+7][0]+8*a1[i+8][0]);
			//cout << sum<<"\t"<< i<<"\t";
		ch[i][2]=sum;	
		ch[i][1]=a1[i][0];
		ch[i][0]=a1[i][1];
}

for (int i=8; i < n-8; i++)
 {
	 if (ch[i+1][2]*ch[i][2]<=0 and ch[i+1][2]<=0)
	  {
		   ch[i+1][3]=1;
	  }
	 else {ch[i+1][3]=0;}
}

//min
for (int i=8; i < n-8; i++)
 {
	 if (ch[i+1][2]*ch[i][2]<=0 and ch[i+1][2]>=0)
	  {
		   ch[i+1][6]=1;
	  }
	 else {ch[i+1][6]=0;}
	 
}





double slope;
cout << "введите slope порог ";
    cin >> slope;


for (int i=8; i < n-8; i++)
 { 
	 if (ch[i][2]-ch[i+1][2]>slope)
	  {
		   ch[i+1][4]=1;
	  }
	 else {ch[i+1][4]=0;}
	
//cout<<ch[i][0]<<"\t";
 
}
//system ("pause");

/*
double **ch12=new double *[n];     
    for (int e=0; e<n; e++)
    {
		ch12[e]=new double [6];
	}

int e=0;
for (i=8; i < n-8; i++)
{ 
ch12[e][0]=a1[i][0];

++e;
}

for (i=0; i < n; i++)
{
	for(int e=0; e < n; e++)
	{
		if(ch[i][6]==1 and ch[i][1]>ch12[e][0])
		{
			ch[i][5]=ch[i][1];
		}
		else{ch[i][5]=0;}
	}
cout<<ch[i][5]<<"\t"<<i<<"\t";

}

*/





double **ch2=new double *[n];     
    for (int i=0; i<n; i++)
    {
		ch2[i]=new double [5];
	}

	double **peak=new double *[n];     
    for (int i=0; i<n; i++)
    {
		peak[i]=new double [40];
	}

double t1=17;// меняется в зависимости от кол-ва определенных коэф. ниже 
double den,w1,w2,w3,height,position,width,x1,x2,x3;
for (int i=8; i < n-8; i++)
 {
	  if (ch[i][3]==1 and ch[i][4]==1)
			{ 
				ch2[i][0]=ch[i][0];
				ch2[i][1]=ch[i][1];
				ch2[i][2]=ch[i][2];
				ch2[i][3]=ch[i][3];
				ch2[i][4]=ch[i][4];
				ch2[i][5]=i;
				//cout << ch2[i][0]<<"\t"<< ch2[i][1]<<"\t"<< ch2[i][2]<<"\t"<< ch2[i][3]<<"\t"<< ch2[i][4]<<"\t"<< ch2[i][5]<<"\t";	
				
// коэффециенты
			 
ch1[0][0]=-8;
ch1[1][0]=-7;
ch1[2][0]=-6;
ch1[3][0]=-5;
ch1[4][0]=-4;
ch1[5][0]=-3;
ch1[6][0]=-2;
ch1[7][0]=-1;
ch1[8][0]=0;
ch1[9][0]=1;
ch1[10][0]=2;
ch1[11][0]=3;
ch1[12][0]=4;
ch1[13][0]=5;
ch1[14][0]=6;
ch1[15][0]=7;
ch1[16][0]=8;
//x
ch1[0][1]=a1[i-8][1];
ch1[1][1]=a1[i-7][1];
ch1[2][1]=a1[i-6][1];
ch1[3][1]=a1[i-5][1];
ch1[4][1]=a1[i-4][1];
ch1[5][1]=a1[i-3][1];
ch1[6][1]=a1[i-2][1];
ch1[7][1]=a1[i-1][1];
ch1[8][1]=a1[i][1];
ch1[9][1]=a1[i+1][1];
ch1[10][1]=a1[i+2][1];
ch1[11][1]=a1[i+3][1];
ch1[12][1]=a1[i+4][1];
ch1[13][1]=a1[i+5][1];
ch1[14][1]=a1[i+6][1];
ch1[15][1]=a1[i+7][1];
ch1[16][1]=a1[i+8][1];
//ln(y)
ch1[0][2]=log(a1[i-8][0]);
ch1[1][2]=log(a1[i-7][0]);
ch1[2][2]=log(a1[i-6][0]);
ch1[3][2]=log(a1[i-5][0]);
ch1[4][2]=log(a1[i-4][0]);
ch1[5][2]=log(a1[i-3][0]);
ch1[6][2]=log(a1[i-2][0]);
ch1[7][2]=log(a1[i-1][0]);
ch1[8][2]=log(a1[i][0]);
ch1[9][2]=log(a1[i+1][0]);
ch1[10][2]=log(a1[i+2][0]);
ch1[11][2]=log(a1[i+3][0]);
ch1[12][2]=log(a1[i+4][0]);
ch1[13][2]=log(a1[i+5][0]);
ch1[14][2]=log(a1[i+6][0]);
ch1[15][2]=log(a1[i+7][0]);
ch1[16][2]=log(a1[i+8][0]);
//x*y
ch1[0][3]=ch1[0][2]*ch1[0][1];
ch1[1][3]=ch1[1][2]*ch1[1][1];
ch1[2][3]=ch1[2][2]*ch1[2][1];
ch1[3][3]=ch1[3][2]*ch1[3][1];
ch1[4][3]=ch1[4][2]*ch1[4][1];
ch1[5][3]=ch1[5][2]*ch1[5][1];
ch1[6][3]=ch1[6][2]*ch1[6][1];
ch1[7][3]=ch1[7][2]*ch1[7][1];
ch1[8][3]=ch1[8][2]*ch1[8][1];
ch1[9][3]=ch1[9][2]*ch1[9][1];
ch1[10][3]=ch1[10][2]*ch1[10][1];
ch1[11][3]=ch1[11][2]*ch1[11][1];
ch1[12][3]=ch1[12][2]*ch1[12][1];
ch1[13][3]=ch1[13][2]*ch1[13][1];
ch1[14][3]=ch1[14][2]*ch1[14][1];
ch1[15][3]=ch1[15][2]*ch1[15][1];
ch1[16][3]=ch1[16][2]*ch1[16][1];
// x*x
ch1[0][4]=ch1[0][1]*ch1[0][1];
ch1[1][4]=ch1[1][1]*ch1[1][1];
ch1[2][4]=ch1[2][1]*ch1[2][1];
ch1[3][4]=ch1[3][1]*ch1[3][1];
ch1[4][4]=ch1[4][1]*ch1[4][1];
ch1[5][4]=ch1[5][1]*ch1[5][1];
ch1[6][4]=ch1[6][1]*ch1[6][1];
ch1[7][4]=ch1[7][1]*ch1[7][1];
ch1[8][4]=ch1[8][1]*ch1[8][1];
ch1[9][4]=ch1[9][1]*ch1[9][1];
ch1[10][4]=ch1[10][1]*ch1[10][1];
ch1[11][4]=ch1[11][1]*ch1[11][1];
ch1[12][4]=ch1[12][1]*ch1[12][1];
ch1[13][4]=ch1[13][1]*ch1[13][1];
ch1[14][4]=ch1[14][1]*ch1[14][1];
ch1[15][4]=ch1[15][1]*ch1[15][1];
ch1[16][4]=ch1[16][1]*ch1[16][1];
//x*x*x
ch1[0][5]=ch1[0][1]*ch1[0][1]*ch1[0][1];
ch1[1][5]=ch1[1][1]*ch1[1][1]*ch1[1][1];
ch1[2][5]=ch1[2][1]*ch1[2][1]*ch1[2][1];
ch1[3][5]=ch1[3][1]*ch1[3][1]*ch1[3][1];
ch1[4][5]=ch1[4][1]*ch1[4][1]*ch1[4][1];
ch1[5][5]=ch1[5][1]*ch1[5][1]*ch1[5][1];
ch1[6][5]=ch1[6][1]*ch1[6][1]*ch1[6][1];
ch1[7][5]=ch1[7][1]*ch1[7][1]*ch1[7][1];
ch1[8][5]=ch1[8][1]*ch1[8][1]*ch1[8][1];
ch1[9][5]=ch1[9][1]*ch1[9][1]*ch1[9][1];
ch1[10][5]=ch1[10][1]*ch1[10][1]*ch1[10][1];
ch1[11][5]=ch1[11][1]*ch1[11][1]*ch1[11][1];
ch1[12][5]=ch1[12][1]*ch1[12][1]*ch1[12][1];
ch1[13][5]=ch1[13][1]*ch1[13][1]*ch1[13][1];
ch1[14][5]=ch1[14][1]*ch1[14][1]*ch1[14][1];
ch1[15][5]=ch1[15][1]*ch1[15][1]*ch1[15][1];
ch1[16][5]=ch1[16][1]*ch1[16][1]*ch1[16][1];
//x*x*x*x
ch1[0][6]=ch1[0][1]*ch1[0][1]*ch1[0][1]*ch1[0][1];
ch1[1][6]=ch1[1][1]*ch1[1][1]*ch1[1][1]*ch1[1][1];
ch1[2][6]=ch1[2][1]*ch1[2][1]*ch1[2][1]*ch1[2][1];
ch1[3][6]=ch1[3][1]*ch1[3][1]*ch1[3][1]*ch1[3][1];
ch1[4][6]=ch1[4][1]*ch1[4][1]*ch1[4][1]*ch1[4][1];
ch1[5][6]=ch1[5][1]*ch1[5][1]*ch1[5][1]*ch1[5][1];
ch1[6][6]=ch1[6][1]*ch1[6][1]*ch1[6][1]*ch1[6][1];
ch1[7][6]=ch1[7][1]*ch1[7][1]*ch1[7][1]*ch1[7][1];
ch1[8][6]=ch1[8][1]*ch1[8][1]*ch1[8][1]*ch1[8][1];
ch1[9][6]=ch1[9][1]*ch1[9][1]*ch1[9][1]*ch1[9][1];
ch1[10][6]=ch1[10][1]*ch1[10][1]*ch1[10][1]*ch1[10][1];
ch1[11][6]=ch1[11][1]*ch1[11][1]*ch1[11][1]*ch1[11][1];
ch1[12][6]=ch1[12][1]*ch1[12][1]*ch1[12][1]*ch1[12][1];
ch1[13][6]=ch1[13][1]*ch1[13][1]*ch1[13][1]*ch1[13][1];
ch1[14][6]=ch1[14][1]*ch1[14][1]*ch1[14][1]*ch1[14][1];
ch1[15][6]=ch1[15][1]*ch1[15][1]*ch1[15][1]*ch1[15][1];
ch1[16][6]=ch1[16][1]*ch1[16][1]*ch1[16][1]*ch1[16][1];
//x^2*ln(y)
ch1[0][7]=ch1[0][4]*ch1[0][2];
ch1[1][7]=ch1[1][4]*ch1[1][2];0;
ch1[2][7]=ch1[2][4]*ch1[2][2];0;
ch1[3][7]=ch1[3][4]*ch1[3][2];0;
ch1[4][7]=ch1[4][4]*ch1[4][2];
ch1[5][7]=ch1[5][4]*ch1[5][2];
ch1[6][7]=ch1[6][4]*ch1[6][2];
ch1[7][7]=ch1[7][4]*ch1[7][2];
ch1[8][7]=ch1[8][4]*ch1[8][2];
ch1[9][7]=ch1[9][4]*ch1[9][2];
ch1[10][7]=ch1[10][4]*ch1[10][2];
ch1[11][7]=ch1[11][4]*ch1[11][2];
ch1[12][7]=ch1[12][4]*ch1[12][2];
ch1[13][7]=ch1[13][4]*ch1[13][2];
ch1[14][7]=ch1[14][4]*ch1[14][2];
ch1[15][7]=ch1[15][4]*ch1[15][2];
ch1[16][7]=ch1[16][4]*ch1[16][2];
//sum x
ch1[0][8]=ch1[4][1]+ch1[5][1]+ch1[6][1]+ch1[7][1]+ch1[8][1]+ch1[9][1]+ch1[10][1]+ch1[11][1]+ch1[12][1]+ch1[0][1]+ch1[1][1]+ch1[2][1]+ch1[3][1]+ch1[13][1]+ch1[14][1]+ch1[15][1]+ch1[16][1];

//sum ln(y)
ch1[0][9]=ch1[4][2]+ch1[5][2]+ch1[6][2]+ch1[7][2]+ch1[8][2]+ch1[9][2]+ch1[10][2]+ch1[11][2]+ch1[12][2]+ch1[0][2]+ch1[1][2]+ch1[2][2]+ch1[3][2]+ch1[13][2]+ch1[14][2]+ch1[15][2]+ch1[16][2];

//sum x*y
ch1[0][10]=ch1[4][3]+ch1[5][3]+ch1[6][3]+ch1[7][3]+ch1[8][3]+ch1[9][3]+ch1[10][3]+ch1[11][3]+ch1[12][3]+ch1[0][3]+ch1[1][3]+ch1[2][3]+ch1[3][3]+ch1[13][3]+ch1[14][3]+ch1[15][3]+ch1[16][3];

//sum x*x
ch1[0][11]=ch1[4][4]+ch1[5][4]+ch1[6][4]+ch1[7][4]+ch1[8][4]+ch1[9][4]+ch1[10][4]+ch1[11][4]+ch1[12][4]+ch1[0][4]+ch1[1][4]+ch1[2][4]+ch1[3][4]+ch1[13][4]+ch1[14][4]+ch1[15][4]+ch1[16][4];

//sum x*x*x
ch1[0][12]=ch1[4][5]+ch1[5][5]+ch1[6][5]+ch1[7][5]+ch1[8][5]+ch1[9][5]+ch1[10][5]+ch1[11][5]+ch1[12][5]+ch1[0][5]+ch1[1][5]+ch1[2][5]+ch1[3][5]+ch1[13][5]+ch1[14][5]+ch1[15][5]+ch1[16][5];

//sum x*x*x*x
ch1[0][13]=ch1[4][6]+ch1[5][6]+ch1[6][6]+ch1[7][6]+ch1[8][6]+ch1[9][6]+ch1[10][6]+ch1[11][6]+ch1[12][6]+ch1[0][6]+ch1[1][6]+ch1[2][6]+ch1[3][6]+ch1[13][6]+ch1[14][6]+ch1[15][6]+ch1[16][6];

//sum x^2*ln(y)
ch1[0][14]=ch1[4][7]+ch1[5][7]+ch1[6][7]+ch1[7][7]+ch1[8][7]+ch1[9][7]+ch1[10][7]+ch1[11][7]+ch1[12][7]+ch1[0][7]+ch1[1][7]+ch1[2][7]+ch1[3][7]+ch1[13][7]+ch1[14][7]+ch1[15][7]+ch1[16][7];
//denominator
den=t1*ch1[0][11]*ch1[0][13]+2*ch1[0][8]*ch1[0][11]*ch1[0][12]-powl(ch1[0][11],3)-powl(ch1[0][8],2)*ch1[0][13]-t1*powl(ch1[0][12],2);

// w1
w1=(t1*ch1[0][11]*ch1[0][14]+ch1[0][12]*ch1[0][8]*ch1[0][9]+ch1[0][8]*ch1[0][11]*ch1[0][10]-powl(ch1[0][11],2)*ch1[0][9]-powl(ch1[0][8],2)*ch1[0][14]-t1*ch1[0][12]*ch1[0][10])/den;

// w2
w2=(t1*ch1[0][13]*ch1[0][10]+ch1[0][8]*ch1[0][11]*ch1[0][14]+ch1[0][11]*ch1[0][12]*ch1[0][9]-powl(ch1[0][11],2)*ch1[0][10]-ch1[0][8]*ch1[0][13]*ch1[0][9]-t1*ch1[0][12]*ch1[0][14])/den;

//w3
w3=(ch1[0][11]*ch1[0][13]*ch1[0][9]+ch1[0][11]*ch1[0][12]*ch1[0][10]+ch1[0][8]*ch1[0][12]*ch1[0][14]-powl(ch1[0][11],2)*ch1[0][14]-ch1[0][8]*ch1[0][13]*ch1[0][10]-powl(ch1[0][12],2)*ch1[0][9])/den;
height=exp(w3-w1*pow(w2/(2*w1),2));
position=-w2/(2*w1);

x1=powl(2,0.5);

x2=powl(-w1,0.5);

x3=x1*x2;
width=2.35703/x3;
//cout<< i<<"\t" << height<<"\t"<< position<<"\t"<<width<<"\t";

        	peak[i][0]=height;
            peak[i][1]=position;
			if (w1>0)
			{
				peak[i][2]=0;}
			else{peak[i][2]=width;}
	        }
 }

double **finale=new double *[n-8];     
    for (int i=0; i<n-8; i++)
    {
		finale[i]=new double [7];
	} 
ofstream peak1;
 //вывод массива в файл
//открываем файл в режиме записи,
//режим ios::out устанавливается по умолчанию
peak1.open("D:\\ivan\\Vernov_data\\finale\\результаты проги\\peak.txt", ios::out);
//inf.open("proverka.txt", ios::out);

for (int i=0; i<n-8; i++)
 {
     peak1<<peak[i][0]<<"\t";
	 peak1<<peak[i][1]<<"\t";
	 peak1<<peak[i][2]<<"\t";
	 peak1<<a1[i][1]<<"\t";
	 peak1<<a1[i][2]<<"\t";
	 peak1<<a1[i][3]<<"\t";
	 peak1<<a1[i][4]<<"\t";
	 peak1<<a1[i][5]<<"\t";
finale[i][0]=peak[i][0];
finale[i][1]=peak[i][1];
finale[i][2]=peak[i][2];
finale[i][3]=a1[i][1];
finale[i][4]=a1[i][2];
finale[i][5]=a1[i][3];
finale[i][6]=a1[i][4];
finale[i][7]=a1[i][5];
     peak1<<endl;
  }
peak1.close();

/*
ifstream final("D:\\ivan\\Vernov_data\\finale\\результаты проги\\peak.txt");
final.clear();
	final.seekg(0);
    
    for (int i=0; i<n-8; i++)
    {
        for (int j=0; j<7; j++) //+1
		{final>>finale[i][j];
		
		}
    } 
	final.close();
*/


double **absolute=new double *[n-8];     
    for (int r=0; r<g; r++)
    {
		absolute[r]=new double [7];
	} 

/*
double **filtr=new double *[n-8];     
    for (int r=0; r<123; r++)
    {
		filtr[r]=new double [7];
	} 

*/
int r=0;//счесчик элементов во втором массиве

   for(int i=0; i<n-8;++i)
        if (finale[i][0]==finale[i][1])
		{}
		else{
         absolute[r][0]=finale[i][0];
         absolute[r][1]=finale[i][1];
         absolute[r][2]=finale[i][2];
         absolute[r][3]=finale[i][3];
         absolute[r][4]=finale[i][4];
         absolute[r][5]=finale[i][5];
         absolute[r][6]=finale[i][6];
         absolute[r][7]=finale[i][7]; 
		 //cout <<absolute[r][0]<<"\t";
		 ++r;  
		               
        }
		/*
ifstream ocean("D:\\ivan\\Vernov_data\\finale\\результаты проги\\ocean.txt");
ocean.clear();
	ocean.seekg(0);
    
    for (int r=0; r<123; r++)
    {
		for (int j=0; j<1; j++)
		{
			ocean>>filtr[r][j];
		}
		cout<<filtr[r][0]<<"\t"<<r<<"\t";
		
    } 
	ocean.close();
*/
/*

double **filtr1=new double *[n-8];     
    for (int r=0; r<235; r++)
    {
		filtr1[r]=new double [7];
	} 

for(r=0;r<235;r++)
{
        if (filtr[r][4]>l1 && filtr[r][4]<l2)
		{ 
		 filtr1[r][0]=filtr[r][0];
         filtr1[r][1]=filtr[r][1];
         filtr1[r][2]=filtr[r][2];
         filtr1[r][3]=filtr[r][3];
         filtr1[r][4]=filtr[r][4];
         filtr1[r][5]=filtr[r][5];
         filtr1[r][6]=filtr[r][6];
         filtr1[r][7]=filtr[r][7]; 
		 cout <<filtr1[r][3]<<"\t"<<filtr1[r][4]<<"\t"<<r<<"\t";  
		}
}
*/
/*
ofstream ocean;
 //вывод массива в файл
//открываем файл в режиме записи,
//режим ios::out устанавливается по умолчанию
ocean.open("D:\\ivan\\Vernov_data\\finale\\результаты проги\\ocaen.txt", ios::out);
//inf.open("proverka.txt", ios::out);

for (int r=0; r<235; r++)
 {

	 ocean<<filtr1[r][4]<<"\t";
	 ocean<<filtr1[r][3]<<"\t";


     ocean<<endl;
  }
ocean.close();
	*/	


ofstream absolut;
 //вывод массива в файл
//открываем файл в режиме записи,
//режим ios::out устанавливается по умолчанию
absolut.open("D:\\ivan\\Vernov_data\\finale\\результаты проги\\absolut.txt", ios::out);
//inf.open("proverka.txt", ios::out);

for (int r=0; r<g; r++)
 {
     absolut<<absolute[r][0]<<"\t";
	 absolut<<absolute[r][1]<<"\t";
	 absolut<<absolute[r][2]<<"\t";
	 absolut<<absolute[r][3]<<"\t";
	 absolut<<absolute[r][4]<<"\t";
	 absolut<<absolute[r][5]<<"\t";
	 absolut<<absolute[r][6]<<"\t";
	 absolut<<absolute[r][7]<<"\t";

     absolut<<endl;
  }
absolut.close();

ofstream geograph;
 //вывод массива в файл
//открываем файл в режиме записи,
//режим ios::out устанавливается по умолчанию
geograph.open("D:\\ivan\\Vernov_data\\finale\\результаты проги\\geograph.txt", ios::out);
//inf.open("proverka.txt", ios::out);

for (int r=0; r<g; r++)
 {

	 geograph<<absolute[r][3]<<"\t";
	 geograph<<absolute[r][4]<<"\t";


     geograph<<endl;
  }
geograph.close();


ofstream geomag;
 //вывод массива в файл
//открываем файл в режиме записи,
//режим ios::out устанавливается по умолчанию
geomag.open("D:\\ivan\\Vernov_data\\finale\\результаты проги\\geomag.txt", ios::out);
//inf.open("proverka.txt", ios::out);

for (int r=0; r<g; r++)
 {

	 geomag<<absolute[r][6]<<"\t";
	 geomag<<absolute[r][7]<<"\t";


     geomag<<endl;
  }
geomag.close();

ofstream L;
 //вывод массива в файл
//открываем файл в режиме записи,
//режим ios::out устанавливается по умолчанию
L.open("D:\\ivan\\Vernov_data\\finale\\результаты проги\\L.txt", ios::out);
//inf.open("proverka.txt", ios::out);

for (int r=0; r<g; r++)
 {

	 L<<absolute[r][5]<<"\t";
	 

     L<<endl;
  }
L.close();






/*

for ( i = 0; i < n-8; i++)
                if(finale[i][0]==finale[i][1]) 
                {  
                }
				else {cout << i << ' ';}

*/

/*
for(i = 0; i < n-8; ++i){
        for(j = 0; j < 8; ++j)
            std::cout << finale[i][j] << ' ';
        std::cout << std::endl;
    }
*/




//system ("pause");







}