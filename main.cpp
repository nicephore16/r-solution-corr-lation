#include <iostream>
#include <cmath>

using namespace std;

double carree(double a){
    return pow(a,2);
}
double somme(double a[5]){
    double somme=0;
    for (int i = 0; i < 5; ++i) {
        somme=somme+a[i];
    }
    return somme;
}
double produit(double x, double y){
    return x*y;
}
double moyenne(double a[5]){
    return somme(a)/5;
}

int main() {
    double x1,x2,x3,x4,x5,y1,y2,y3,y4,y5, x,y;
    double r;
    double tabx[5],taby[5],xy[5], xcar[5],ycar[5];
    cout<<"Entrez la valeur de x1";
    cin>>x1;
    cout<<"Entrez la valeur de x2";
    cin>>x2;
    cout<<"Entrez la valeur de x3";
    cin>>x3;
    cout<<"Entrez la valeur de x4";
    cin>>x4;
    cout<<"Entrez la valeur de x5";
    cin>>x5;

    cout<<"Entrez la valeur de y1";
    cin>>y1;
    cout<<"Entrez la valeur de y2";
    cin>>y2;
    cout<<"Entrez la valeur de y3";
    cin>>y3;
    cout<<"Entrez la valeur de y4";
    cin>>y4;
    cout<<"Entrez la valeur de y5";
    cin>>y5;

    double liste[2][5]={{x1,x2,x3,x4,x5},{y1,y2,y3,y4,y5}};

    for (int i = 0; i < 1; ++i) {
        for (int j = 0; j < 5; ++j) {
             x=liste[0][j];//recuperation des x de la liste
             y=liste[1][j];//recuperation des y de la liste
             tabx[j]= x;//rang des x
             taby[j]=y;//rang des y

             xcar[j]=carree(x);//x exposant 2
             ycar[j]=carree(y);//y exposant 2
             xy[j]=produit(x,y);//produit de x et y
        }
    }

    r=(5*somme(xy)-somme(tabx)*somme(taby))/sqrt((5*somme(xcar)-pow(somme(tabx),2))*(5*somme(ycar)-pow(somme(taby),2)));

    cout<<"moyenne de x= "<<moyenne(tabx)<<endl;
    cout<<"moyenne de y= "<<moyenne(taby)<<endl;
    cout<<"La correlation r= "<<r;
    return 0;
}
