setMode -bs
setMode -bs
setCable -port auto
Identify 
identifyMPM 
assignFile -p 1 -file "D:/3120102116/p2/hlz/lab2.bit"
Program -p 1 
Program -p 1 
Program -p 1 
ReadIdcode -p 1 
Program -p 1 
Program -p 1 
saveProjectFile -file "D:\3120102116\p2\hlz/hlz.ipf"
setMode -bs
deleteDevice -position 2
deleteDevice -position 1
