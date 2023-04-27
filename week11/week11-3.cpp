#include <windows.h>
#include <stdio.h>
int main()
{
    //絕對路徑
    //PlaySound("C:\\Users\\Administrator\\Desktop\\do-re-mi\\do.wav",NULL,SND_SYNC);
    //PlaySound("C:\\Users\\Administrator\\Desktop\\do-re-mi\\re.wav",NULL,SND_SYNC);
    //PlaySound("C:\\Users\\Administrator\\Desktop\\do-re-mi\\mi.wav",NULL,SND_SYNC);
    //PlaySound("C:\\Users\\Administrator\\Desktop\\do-re-mi\\fa.wav",NULL,SND_SYNC);
    //PlaySound("C:\\Users\\Administrator\\Desktop\\do-re-mi\\so.wav",NULL,SND_SYNC);
             //  "  "內為音檔存放位置
    //目錄的斜線可用( \\ 或 / )

    //相對路徑
    PlaySound("do-re-mi/do.wav",NULL,SND_SYNC);
    PlaySound("do-re-mi/re.wav",NULL,SND_SYNC);

    printf("Hello World\n");
}
