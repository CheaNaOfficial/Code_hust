Alice có a cái kẹo, Bob cho Alice b cái kẹo, hỏi Alice có tổng cộng bao nhiêu cái kẹo. Yêu cầu viết chương trình bằng ngôn ngữ C/C++
Lưu ý giới hạn: a,b<10^19 dẫn đến c có thể vượt quá khai báo long long
Input
Gồm hai dòng, mỗi dòng ghi một số nguyên
Output
Một dòng chứa số nguyên là kết quả bài toán
Scoring
0≤a,b≤9×10^18 Có 50% test với a,b≤10^9
Examples
input
1
1
output
2
input
3
5
output
8
..........................................................................................................
#include <bits./stdc++.h>
using namespace std;
 
string Sum ( string a, string b) {
	while (a.length() < b.length() ) a = '0' + a;
	while (b.length() < a.length() ) b = '0' + b;
	
	string result;
	int tong, nho = 0;
	int them = a.length();
	for (int i = them-1 ; i>=0 ; i--) {
		tong = (a[i]-'0') + (b[i]-'0') + nho;
		nho = tong/10;
		result.push_back(tong%10 + '0');
	}
	if ( nho == 1 ) result.push_back(nho+'0');
	reverse(result.begin(), result.end());
	return result;
}
 
int main() {
	string a, b;
	cin >> a >> b;
	cout << Sum(a,b);
}
