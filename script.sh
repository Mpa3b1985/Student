#!/bin/bash

if [ "wc -l" > 0 ]; then
    rm ~/attachments/photo*
fi

for (( i=1; i<=20; i++ ))
do
    curl https://picsum.photos/800/400 -L > ~/attachments/photo$i
done
