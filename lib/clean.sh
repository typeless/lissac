#!/bin/bash

for i in `find -name "*~"` ; do rm $i ; done
for i in `find -name "*.c"` ; do rm $i ; done
for i in `find -name "*.old"` ; do rm $i ; done