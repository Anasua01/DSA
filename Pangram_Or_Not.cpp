/* 
A pangram is a sentence where every letter of the English alphabet appears at least once.

Given a string sentence containing only lowercase English letters, return true if sentence is a pangram, or false otherwise.

 

Example 1:

Input: sentence = "thequickbrownfoxjumpsoverthelazydog"
Output: true
Explanation: sentence contains at least one of every letter of the English alphabet.
Example 2:

Input: sentence = "leetcode"
Output: false
 

Constraints:

1 <= sentence.length <= 1000
sentence consists of lowercase English letters.
*/

class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<bool> mark(26,false);
        int index;

        for(int i=0;i<sentence.length();i++){
            if('A'<=sentence[i] && sentence[i]<='Z')
                index=sentence[i]-'A';

            else if('a'<=sentence[i] && sentence[i]<='z')
                index=sentence[i]-'a';

            mark[index]=true;
        }
        for(int i=0;i<=25;i++)
            if(mark[i]==false)
                return false;

        return true;
    }
    
};
