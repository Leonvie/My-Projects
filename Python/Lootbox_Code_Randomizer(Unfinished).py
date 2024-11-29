import random
import time

# -------------------------------------------------------------------------
lootbox_chance = random.randint(1, 1000)  # Lootbox Percentage %
# This is the reward list with the following rewards:

# Common----
common = [
    'common - Pikachu',
    'common - Trollface',
    'common - Uganda Knuckles',
    'common - Grumpy Cat',
    'common - Doge'
]
# uncommon----
uncommon = [
    'uncommon - Homer Simpson',
    'uncommon - Dat Boi',
    'uncommon - Spongebob Squarepants',
    'uncommon - Kermit the Frog',
    'uncommon - Charlie Brown'
]
# epic----
epic = [
    'epic - Rick Sanchez',
    'epic - Pepe the Frog',
    'epic - Wojak'
]
# legendary----
legendary = [
    'legendary - Catnap',
    'legendary - Dogday',
    'legendary - Rambly the Raccoon'
]
# mythic----
mythic = [
    'mythic - Eevee'
]

# -------------------------------------------------------------------------
got = 'You got: '

on_off = input('Would you like Automatic? (ON/OFF)')
if on_off.lower() == 'on':
    automatic = 2
elif on_off.lower() != 'on':
    automatic = 1

if automatic == 1:
    while True:
        input("Would you like to buy a lootbox?:  ")
        time.sleep(0.5)
        print('.')
        time.sleep(0.5)
        print('. .')
        time.sleep(0.5)
        print('. . .')
        time.sleep(0.5)

        if 1 <= lootbox_chance <= 400:
            random_common = random.choice(common)
            print(got + random_common)

        elif 401 <= lootbox_chance <= 700:
            random_uncommon = random.choice(uncommon)
            print(got + random_uncommon)
        elif 701 <= lootbox_chance <= 950:
            random_epic = random.choice(epic)
            print(got + random_epic)
        elif 951 <= lootbox_chance <= 990:
            random_legendary = random.choice(legendary)
            print(got + random_legendary)
        elif 991 <= lootbox_chance <= 1000:
            random_mythic = random.choice(mythic)
            print(got + random_mythic)
        try_again = input('Type to close reward: ')

elif automatic == 2:
    while True:
        print('.')
        time.sleep(0.5)
        print('. .')
        time.sleep(0.5)
        print('. . .')
        time.sleep(0.5)

        if 1 <= lootbox_chance <= 400:
            random_common = random.choice(common)
            print(got + random_common)

        elif 401 <= lootbox_chance <= 700:
            random_uncommon = random.choice(uncommon)
            print(got + random_uncommon)
        elif 701 <= lootbox_chance <= 950:
            random_epic = random.choice(epic)
            print(got + random_epic)
        elif 951 <= lootbox_chance <= 990:
            random_legendary = random.choice(legendary)
            print(got + random_legendary)
        elif 991 <= lootbox_chance <= 1000:
            random_mythic = random.choice(mythic)
            print(got + random_mythic)
