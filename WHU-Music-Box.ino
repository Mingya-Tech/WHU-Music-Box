// 列出所有D调的频率
#define NTD0 -1
#define NTD1 293
#define NTD2 329
#define NTD3 368
#define NTD4 390
#define NTD5 438
#define NTD6 492
#define NTD7 554

#define NTDL1 147
#define NTDL2 166
#define NTDL3 185
#define NTDL4 196
#define NTDL5 221
#define NTDL6 248
#define NTDL7 278

#define NTDH1 585
#define NTDH2 657
#define NTDH3 700
#define NTDH4 781
#define NTDH5 882
#define NTDH6 990
#define NTDH7 1112

int note[] = {  // 根据简谱列出各频率
    /*
    // 前奏过长，暂时不放
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
    NTD3, NTD4, NTD5, NTD6, NTD5,
    NTD2, NTD4, NTD3, NTD2, NTD1,
    NTD3, NTD4, NTD5, NTD5, NTD5, NTDH3, NTDH2, NTDH1,
    NTD7, NTD6, NTDH2, NTDH1, NTD5,
    // 
    NTDH1, NTD7, NTD6, NTD5, NTD6,
    NTD5, NTD2, NTD4, NTD3, NTD2,
    NTD3, NTD2, NTD3, NTD4, NTD5, NTD6, NTD5,
    NTDH1, NTD7, NTD6, NTD5, NTDH2,
    //
    NTDH3,
    NTDH2, NTDH1, NTDH3,
    NTDH2, NTDH1, NTD6, NTD7, 
    NTDH1, NTD6, NTD5,
    //
    NTD3, NTD4, NTD3, NTD2, NTD1,
    NTDH1, NTDH1, NTD7, NTD6,
    NTD5, NTDH4, NTDH3, NTDH2,
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
    0.75, 0.25, 2.5, 0.5,
    0.5, 0.5, 3,
    //
    1.5, 0.5, 0.5, 0.5, 1,
    1, 0.75, 0.25, 2,
    1, 1, 1.5, 0.5,
    4
};

int length;
int tonePin = 4;   // 使用4号接口

void setup() {
    pinMode(tonePin, OUTPUT);
    pinMode(LED_BUILTIN, OUTPUT);
    length = sizeof(note) / sizeof(note[0]);  // 计算音调数组的长度
}

void loop() {
    for(int x = 0; x < length; x++) {
        tone(tonePin, note[x]);
        delay(700 * durt[x]);  // 这里用来根据节拍调节延时。
        noTone(tonePin);
    }
    delay(2000);
}