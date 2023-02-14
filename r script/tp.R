name<-readline(prompt = "enter the name")
print(name,quote=FALSE)
resno<-as.integer(readline(prompt = "enter your roll nO."))
resno<-resno*5
imp<-scan()
inp<-imp*5*5
mark<-scan(what=double())
percentage<-(mark[1]+mark[2]+mark[3]+mark[4]+mark[5])/5
percentage
print(paste("your name",name,"enter resno",resno,"imp ",imp))
for(i in 1:40){
  k=0
  for(j in 1:i){
    if(i%%j==0){
      k=k+1
     }
  }
if(k==2){
  cat("number",i)
} 
  
}
c<-8%%7
x<-2
man<-function(x){
 if(x%%2==0)
   return("even")
  else
    return("odd")
}
num<-as.integer(readline())
man(i)
.rdb
getwd()

setwd("C:/Users/Yash/Documents/paper")
data= read.csv('phaltu.csv',sep =",",header=TRUE)







































