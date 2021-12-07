@echo off
docker run --rm -v %cd%:/book vvakame/review /bin/sh -c "cd /book && yarn && yarn build"
pause
