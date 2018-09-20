#include <stdio.h>
#include <stdlib.h>
typedef struct{
  int ID;
  int content;
}Data;

void fileout(Data data, char* filename){
  FILE* fp_out;
  //ファイルオープン
  fp_out = fopen(filename,"w");
  if(fp_out == NULL){
    fprintf(stderr, "%s : file open error\n",filename);
    fclose(fp_out);
    exit(1);
  }
  //ファイル書き込み
  fprintf(fp_out,"%d %d",data.ID, data.content);
  //ファイルクローズ
  fclose(fp_out);
}
void filein(Data *data, char* filename){
  FILE* fp_in;
  //ファイルオープン
  fp_in = fopen(filename,"r");
  if(fp_in == NULL){
    fprintf(stderr, "%s : file open error\n",filename);
    fclose(fp_in);
    exit(1);
  }
  //ファイル読み込み> 変数格納
  fscanf(fp_in,"%d %d",&(data->ID), &(data->content));
  printf("filein %d %d \n", data->ID, data->content);
  //ファイルクローズ
  fclose(fp_in);
}

void test(){
  Data data,data2;
  data.ID = 20;
  data.content = 333;
  data2.ID = 0;
  data2.content = 0;
  printf("test data: %d %d \n", data.ID, data.content);
  printf("test data2: %d %d \n", data2.ID, data2.content);
  fileout(data ,"sample.txt");
  filein( &data2, "sample.txt");
  printf("test data: %d %d \n", data.ID, data.content);
  printf("test data2: %d %d \n", data2.ID, data2.content);
}
int main(int argc, char const *argv[]) {
  test();
  return 0;
}
