static public List<String> fizzBuzz(int n) {
        List<String> list=new ArrayList<String>();

        if(n%3==0 && n%5==0){
            for(int i=0;i+1<=n;i++){
                if((i+1<=n && (i+1)%3==0) && (i+1<=n && (i+1)%5==0) ){
                    list.add("FizzBuzz");
                } else if((i+1)%3==0 ){
                    list.add("Fizz");
                } else if ((i+1)%5==0) {
                    list.add("Buzz");
                }
                else {
                    list.add(Integer.toString(i + 1));
                }



            }
        }
        else if(n%3==0){
            for(int i=0;i+1<=n;i++){
                if((i+1<=n && (i+1)%3==0) && (i+1<=n && (i+1)%5==0) ){
                    list.add("FizzBuzz");
                }
                else if(i+1<=n && (i+1)%3==0) {
                    list.add("Fizz");
                }else if((i+1)%5==0){
                    list.add("Buzz");
                }
                else {
                    list.add(Integer.toString(i + 1));
                }

            }

        } else if (n%5==0) {
            for(int i=0;i+1<=n;i++){
                if((i+1<=n && (i+1)%3==0) && (i+1<=n && (i+1)%5==0) ){
                    list.add("FizzBuzz");
                }
                else if(i+1<=n && (i+1)%5==0) {
                    list.add("Buzz");
                }else if((i+1)%3==0){
                    list.add("Fizz");
                }
                else {
                    list.add(Integer.toString(i + 1));
                }

            }
        }
        else{
            list.add(Integer.toString(n));
        }

        return list;

    }
