1 PRINT TAB(28)"SAFE"
2 PRINT TAB(20)"CREATIVE CONFUTING"
3 PRINT TAB(18)"MORRISTOWN, NEW JERSEY"
4 PRINT
5 PRINT
6 PRINT
10 DIM A1(4)
20 PRINT"DO YOU WANT DIRECTIONS";
30 INPUT A$
40 IF A$="YES" THEN 80
50 IF A$="NO" THEN 250
60 PRINT"ANSWER YES OR NO"
70 GOTO 20
80 PRINT
90 PRINT
100 PRINT"YOU ARE A BURGULAR AND HAVE ENCOUNTERED A SAFE.  YOU  MUST"
110 PRINT"OPEN THE SAFE TO GET THE SECRET PLANS THAT YOU CAME FOR."
120 PRINT"TO DO THIS , YOU MUST ENTER THE NUMBER OF WHAT YOU WANT THE"
130 PRINT" DIAL TURNED TO, THE COMPUTER WILL ACT AS THE SAFE AND WILL"
140 PRINT"HELP YOU BY GIVING A SORT OF CLUE, THAT IS YOU WILL'HEAR'"
150 PRINT"A CLICK AT EVENLY SPACED NOTCHES AS YOU MOVE TO THE PROPER"
160 PRINT"NUMBER.  THERE ARE FOUR OF THEM BEFORE THE FINAL CLICK IS"
170 PRINT"'HEARD'. AFTER THE FINAL ONE IS HEARD, YOU WILL GO ON TO"
180 PRINT"THE NEXT NUMBER. THE COMPUTER WILL'SAY' 'CLICK' FOR EACH"
190 PRINT"NOTCH THAT YOU PASS AND '**CLICK**' WHEN YOU REACH THE"
200 PRINT"PROPER NUMBER.  IF YOU PASS IT OR TAKE LONGER THAN TEN TRIES"
210 PRINT "ON ANY ONE NUMBER, YOU WILL ACTIVATE THE ALARM."
220 PRINT"REMEMBER THAT WHEN YOU TURN THE DIAL TO THE LEFT, THE"
230 PRINT"NUMBERS GO FROM 1 -99 ,AND WHEN YOU GO TO THE RIGHT, THE"
240 PRINT"NUMBERS GO FROM 99-1"
250 PRINT"OKAY, START TO THE RIGHT,  SHHHHHH!!!!!!!!!!!!!!"
260 A=INT(RND(1)*81)+10
270 B=INT(RND(1)*81)+10
280 C=INT(RND(1)*81)+10
290 PRINT"ARE YOU READY";
300 INPUT A$
310 IF A$="YES" THEN 340
320 IF A$<>"WHAT"THEN 990
330 PRINTA;B;C
340 L=100-A
350 FOR M=1 TO 4
360 A1(M)=(5-M)*L/5+A
370 NEXT M
380 J=1
390 PRINT"OKAY, THEN LET'S START"
400 INPUT M
410 ON SGN(M-A)+2 GOTO 500,570,420
420 FOR K=1 TO 4
430 IF M>A1(K) THEN 460
440 PRINT"CLICK"
460 NEXT K
470 IF J>=10 THEN 500
480 J=J+1
490 GOTO 400
500 PRINT"THE SENSOR HAS BEEN TRI6GERED"
510 PRINT"LEAVE WHILE YOU CAN BEFORE THE"
520 PRINT"POLICE GET HERE."
530 PRINT"WANT TO TRY THE SAME SAFE";
540 INPUT A$
550 IF A$="YES" THEN 280
560 GOTO 250
570 PRINT"** CLICK **"
580 L=L+B
590 FOR K=1 TO 4
600 A1(K)=K*L/5+B
610 NEXT K
620 PRINT"AND NOW TO THE LEFT"
630 J=1
640 INPUT M
650 ON SGN(M-A)+2 GOTO 660,500,680
660 ON SGN(M-B)+2 GOTO 670,760,500
670 M=M+100
680 FOR K=1 TO 4
690 IF M<A1(K) THEN 720
700 PRINT"CLICK"
710 A1(K)=200
720 NEXT K
730 IF J>=10 THEN 500
740 J=J+1
750 GOTO 640
760 PRINT"** CLICK **"
770 L=(100-C)+B
780 FOR K=1 TO 4
790 A1(K)=B+100-K*L/5
800 NEXT K
810 PRINT"AND NOW TO THE RIGHT AGAIN"
820 J=1
830 INPUT M
840 ON SGN(M-B)+2 GOTO 860,500,850
850 ONSGN(M-C)+2 GOTO 500,950,870
860 M=M+100
870 FOR K=1 TO 4
880 IF M>A1(K) THEN 910
890 PRINT"CLICK"
900 A1(K)=-200
910 NEXT K
920 IF J>=10 THEN 500
930 J=J+1
940 GOTO 830
950 PRINT"** CLICK **...YOU OPENED IT"
960 PRINT"BUT OH,OH, HE MUST HAVE MOVED IT"
970 PRINT"TRY THE ONE OVER THERE"
980 GOTO 250
990 END
