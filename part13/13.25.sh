#!/bin/bash
#autousb

echo "Welcome to use AUTOUSB"
echo "Do you want load USB(y/n)?"

read ANSWER

if [ $ANSWER = "Y" -o $ANSWER = "y" ];then
    mount -t vfat /dev/sda1 /mnt/usb
    echo "Do you want copy files to /root(y/n)?"
    read ANSWER
    while [ $ANSWER = "y" -o $ANSWER = "Y" ];do
        ls -a /mnt/usb
        echo "Type the filename you want to copy"
        read FILE
        cp /mnt/usb/"$FILE" /root
        if [ $? -eq 0 ];then
            echo "copy finishec"
        else
            echo "Copy errored"
        fi
        echo "Any other files(y/n)?"
        read ANSWER
    done
fi

echo "Do you want to copy files to usb(y/n)?"
read ANSWER
while [ $ANSWER = "y" -o $ANSWER = "Y" ]
do
    ls -a /root
    echo "Type the filename you want to copy to usb"
    read FILE
    cp "/root/$FILE" /mnt/usb
    if [ $? -eq 0 ];then
        echo "Copy file finished"
    else
        echo "Copy file errored"
    fi
    echo "Any other files(y/n)?"
    read ANSWER
done

echo "Do you want to umont usb(y/n)?"
read ANSWER
if [ $ANSWER = "Y" -o $ANSWER = "y" ];then
    umount /mnt/usb
else
    echo "Haven't umount!"
fi
echo "GoodBye!"
