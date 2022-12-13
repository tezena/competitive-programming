 public static int countingValleys(int steps, String path) {
    // Write your code here
    char arry[]=path.toCharArray();
    int altitude=0;
    int noVally=0;
    
    for(int i=0;i<steps;i++){
        if(arry[i]=='U'){
            altitude++;
            if(altitude==0)
               noVally++;
        }else{
            altitude--;
        }
        
    }
          return noVally;
    }

}
