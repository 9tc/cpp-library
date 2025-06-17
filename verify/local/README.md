# ローカルテストディレクトリ

このディレクトリには、オンラインジャッジに提出せず、ローカルで実行するためのテストファイルが含まれています。

## 実行方法

### Z-Algorithmテスト
```bash
# ビルド
make z-test

# 実行
make run-z-test

# デバッグモードで実行
make run-z-test-debug
```

### バブルソートテスト
```bash
# ビルド
make bubble-test

# 実行
make run-bubble-test
```

### すべてのテストを実行
```bash
make run-all-tests
```

## 含まれるテスト

- `z-algorithm-test.cpp` - Z-Algorithmの実装テスト
  - 12個のテストケース
  - デバッグモードでより詳細な検証が可能

- `bubble-sort-test.cpp` - バブルソートの実装テスト
  - 8個のテストケース（整数、浮動小数点数、文字列など）
  - 各パスごとの中間状態を表示
  - 交換回数の検証
