#include <stdio.h>

int main()
{
    int textual,audio,video;
    float volume;
    printf("mobile volume space:(GB)");
    scanf("%f",&volume);
    printf("number of text files:(MB)");
    scanf("%d",&textual);
    printf("number of audio files:(MB)");
    scanf("%d",&audio);
    printf("number of video files:(MB)");
    scanf("%d",&video);
    float consumption_volume=textual+(audio*3)+video;
    printf("consumed volume(MB): %f ",consumption_volume);
    float volume2=consumption_volume/1000;
    printf("consumed volume(GB): %f ", volume2);
    volume-=volume2;
    printf("remaining space(GB): %f ",volume);

    return 0;

}