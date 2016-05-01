#!/bin/bash
for i in {1..30}
do
	touch temp$i.txt
	git add -A
	a="Wed May "
	b=$i
	c=" 14:00 2016 +0530"
	export GIT_AUTHOR_DATE=$a$b$c
	export GIT_COMMITTER_DATE=$a$b$c
	git commit -am "latest code"
	c=" 16:00 2016 +0530"
	export GIT_AUTHOR_DATE=$a$b$c
	export GIT_COMMITTER_DATE=$a$b$c
	git commit -am "latest code"
	rm temp$i.txt
	c=" 18:00 2016 +0530"
	export GIT_AUTHOR_DATE=$a$b$c
	export GIT_COMMITTER_DATE=$a$b$c
	git commit -am "latest code"
done