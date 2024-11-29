import time
import random

price = random.randint(1, 30)
Text = 'Price is between 1 and 30:  '
Wrong = 'Try again!:  '
Number = int(input(Text))


while True:

    if Number == price:
        print('Correct, you found it!')
        time.sleep(2)
        print('YOU WON!!!!!')
        time.sleep(1)
        print('I\'m so proud of you')
        break
    elif Number < price:
        print('You\'re too low')
        time.sleep(1)
        Number = int(input(Wrong))
    elif Number > price:
        print('You\'re too high')
        time.sleep(1)
        Number = int(input(Wrong))
