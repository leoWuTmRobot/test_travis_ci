[![Build Status](https://travis-ci.com/leoWuTmRobot/test_travis_ci.svg?branch=main)](https://travis-ci.com/leoWuTmRobot/test_travis_ci)
[![codecov](https://codecov.io/gh/leoWuTmRobot/test_travis_ci/branch/main/graph/badge.svg?token=NZJJCU4148)](https://codecov.io/gh/leoWuTmRobot/test_travis_ci)
![github_actions_gtest_example](https://github.com/leoWuTmRobot/test_travis_ci/workflows/c++_CI_test/badge.svg)
# test_travis_ci
test_travis_ci<br>

## build ways
cmake ${CMAKE_OPTIONS} -DCMAKE_BUILD_TYPE=Coverage -DBUILD_TESTS=ON .<br>
make<br>
make test_ci_coverage<br>
genhtml coverage.info -o report<br>
go to report folder and click index.html<br>

