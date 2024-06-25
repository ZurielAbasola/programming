/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

// TODO: Review solution 

class Solution {
public:
  int guessNumber(int n) {
    int left = 1, right = n;
    int mid = left + (right - left) / 2;

    while (left < right) {
      if (guess(mid) == 0) 
        return mid;
      else if (guess(mid) == -1) {
        right = mid - 1;
      }
      else {
        left = mid + 1;
      }

      mid = left + (right - left) / 2;
    }

    return mid;
  }
};
