# Bazel-coverage-test
BazelでC++のカバレッジ計測を行うためのテストリポジトリ

残念ながら一部欠損したカバレッジ結果(テストコードが依存しているコードのカバレッジは計測できない)が返される


## 実行方法
```
docker-compose build
docker-compose run bc
```

コンテナ内部で
```
bazel coverage -s \
    --instrument_test_targets \
    --experimental_cc_coverage \
    --combined_report=lcov \
    --coverage_report_generator=@bazel_tools//tools/test/CoverageOutputGenerator/java/com/google/devtools/coverageoutputgenerator:Main \
    //...
```

```
genhtml bazel-testlogs/Test/test/coverage.dat --output-directory cov
```

外部で
```
cd cov
open index.html
```
