#include <iostream>
#include <stdio.h>
#include <string.h>
#include <iomanip>
using namespace std;
void ghi_dl(){
    FILE *fp;
    //Mo tep tin de ghi du lieu
    fp = fopen("C:\\Users\\tien dat\\Desktop\\Ki Thuat May Tinh codeblock\\Bai Thuc Hanh So 7\\BaiTap1\\Bai1.txt", "w");

    fputs("Problen name: exp1\n", fp);
    fputs("Maximize\n", fp);
    fputs("obj\t:x1 + 2 x2 + 3 x3 + x4\n", fp);
    fputs("Subject To\n",fp);
    fputs("c1: x2 - 3.5 x4 = 0\n",fp);
    fputs("Bounds\n",fp);
    fputs("0 <= x1 <= 40",fp);
    fputs("General\n",fp);
    fputs("\tx4\n",fp);
    fputs("End",fp);


    fclose(fp);

}
void doc_dl(){
    FILE *fp;
    //Mo tep tin de doc du lieu
    fp = fopen("C:\\Users\\tien dat\\Desktop\\Ki Thuat May Tinh codeblock\\Bai Thuc Hanh So 7\\BaiTap1\\Bai1.txt", "r");


    char str[100];



    while(!feof(fp))
    {
        fgets(str, 100, fp);
        cout<<str;


    }


    fclose(fp);
}
int main(){
    ghi_dl();
    doc_dl();

}

