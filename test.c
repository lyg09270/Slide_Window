#include <stdint.h>
#include <stdio.h>
#include "slide_window.h"

void slide_window_show(Slide_Window *window)
{
    int i = 0;
    Slide_Window_Data_Type data = 0;
    for(i = 0; i < window->size; i++){
        slide_window_retrieve(window, &data, i);
        printf("%d ", data);
    }
    printf("\n");
}

int main()
{
    Slide_Window window;
    slide_window_init(&window);
    uint8_t i = 0;
    for(i=0; i<10; i++)
    {
        printf("i:%d\n",i);
        slide_window_add(&window, i);
        slide_window_show(&window);
    }
}