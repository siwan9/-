#include <iostream>
using namespace std;

void draw_line(int length, char border, bool fill = true)
{
		if (fill == true)							// fill이 true일 때 length만큼 문자출력
		{	
			for (int i = 0; i < length; i++)
				cout << border;
			cout << endl;
		}
		else										// fill이 false일 때 처음과 끝만 문자 출력하고 나머지는 여백출력
		{
			cout << border;
			for (int i = 0; i < (length - 2); i++)
				cout << ' ';
			cout << border << endl;
		}
}

void draw_rect(int width, int height, char border) 
{
	for (int i = 0; i < height; i++)
	{
		if ((i == 0) || (i == height - 1))			// 첫번째 행과 마지막 행은 bool값을 true로 유지함
			draw_line(width, border);
		else
			draw_line(width, border, false);		// 중간행들은 bool값을 false로 바꿔줌
	}
}

void draw_rect(int length, char border)
{
	for (int i = 0; i < length; i++)
	{
		if ((i == 0) || (i == length-1))
			draw_line(length, border);
		else
			draw_line(length, border, false);
	}
}

void main(void)
{
	char c_1;
	int l;
	int w, h;
	cout << "input border(char) and length(int) : ";
	cin >> c_1 >> l;
	if (l>0)										// 입력받은 길이가 0보다 커야 함수 실행
		draw_rect(l, c_1);

	cout << "input border(char) and width(int) and height(int) : ";
	cin >> c_1 >> w >> h;
	if (w>0 && h>0)									// 입력받은 폭과 높이가 0보다 커야 함수 실행
		draw_rect(w, h, c_1);
}