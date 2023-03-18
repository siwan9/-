#include <iostream>
using namespace std;

void draw_line(int length, char border, bool fill = true)
{
		if (fill == true)							// fill�� true�� �� length��ŭ �������
		{	
			for (int i = 0; i < length; i++)
				cout << border;
			cout << endl;
		}
		else										// fill�� false�� �� ó���� ���� ���� ����ϰ� �������� �������
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
		if ((i == 0) || (i == height - 1))			// ù��° ��� ������ ���� bool���� true�� ������
			draw_line(width, border);
		else
			draw_line(width, border, false);		// �߰������ bool���� false�� �ٲ���
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
	if (l>0)										// �Է¹��� ���̰� 0���� Ŀ�� �Լ� ����
		draw_rect(l, c_1);

	cout << "input border(char) and width(int) and height(int) : ";
	cin >> c_1 >> w >> h;
	if (w>0 && h>0)									// �Է¹��� ���� ���̰� 0���� Ŀ�� �Լ� ����
		draw_rect(w, h, c_1);
}