#ifndef __A_H__
#define __A_H__

typedef struct banana_ banana;

typedef struct apple_ {
    banana *banana;
    int x;
} apple;

#endif /* __A_H__ */
