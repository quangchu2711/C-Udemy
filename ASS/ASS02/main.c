#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define FILE_NAME "log.txt"
#define MAX_LENGTH_FILE 5000

char fileStr[MAX_LENGTH_FILE];
int checkMessErr[100];
char* pMessArr[100];
long timeDelay[100];

void numberMessagesSentDisplay(char* pStr, int* pNumCmd)
{
    while (*pStr != '\0')
    {
        if (strstr(pStr, "set"))
        {
            *pNumCmd += 1;
            pStr = strstr(pStr, "set");
        }
        ++pStr;
    }
    printf ("So ban tin: %d\n", *pNumCmd);
}

void checkDeviceCode (char* pToken, char* strInput, int* pCntMess)
{
    if (strstr(pToken, strInput))
    {
        printf("%s\n", pToken);
        if (strstr(pToken, "set"))
        {
            *pCntMess += 1;
        }
    }
}

void deviceMessageDisplay (char* pStr)
{
    //Input
    int cntMess = 0, index = 0;
    printf("Nhap dia chi cua thiet bi: ");
    char strInput[100];
    scanf("%s", strInput);

    //Output
    char* pToken = strtok(pStr, "\n");
    // Lấy ra toàn bộ token
    while( pToken != NULL )
    {
        checkDeviceCode(pToken, strInput, &cntMess);
        pMessArr[index++] = pToken;
        pToken = strtok(NULL, "\n");
    }
    printf("So ban tin gui di %d\n", cntMess);
}

void displayNumberAndAddressOfSwitch(char* arr[], int len)
{
    int cnt = 1;
    char* pZwave1 = strstr(arr[0], "zwave-");
    printf("Thiet bi %d co dia chi la: NWK - %c%c%c%c, ENDPOINT - %c\n", cnt, *(pZwave1 + 6), *(pZwave1 + 7), *(pZwave1 + 8), *(pZwave1 + 9), *(pZwave1 + 13));

    for (int i = 1; i < len; i++)
    {
        char* pZwave2 = strstr(arr[i], "zwave-");
        if (strncmp(pZwave1, pZwave2, 9))
        {
           ++cnt;
           printf("Thiet bi %d co dia chi la: NWK - %c%c%c%c, ENDPOINT - %c\n", cnt, *(pZwave2 + 6), *(pZwave2 + 7), *(pZwave2 + 8), *(pZwave2 + 9), *(pZwave2 + 13));
           pZwave1 = pZwave2;
        }
    }
}

int fileToStr(char* pStr)
{
    int status;
    FILE *fp = NULL;

    fp = fopen(FILE_NAME, "r");
    if (fp == NULL)
    {
        printf ("File does not exits \n");
        return -1;
    }
    status = fread(pStr, MAX_LENGTH_FILE, 1, fp);

    //printf("Noi dung cua file log.txt: \n%s", pStr);

    fclose(fp);
    fp = NULL;
    return status;
}

void saveLineMessages(int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%s\n", pMessArr[i]);
    }
}

void errorTextNumber(char* arr[], int len)
{
    int cnt = 0, index = 0;
    for (int i = 0; i < len; i+=2)
    {
      char* pSendText = strstr(arr[i], "reqid");
      char* pReciveText = strstr(arr[i+1], "reqid");
      if (strncmp(pSendText, pReciveText, 13))
      {
        ++cnt;
        checkMessErr[index] = 1;
        checkMessErr[index+1] = 1;
      }
      else
      {
        checkMessErr[index] = 0;
        checkMessErr[index+1] = 0;
      }
      index += 2;
    }
    printf("So ban tin bi loi %d\n", cnt);
//    for (int i = 0; i < 18; i++)
//    {
//        printf("[%d] %d ", i, checkMessErr[i]);
//    }
}

void delaySendingAndResponMessages(char* arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%s\n", pMessArr[i]);
    }
}
//2.1 * 10 mu 11
//23:21:45.638
long totalTime(char *str)
{
    int index = 0;
    float numArr[3] = {0.0, 0.0, 0.0};

    char * token = strtok(str, ":");
    // Lấy ra toàn bộ token
    while( token != NULL ) {
//     printf( " %s\n", token ); //In mỗi token ra
     numArr[index] =  atof(token);
//     printf("%.2f\n", numArr[index]);
     ++index;
     token = strtok(NULL, ":");
    }

    long timeMs = (long)(numArr[0] * 60.0 * 60.0 * 1000.0 + numArr[1] * 60.0 * 1000.0 + numArr[2] * 1000.0);
//    printf("Total: %.ld (ms)\n", timeMs);
    return timeMs;
}

//2019-10-2323:
void messDelay (char* arr[], int len)
{
    int length = 0;
    long averageDelayTime = 0;
    for (int i = 0; i < len; i++)
    {
        if (!checkMessErr[i])
        {
            char* pText = strstr(arr[i], "2019-10-23");
            char pTime[13];
            if (pText)
            {
                strncpy(pTime, pText + strlen("2019-10-23"), 13);
                pTime[12] = '\0';
//                printf("[%d] %s\n", i, pTime);
                long temp = totalTime(pTime);
                timeDelay[length++] = temp;
            }
        }
    }
//    printf("len: %d\n", length);
    long maxDelay = timeDelay[1] - timeDelay[0];
    averageDelayTime += maxDelay;
    for (int i = 2; i < length; i+=2)
    {
        long tempVal = timeDelay[i+1] - timeDelay[i];
        averageDelayTime += tempVal;
        if (maxDelay < tempVal) maxDelay = tempVal;
    }
    printf("Do tre lon nhat la: %ld ms\n", maxDelay);
    printf("Do tre trung binh la: %ld ms\n", (long)(averageDelayTime/(length/2)));
//    printf("\n");
}

int main(void)
{
    int numCmd = 0;

    fileToStr(fileStr);

    printf("============================================================================================\n");
    numberMessagesSentDisplay(fileStr, &numCmd);

    printf("============================================================================================\n");
    deviceMessageDisplay(fileStr);

    printf("============================================================================================\n");
    displayNumberAndAddressOfSwitch(pMessArr, 18);

    printf("============================================================================================\n");
    errorTextNumber(pMessArr, 18);
    printf("============================================================================================\n");
    messDelay(pMessArr, 18);
    printf("============================================================================================\n");

//    printf("============================================================================================\n");
//    saveLineMessages(18);
    return 0;
}
