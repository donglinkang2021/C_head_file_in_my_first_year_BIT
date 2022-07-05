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
	scanf("%s", filename);  /* 输入文件名*/
	fp = fopen(filename, "r"); /* 打开文件*/
	if (fp == NULL) {
		printf("file open error.\n");      /*  出错处理*/
		exit(0);
	}
	while ( (ch = fgetc(fp) ) != EOF ) /* 从文件中读取字符*/
		fputc(ch, stdout); /* 向标准输出文件中输出（显示）*/
	/* 上面这句也可写成putchar(ch); */
	fclose( fp );
}
void show_file_with_column(FILE* fp) {
	char file[20], str[10];
	int flag = 1, i = 0; /*flag，=1：开始新行。i为行号*/
	printf("Enter filename:");
	scanf("%s", file);
	if ( (fp = fopen(file, "r")) == NULL ) { /* 打开文件*/
		printf("file1 open error.\n");
		exit (0);
	}
	while ( fgets( str, 10, fp ) != NULL ) { /* 读出字符串*/
		if (flag)  printf("%3d|%s", ++i, str); /* 显示行号*/
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
			while ( (ch = fgetc(fp1)) != EOF ) /* 从文件fp1中读字符*/
				fputc( ch, fp2 ); /* 写入文件fp2中*/
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
