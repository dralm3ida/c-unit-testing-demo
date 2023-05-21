#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "cmock.h"
#include "mock_GlobalDefs.h"


static struct mock_GlobalDefsInstance
{
  unsigned char placeHolder;
} Mock;

extern jmp_buf AbortFrame;
extern int GlobalExpectCount;
extern int GlobalVerifyOrder;

void mock_GlobalDefs_Verify(void)
{
}

void mock_GlobalDefs_Init(void)
{
  mock_GlobalDefs_Destroy();
}

void mock_GlobalDefs_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
}

