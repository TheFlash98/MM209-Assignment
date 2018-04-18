set term png 
set output 'question2.png'
set ylabel 'Center Temperatue (K)'
set xlabel 'Time (in minutes)'
set title "Plot of Centre Temperature vs Time for Copper"
plot 'out-2.txt' using 1:2