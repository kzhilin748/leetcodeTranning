class Solution {
    public boolean isPalindrome(String s) {
        int left=0;
        int right=s.length()-1;
        while(left<right){
            if(!chkletter(s.charAt(left))) ++left;
            else if(!chkletter(s.charAt(right))) --right;
            else if(((s.charAt(left)+32-'a')%32)!=((s.charAt(right)+32-'a')%32)) return false;
            else{
                ++left;--right;
            }
        }
        return true;
    }
    
    private static boolean chkletter(char tmp){       
        if(tmp>='a'&&tmp<='z') return true;
        else if(tmp>='A'&&tmp<='Z') return true;
        else if(tmp>='0'&&tmp<='9') return true;
        else return false;
    }
}