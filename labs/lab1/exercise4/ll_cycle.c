#include <stddef.h>
#include "ll_cycle.h"

/*
  1 -> 2 -> 3 -> 1
  C
  N

  1 -> 2 -> 3 -> 1
       C    N

  1 -> 2 -> 3 -> 1
       N    C   
  
  1 -> 2 -> 3 -> 1
                 C
                 N   

  Check at the beginning of each iteration, advancing C by 1 and N by 2
  if N is NULL no cycle, if C == N cycle
  We only need to check N because we already use it to check the next node isn't NULL
  in order to safely advance it by 2, thus it's safe in those cases to advance slow by 1.
*/
int ll_has_cycle(node *head) {
    node *slow = head;
    node *fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            return 1;
        }
    }

    return 0;
}
