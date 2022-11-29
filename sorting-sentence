class Solution {
    public String sortSentence(String s) {
           String words[]=s.split(" ");
       // List<String> currentWords=new ArrayList<String>();
        String currentWords[]=new String[words.length];
        StringBuilder sent=new StringBuilder("");

        for(int i=0;i<words.length;i++){

            int ind=(words[i].length()-1);
            String word=words[i].substring(0,ind);
            int index= Integer.parseInt(String.valueOf(words[i].charAt(ind))) -1;

            currentWords[index]=word;

        }
        for(int i=0;i<currentWords.length;i++){
            sent.append(currentWords[i]);
            if(i<(currentWords.length-1))
            sent.append(" ");
        }

        return sent.toString();
    }
}
