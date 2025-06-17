#include "../../template.hpp"
#include "../../string/z-algorithm.hpp"

// 実際にZ値を手動検証する関数
void verifyZValues(const string& s, const vector<int>& z) {
  for (size_t i = 0; i < s.length(); ++i) {
    int expected_z = 0;
    // 実際に文字列を比較して検証
    while (i + expected_z < s.length() && s[expected_z] == s[i + expected_z]) {
      expected_z++;
    }
    if (z[i] != expected_z) {
      cout << "検証エラー: インデックス " << i << " の Z値が間違っています。" 
           << "計算値: " << expected_z << "、アルゴリズム結果: " << z[i] << endl;
      // 詳細なコンテキスト表示
      cout << "  位置 " << i << " (" << s.substr(i, min(10, (int)s.length() - (int)i)) << "...)" << endl;
      cout << "  接頭辞 (" << s.substr(0, min(10, (int)s.length())) << "...)" << endl;
    }
  }
}

bool runTest(const string& testName, const string& s, const vector<int>& expected) {
  try {
    // 入力の検証
    cout << "テスト " << testName << ": ";

    vector<int> result = ZAlgorithm(const_cast<string&>(s));

    // 実装の整合性を検証（オプション）
    // verifyZValues(s, result);

    bool passed = (result.size() == expected.size());
    for (size_t i = 0; passed && i < result.size(); ++i) {
      if (result[i] != expected[i]) {
        passed = false;
      }
    }

    if (passed) {
      cout << "成功" << endl;
    } else {
      cout << "失敗" << endl;
      cout << "  入力文字列: " << (s.empty() ? "<空文字列>" : s) << endl;

      // 失敗したインデックスを特定
      if (result.size() != expected.size()) {
        cout << "  サイズが一致しません: 期待="  << expected.size() 
             << ", 実際=" << result.size() << endl;
      } else {
        for (size_t i = 0; i < result.size(); ++i) {
          if (result[i] != expected[i]) {
            cout << "  不一致箇所: インデックス " << i << ", 期待=" 
                 << expected[i] << ", 実際=" << result[i] << endl;
          }
        }
      }

      cout << "  期待結果: ";
      if (expected.empty()) {
        cout << "<空配列>";
      } else {
        for (int val : expected) cout << val << " ";
      }
      cout << endl;
      cout << "  実際結果: ";
      if (result.empty()) {
        cout << "<空配列>";
      } else {
        for (int val : result) cout << val << " ";
      }
      cout << endl;
    }

    return passed;
  } catch (const std::exception& e) {
    cout << "失敗 (例外発生: " << e.what() << ")" << endl;
    return false;
  } catch (...) {
    cout << "失敗 (不明な例外が発生)" << endl;
    return false;
  }
}

void runAllTests() {
  int passedCount = 0;
  int totalTests = 0;

  // テストケース1: 基本的な例
  {
    string s = "aaaaa";
    vector<int> expected = {5, 4, 3, 2, 1};
    if (runTest("ケース1 (同一文字の繰り返し)", s, expected)) passedCount++;
    totalTests++;
  }

  // テストケース2: 繰り返しパターン
  {
    string s = "ababab";
    vector<int> expected = {6, 0, 4, 0, 2, 0};
    if (runTest("ケース2 (繰り返しパターン)", s, expected)) passedCount++;
    totalTests++;
  }

  // テストケース3: より複雑なパターン
  {
    string s = "abacaba";
    vector<int> expected = {7, 0, 1, 0, 3, 0, 1};
    if (runTest("ケース3 (複雑なパターン)", s, expected)) passedCount++;
    totalTests++;
  }

  // テストケース4: 一致しないパターン
  {
    string s = "abcdef";
    vector<int> expected = {6, 0, 0, 0, 0, 0};
    if (runTest("ケース4 (一致しないパターン)", s, expected)) passedCount++;
    totalTests++;
  }

  // テストケース5: 空文字列
  {
    string s = "";
    vector<int> expected = {};
    if (runTest("ケース5 (空文字列)", s, expected)) passedCount++;
    totalTests++;
  }

  // テストケース6: 単一文字
  {
    string s = "a";
    vector<int> expected = {1};
    if (runTest("ケース6 (単一文字)", s, expected)) passedCount++;
    totalTests++;
  }

  // テストケース7: 前後対称パターン
  {
    string s = "level";
    vector<int> expected = {5, 0, 0, 0, 1};
    if (runTest("ケース7 (前後対称)", s, expected)) passedCount++;
    totalTests++;
  }

  // テストケース8: 長いパターン
  {
    string s = "aabaabaab";
    vector<int> expected = {9, 1, 0, 6, 1, 0, 3, 1, 0};
    if (runTest("ケース8 (長い繰り返し)", s, expected)) passedCount++;
    totalTests++;
  }

  // テストケース9: 境界ケース
  {
    string s = "aaa";
    vector<int> expected = {3, 2, 1};
    if (runTest("ケース9 (短い同一文字)", s, expected)) passedCount++;
    totalTests++;
  }

  // テストケース10: 複雑な繰り返し
  {
    string s = "aabaabaaabaabaaab";
    vector<int> expected = {17, 1, 0, 5, 1, 0, 2, 10, 1, 0, 5, 1, 0, 2, 3, 1, 0};
    if (runTest("ケース10 (複雑な繰り返し)", s, expected)) passedCount++;
    totalTests++;
  }

  // テストケース11: 異なる種類の文字
  {
    string s = "abc123xyz";
    vector<int> expected = {9, 0, 0, 0, 0, 0, 0, 0, 0};
    if (runTest("ケース11 (異なる種類の文字)", s, expected)) passedCount++;
    totalTests++;
  }

  // テストケース12: 非ASCII文字
  {
    string s = "こんにちは世界";
    // 実際のZ値を正確に期待値として設定
    vector<int> expected = {21, 0, 0, 1, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0};
    if (runTest("ケース12 (非ASCII文字)", s, expected)) passedCount++;
    totalTests++;
  }

  cout << "\n全" << totalTests << "テスト中 " << passedCount << "個成功 (" 
       << (passedCount * 100 / totalTests) << "%)" << endl;
}

int main(int argc, char* argv[]) {
  cout << "=== Z-Algorithm自動テスト ===" << endl;

  // デバッグモードの検出
  bool debug = false;
  if (argc > 1 && string(argv[1]) == "--debug") {
    debug = true;
    cout << "[デバッグモード有効]" << endl;
  }

  if (debug) {
    // 特定のテストケースを手動検証
    cout << "\n=== 手動検証モード ===" << endl;
    vector<string> testStrings = {
      "aabaabaaabaabaaab",
      "こんにちは世界"
    };

    for (const auto& s : testStrings) {
      cout << "文字列: " << s << endl;
      vector<int> result = ZAlgorithm(const_cast<string&>(s));

      cout << "Z値: ";
      for (int val : result) cout << val << " ";
      cout << endl;

      // 手動での検証
      cout << "検証中..." << endl;
      verifyZValues(s, result);
      cout << "検証完了" << endl << endl;
    }
  } else {
    // 通常のテスト実行
    runAllTests();
  }

  return 0;
}
