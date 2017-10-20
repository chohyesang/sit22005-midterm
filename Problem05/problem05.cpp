#include <iostream>

int find_plus(char arr)//+위치 찾기
int str_int(char arr, int i)// string int 변환

int main(){
    char num_str[100];
    int i(0);
    int a, b;
    
    std::cout << "수식을 입력하세요. ex '100+200' :  "
    std::cin >> num_str;
    std::cout << std::endl;
    i = find_plus(num_str);
    a, b = str_int(num_str, i);
    
    std::cout << "정답은 " << a+b; 
    
}

int find_plus(char a){
    //어레이에서 '+'의 위치를 찾아줌'
    for (i=0; i< sizeof(a)/sizeof(char); i++){
        a[i] = '+';
        return i;
    }
    
}

int str_int(char arr, int i){
    int a = std::stoi(arr[0:i-2]); //array의 i 이전까지 int로 변환
    int b = std::stoi(arr[i+2:]);
    return a, b;
        
}
