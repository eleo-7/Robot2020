import serial

path = "/home/pi/Documents/Robot-2020/from_a_to_pi.txt"

try:
    ser = serial.Serial('/dev/ttyUSB0',9600)
except:
    ser = serial.Serial('/dev/ttyACM1',9600)

def Read_from_arduino():
	return str(ser.readline())[2:-5]

def Write_to_arduino(val):
	ser.wite(val.encode('utf-8'))
	delay(50)

if __name__ == '__main__':
	import RPi.GPIO as GPIO

	GPIO.setwarnings(False)
	GPIO.setmode(GPIO.BOARD)

	while True :
	    a=Read_from_arduino()
	    if a != "":
	        print(a)
	        # with open(path,'w') as file:
	        # 	file.write(a)
	        # GPIO.output(send_pin, GPIO.HIGH)