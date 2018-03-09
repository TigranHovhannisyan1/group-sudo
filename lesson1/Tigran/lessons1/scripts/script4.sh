#!/bin/bash
cd ../output/U1
if  test -f a.txt
then
	echo "U1 : a.txt $(cat a.txt)"
fi
cd U2
if test -f a.txt 
	then echo "U2 : a.txt $(cat a.txt)" 
fi
if test -f b.txt
	then echo "U2 : b.txt $(cat b.txt)"
fi
cd ../U3
if test -f a.txt
	then echo "U3 : a.txt $(cat a.txt)" 
fi
if test -f b.txt
        then echo "U3 : b.txt $(cat b.txt)"
fi
