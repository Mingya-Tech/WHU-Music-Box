#include "NTDs.h"

int tune[] = {  // 根据简谱列出各频率
    /*
    // 前奏  
    NTD3, NTD5, NTD6, NTDH1, NTDH3,
    NTDH2, NTDH1, NTDH3, 
    NTDH2, NTDH1, NTD6,
    NTDH1, NTDH2, NTD6, NTD5, NTD5,
    // 
    NTDH3, NTDH4, NTDH3, NTDH2, NTDH1,
    NTDH7, NTDH7, NTDH6, NTDH6, 
    NTD6, NTDH3, NTDH2, NTD5, NTD6,
    NTDH1, 
    */
    // 东湖之滨，珞珈山上，这是我们亲爱的学堂
    NTD2, NTD2, NTD5, NTD6, NTD5,
    NTD2, NTD5, NTD3, NTD2, NTD1,
    NTD3, NTD3, NTD5, NTD5, NTD5, NTD5, NTDH3, NTDH2, NTDH1,
    NTD5, NTD7, NTD2, NTDH1, NTD5,
    // 
    NTDH1, NTD7, NTD6, NTD5, NTD6,
    NTD5, NTD2, NTD4, NTD3, NTD2,
    NTD3, NTD3, NTD5, NTD5, NTD5, NTD6, NTD5,
    NTDH1, NTD7, NTD6, NTD5, NTDH2,
    //
    NTDH3,
    NTDH2, NTDH1, NTDH3,
    NTDH2, NTDH1, NTD6,
    NTDH1, NTDH2, NTD6, NTD5, NTDH2,
    //
    NTD5, NTD6, NTD5, NTD4, NTD3,
    NTDH1, NTDH1, NTD7, NTD6,
    NTD5, NTDH4, NTDH3, NTDH3, NTDH2,
    NTDH1
};

float durt[] = {  // 根据简谱列出各节拍
/*
    // 前奏
    0.25, 0.25, 0.25, 0.25, 3,
    0.75, 0.25, 3,
    0.75, 0.25, 3,
    0.5, 0.5, 0.5, 0.5, 2,
    //
    1.5, 0.5, 0.5, 0.5, 1,
    1, 0.75, 0.25, 2,
    1, 1, 1, 0.5, 0.5,
    4,
*/
    // 从东湖之滨开始
    0.5, 0.5, 0.5, 0.5, 2,
    0.5, 0.5, 0.5, 0.5, 2,
    0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5,
    0.5, 0.5, 0.5, 0.5, 2,
    //
    0.5, 0.5, 0.5, 0.5, 2,
    0.5, 0.5, 0.5, 0.5, 2,
    0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 1,
    0.5, 0.5, 0.5, 0.5, 2,
    // 
    4,
    0.75, 0.25, 3,
    0.75, 0.25, 3,
    0.5, 0.5, 0.5, 0.5, 2,
    //
    1.5, 0.5, 0.5, 0.5, 1,
    1, 0.75, 0.25, 1,
    1, 1, 1, 0.5, 0.5,
    4
};

int length;
int tonePin = 3;   // 使用3号接口

void setup() {
    pinMode(tonePin, OUTPUT);
    pinMode(LED_BUILTIN, OUTPUT);
    length = sizeof(tune) / sizeof(tune[0]);  // 计算音调数组的长度
}

void loop() {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(100);
    digitalWrite(LED_BUILTIN, LOW);

    for(int x = 0; x < length; x++) {
        tone(tonePin, tune[x]);
        delay(700 * durt[x]);  // 这里用来根据节拍调节延时。
        noTone(tonePin);
    }
    delay(2000);
}