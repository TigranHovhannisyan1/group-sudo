#!/bin/bash
IFS=:
for folder in ../output/U1/*
do
if [ "$folder"=="*.txt" ]
then
echo "$folder: $( cat $folder)"
else
echo "$folfer :"
fi
for file in $folder/*
do
if [ -e $file ]
then
if [ "$file"=="*.txt" ]
then
echo "$file  $(cat $file)"
else
echo "$file :"
fi
fi
for fl in $file/*
do
if [ -e $fl ]
then 
if [ "$fl"=="*.txt" ]
then
echo "$fl : $(cat $fl)"
else
	echo "$fl :"
fi
fi
done
done
done
