int main(int argc, char *argv[]){
FILE *fp;
int counter = 0;
int  blockList[MAX];
int n1, n2;

if(argc > 1) {
fp = fopen(argv[1], "r");

if(fp == NULL){
perror("Error opening file");
return -1;
}

while(counter < MAX && 1 == fscanf(fp, "%d", &blockList[counter]))
{
counter++;
}
}

else {
while(counter < MAX && 1 == fscanf(stdin, "%d", &blockList[counter]))
{
counter++;
}
}

FCFS(blockList, count);
SSTF(blockList, count);
Look(blockList, count);
CLook(blockList, count);


return 0;
}

