/*
the binary heap tree is a binary tree accept the fact that it is completed at each node
                        1
                      /   \
                     2     3
                    / \   / \              |1|2|3|4|5|6|7|
                   4   5 6   7
*/
class BinaryHeap{
  int left(int i) {return((2*i)+1);}    //i is the index
  int right(int i) {return((2*i)+2);}   //These formulas are arrived at using the array arrangement
  int parent(int i) {return((i-1)/2);}  //parent
  }

//for max/min heap aka rule 2, parent be greatest or smallest
        int getMin(){return Arr[0];}
          insert() 
          /*
          make sure it is complete 
          make sure you are following the min/maximum rule == HEAPIFY
          */
          /* conditions for insert:
            ->no elements
            ->size overflow (csize == msize)
            ->insert at the end of Arr
                 Arr[csize]=newvalue;
            ->check for BH Rule (2)
                -swap if required [LOOP IT]    stopwhen_no voilation  stopwhen_reached i==0
          */
          ExtractMin() //the root becomes empty then switch it up [SWAP] stopwhen_no voilation stopwhen_no kids AKA HEAPIFY
          DecreaseKey () //we overwrite ie. decrease the value on a number this also includes the swap
          delet() //we use the above two to run this 
