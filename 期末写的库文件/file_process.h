#ifndef _FILE_PROCESS_
#define _FILE_PROCESS_
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
/*file process*/
void print_filedata(FILE *fp) {
	printf("_ptr:%s\n", fp->_ptr);
	printf("_cnt:%d\n", fp->_cnt);
	printf("_base:%s\n", fp->_base);
	printf("_flag:%d\n", fp->_flag);
	printf("_file:%d\n", fp->_file);
	printf("_charbuf:%d\n", fp->_charbuf);
	printf("_bufsiz:%d\n", fp->_bufsiz);
	printf("_tmpfname:%s\n", fp->_tmpfname);
}
void show_file_stdout(FILE *fp) {
	char filename[20], ch;
	printf("Enter filename:");
	scanf("%s", filename);  /* �����ļ���*/
	fp = fopen(filename, "r"); /* ���ļ�*/
	if (fp == NULL) {
		printf("file open error.\n");      /*  ������*/
		exit(0);
	}
	while ( (ch = fgetc(fp) ) != EOF ) /* ���ļ��ж�ȡ�ַ�*/
		fputc(ch, stdout); /* ���׼����ļ����������ʾ��*/
	/* �������Ҳ��д��putchar(ch); */
	fclose( fp );
}
void show_file_with_column(FILE* fp) {
	char file[20], str[10];
	int flag = 1, i = 0; /*flag��=1����ʼ���С�iΪ�к�*/
	printf("Enter filename:");
	scanf("%s", file);
	if ( (fp = fopen(file, "r")) == NULL ) { /* ���ļ�*/
		printf("file1 open error.\n");
		exit (0);
	}
	while ( fgets( str, 10, fp ) != NULL ) { /* �����ַ���*/
		if (flag)  printf("%3d|%s", ++i, str); /* ��ʾ�к�*/
		else	   printf("%s", str);
		if ( str[ strlen(str) - 1 ] == '\n' ) flag = 1;
		else                                flag = 0;
	}
	fclose( fp );
}

void copy_file(FILE* fp1, FILE* fp2) {
	char file1[20], file2[20], ch;
	printf("Enter filename1:");
	scanf("%s", file1);
	printf("Enter filename2:");
	scanf("%s", file2);
	fp1 = fopen(file1, "r");
	if (fp1) {
		fp2 = fopen(file2, "w");
		if (fp2) {
			while ( (ch = fgetc(fp1)) != EOF ) /* ���ļ�fp1�ж��ַ�*/
				fputc( ch, fp2 ); /* д���ļ�fp2��*/
			fclose(fp2);
		} else {
			printf("file2 open error.\n");
			exit(0);
		}
	} else {
		printf("file1 open error.\n");
		exit(0);
	}
	fclose(fp1);
}


#endif
