main:
	gcc -lwiringPi -o main.o -c main.c
	gcc -lwiringPi -o lcd.o -c lcd.c
	gcc -lwiringPi -o lcd_init.o -c lcd_init.c
	gcc -lwiringPi -o main main.o lcd.o lcd_init.o
clean:
	rm -rf lcd.o lcd_init.o main.o main