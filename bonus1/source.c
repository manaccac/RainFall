undefined4 main(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined local_3c [40];
  int local_14;
  
  local_14 = atoi(*(char **)(param_2 + 4));
  if (local_14 < 10) {
    memcpy(local_3c,*(void **)(param_2 + 8),local_14 * 4);
    if (local_14 == 0x574f4c46) {
      execl("/bin/sh","sh",0);
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
