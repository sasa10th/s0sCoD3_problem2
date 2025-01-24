#include <bits/stdc++.h>
using namespace std;
struct node {
    char str[12];
    int arr[5];
    node() {
        memset(arr, 0, sizeof arr);
        memset(str, 0, sizeof str);
    }
};
bool check1(const char *str){
	long long int cnt;
	for(int i=0;i<5;i++){
		cnt+=int(str[i]);
		if(i!=4){
			cnt*=256;
		}
	}
	if(!(cnt>494*pow(10,9) && cnt<495*pow(10,9))){
		return false;
	}
	int cnt2=cnt;
	if(cnt2!=812860271){
		return false;
	}
	return true;
}
bool check2(const char *str){
	int cnt3=0, arr_1D[7]={2,5,11,20,5,5,17}, arr_2D[12][10]={{14,15,9,14,9,13,8,14,13,7},{9,8,8,7,14,7,8,8,8,9},{13,15,14,14,8,7,15,13,7,8},{9,7,15,11,8,13,13,13,9,8},{8,7,11,15,8,11,14,15,9,15},{15,6,11,11,8,13,9,13,11,9},{9,9,8,13,8,8,15,11,3,14},{7,7,9,7,11,8,13,15,13,9},{9,11,7,15,11,7,7,9,8,7},{11,11,7,7,15,12,8,13,11,9},{16,13,11,13,11,15,11,11,8,14},{21,15,15,14,14,13,7,7,7,8}};
	for(int i=5;i<12;i++){	
		cnt3+=pow(arr_2D[0][int(str[i])]-arr_1D[i-5],2);
	}
	if(cnt3!=7){
		return false;
	}
	return true;
}
bool check3(const int *arr){
	int c1=0,c2=0;
	char str1[]="SASASASA S ASA SA SASASA  SASAS ASASASASA SASASAS";
	char str2[]="! ! s0sCoD3";
	for(int i=0;str1[i];i++){
		if(str1[i]==' '){
			c1*=10;
		}
		else{
			c1++;
		}
	}
	for(int i=0;str2[i];i++){
		if(str2[i]==' '){
			c2*=10;
		}
		else{
			c2++;
		}
	}
	if(arr[0]!=c1){
		return false;
	}
	if(arr[1]!=c2){
		return false;
	}
	if(arr[2]!=0){
		return false;
	}
	return true;
}
void output(const char *str){
	int out_arr[12]={17148,28215,29166,29744,8369,16682,29508,25875,8143,8214,28221,29968},res;
	for(int i=0;i<12;i++){
		res=int(str[i])+out_arr[i];
		printf("%c%c",res/256,res%256);
	}
	return;
}
int main(){
	//Run this code at compilers such as ideone
	node data;
    int *arr = data.arr;
    char *str = data.str;
    scanf("%s", str);
	if(!check1(str)){
		printf("Invalid Input");
	}
	else if(!check2(str)){
		printf("Invalid Input");
	}
	else if(!check3(arr)){
		printf("Invalid Input");
	}
	else{
		output(str);
	}
}
