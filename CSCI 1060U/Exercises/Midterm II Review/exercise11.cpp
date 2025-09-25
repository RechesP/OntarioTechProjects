/*Write a Linux command to change the permissions of a file named "file.txt" to read-only for everyone.*/

(base) jovyan@969b903ecfa8:~/work/Exercises/Midterm 2$ touch file.txt
(base) jovyan@969b903ecfa8:~/work/Exercises/Midterm 2$ ls -l

-rw-r--r-- 1 jovyan users     0 Nov  8 15:11 file.txt

(base) jovyan@969b903ecfa8:~/work/Exercises/Midterm 2$ chmod 444 file.txt

(base) jovyan@969b903ecfa8:~/work/Exercises/Midterm 2$ ls -l

-r--r--r-- 1 jovyan users     0 Nov  8 15:11 file.txt