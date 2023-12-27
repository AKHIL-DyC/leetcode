/*
1768. Merge Strings Alternately

You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1. If a string is longer than the other, append the additional letters onto the end of the merged string.

Return the merged string.

 

Example 1:

Input: word1 = "abc", word2 = "pqr"
Output: "apbqcr"
Explanation: The merged string will be merged as so:
word1:  a   b   c
word2:    p   q   r
merged: a p b q c r


*/
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string word3;
        //int k=0;
        int i,j;
        for( i=0, j=0;i<word1.length()&&j<word2.length();i++,j++){
            word3+=word1[i];
            word3+=word2[j];
        }
        while(i<word1.length()){
            word3+=word1[i++];
        }
         while(j<word2.length()){
            word3+=word2[j++];
        }
        return word3;
    }
};