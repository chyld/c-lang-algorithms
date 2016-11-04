#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h>

bool search(int32_t *nums, int32_t size, int32_t target);

int main(void)
{
  printf("Binary Search\n");
  int32_t nums[10] = {2,4,6,8,10,12,14,16,18,20};
  int32_t x = search(nums, 10, 1);
  printf("x: %i", x);
  return 0;
}

bool search(int32_t *nums, int32_t size, int32_t tgt)
{
  int32_t mid = size / 2;
  int32_t val = *(nums + mid);

  if(tgt == val)
    return true;

  if(size > 1){
    if(tgt < val)
      return search(nums, mid, tgt);
    else
      return search(nums + mid, size - mid, tgt);
  } else{
    return false;
  }
}
