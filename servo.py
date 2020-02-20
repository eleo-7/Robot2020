import RPi.GPIO as GPIO
import time

fPWM = 50 #frequence du pwm

GPIO.setmode(GPIO.BOARD)
GPIO.setwarnings(False)

bras_droit = 7

GPIO.setup(bras_droit, GPIO.OUT)

pwmBras_droit = GPIO.PWM(bras_droit, fPWM)

pwmBras_droit.start(0)

def servo_droit(deg):
	pwmBras_droit.ChangeDutyCycle(float(deg / 180 * 12.5))
	time.sleep(0.3)
	pwmBras_droit.ChangeDutyCycle(float(0))

if __name__ == "__main__":
	while True:
		cmd = int(input())
		if cmd <180 and cmd >0:
			servo_droit(cmd)