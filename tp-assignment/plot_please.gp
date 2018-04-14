set term png 
set output 'centerTemp.png'
set ylabel 'Center Temperatue (K)'
set xlabel 'Time (in minutes)'
set title "Plot of Centre Temperature vs Time for Mild Steel"
plot 'out.txt' using 1:2