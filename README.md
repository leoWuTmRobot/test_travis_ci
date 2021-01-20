[![Build Status](https://travis-ci.com/leoWuTmRobot/test_travis_ci.svg?branch=main)](https://travis-ci.com/leoWuTmRobot/test_travis_ci)
[![codecov](https://codecov.io/gh/leoWuTmRobot/test_travis_ci/branch/main/graph/badge.svg?token=NZJJCU4148)](https://codecov.io/gh/leoWuTmRobot/test_travis_ci)
# test_travis_ci
test_travis_ci

## build ways
cmake ${CMAKE_OPTIONS} -DCMAKE_BUILD_TYPE=Coverage -DBUILD_TESTS=ON .
make
make test_ci_coverage
genhtml coverage.info -o report
go to report folder and click index.html
