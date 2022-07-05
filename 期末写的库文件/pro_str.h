#ifndef _PRO_STR_H_
#define _PRO_STR_H_
#include<stdio.h>
/* �����дһЩ���Ծ����õ����ַ������ɵĺ���
�ܲ�����ô���ˣ���������д����˵��*/
/*@author donglinkang*/
/*�����������Сֵ����*/
int array_maxn(int a[], int a_len) {
	int max = a[0];
	for (int i = 0; i < a_len; i++) {
		if (max < a[i]) {
			max = a[i];
		}
	}
	return max;
}
int array_minn(int a[], int a_len) {
	int min = a[0];
	for (int i = 0; i < a_len; i++) {
		if (min > a[i]) {
			min = a[i];
		}
	}
	return min;
}
/*�ַ����ִ�����������*/
typedef struct {
	int value;
	char ch;
} link;
void link_chart_initialize(link chart[]) {
	for (int i = 0; i < 26; i++) {
		chart[i].value = 0;
		chart[i].ch = 'A' + i;
	}
}
void link_chart_sort(link chart[]) {
	for (int i = 0; i < 26; i++) {
		for (int j = i + 1; j < 26; j++) {
			if (chart[i].value < chart[j].value) {//�Ӵ�С
				link temp = chart[i];
				chart[i] = chart[j];
				chart[j] = temp;
			} else if (chart[i].value == chart[j].value) {
				if (chart[i].ch > chart[j].ch) {
					link temp = chart[i];
					chart[i] = chart[j];
					chart[j] = temp;
				}
			}
		}
	}
}
void link_chart_output(link chart[]) {
	for (int i = 0; i < 26; i++) {
		printf("%d ", chart[i].value);
	}
	printf("\n");
	for (int i = 0; i < 26; i++) {
		printf("%c ", chart[i].ch);
	}
	printf("\n");
}
void link_visualize(link chart[], int cols) {
	/*	@param1 the chart you want to visualize
		@param2 the num of columns in the chart
	*/
	int max = chart[0].value;
	for (int i = 0; i < cols; i++) {
		if (max < chart[i].value) {
			max = chart[i].value;
		}
	}
	char show[max][cols];
	//initial show
	for (int i = 0; i < max; i++) {
		for (int j = 0; j < cols; j++) {
			show[i][j] = ' ';
		}
	}
	//pattern
	for (int i = 0; i < cols; i++) {
		for (int j = max - 1; j >= max - chart[i].value; j--) {
			show[j][i] = '#';
		}
	}
	//printf
	for (int i = 0; i < max; i++) {
		for (int j = 0; j < cols; j++) {
			printf("%c ", show[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < 26; i++) {
		printf("%c ", chart[i].ch);
	}
	printf("\n");
}
/*ͼ���ⳣ��*/
char graph_ring(char ch){
	if(ch>'Z'){
		return (ch-'A')%26+'A';
	}else if(ch<'A'){
		return 'Z'-('Z'-ch)%26;
	}
}
char graph_ring_char(char c) {
	/*
	@function �������Ӣ�Ĵ�д�ַ���β����
	@param	c is character waiting to be convert
	@return ת��������ַ�
	@code ���Ҫ��ΪСд�Ļ�������'A'��Ϊ'a'����
	*/
	int num = (c - 'A') % 26;
	int index = 0;
	if (num >= 0) {
		index = num;
	} else {
		index = 26 + num;
	}
	return index + 'A';
}
//�о����ͼ���⻹���ֳ��ҹ��ɿ��ܸ���һ�㣬���������ͨ�Ĵ�ӡ����
void graph_print_rectangle(int rows, int columns) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			printf("#");
		}
		printf("\n");
	}
}

void graph_print_uptriangle(int n) {
	/* 	@function ���������Σ�ͷ����
		@param you can imagine that
		the triangle is surrounded by a special rectangle,
		whose rows and columns we put here.
	*/
	int rows = n;
	int columns = 2 * n - 1;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			if (i + j < columns / 2) {
				printf(" ");
			} else if (j - i > columns / 2) {
				printf(" ");
			} else {
				printf("#");
			}
		}
		printf("\n");
	}
}
void graph_print_downtriangle(int n) {
	int rows = n;
	int columns = 2 * n - 1;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			if (i - j > 0) {
				printf(" ");
			} else if (j + i > columns-1) {
				printf(" ");
			} else {
				printf("#");
			}
		}
		printf("\n");
	}
}
void graph_print_diamond(int n) {
	/* @param you can imagine that
		the diamond is also surrounded by a square,
		whose rows and columns we put here.
	*/
	int rows = n;
	int columns = n;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			if (i + j < columns / 2) {
				printf(" ");
			} else if (j - i > columns / 2) {
				printf(" ");
			} else if (i - j > columns / 2) {
				printf(" ");
			} else if (i + j > columns + columns / 2 - 1) {
				printf(" ");
			} else {
				printf("#");
			}
		}
		printf("\n");
	}
}

#endif
