#include "../../template.hpp"
#include "../../sort/bubble-sort.hpp"

// テスト用関数 - 配列がソートされているかチェック
template <class T>
bool isSorted(const vector<T>& arr) {
  for (size_t i = 1; i < arr.size(); ++i) {
    if (arr[i-1] > arr[i]) return false;
  }
  return true;
}

// テスト実行用関数
template <class T>
bool runSortTest(const string& testName, vector<T> arr, const vector<T>& expected) {
  cout << "テスト " << testName << ": ";

  // 元の配列を表示
  cout << "\n  入力: [";
  for (size_t i = 0; i < arr.size(); ++i) {
    if (i > 0) cout << ", ";
    cout << arr[i];
  }
  cout << "]" << endl;

  // バブルソート実行
  int swapCount = bubbleSort(arr, true);

  // ソート結果を表示
  cout << "  出力: [";
  for (size_t i = 0; i < arr.size(); ++i) {
    if (i > 0) cout << ", ";
    cout << arr[i];
  }
  cout << "]" << endl;
  cout << "  交換回数: " << swapCount << endl;

  // 結果の検証
  bool correctSort = isSorted(arr);
  bool matchesExpected = (arr == expected);

  if (correctSort && matchesExpected) {
    cout << "  結果: 成功 ✓" << endl;
    return true;
  } else {
    cout << "  結果: 失敗 ✗" << endl;
    if (!correctSort) {
      cout << "    エラー: 配列が正しくソートされていません" << endl;
    }
    if (!matchesExpected) {
      cout << "    エラー: 期待結果と一致しません" << endl;
      cout << "    期待結果: [";
      for (size_t i = 0; i < expected.size(); ++i) {
        if (i > 0) cout << ", ";
        cout << expected[i];
      }
      cout << "]" << endl;
    }
    return false;
  }
}

// すべてのテストを実行
void runAllTests() {
  int passedCount = 0;
  int totalTests = 0;

  // テストケース1: 標準的な配列
  {
    vector<int> arr = {5, 3, 8, 1, 2, 7, 4, 6};
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8};
    if (runSortTest("ケース1 (標準的な配列)", arr, expected)) passedCount++;
    totalTests++;
  }

  // テストケース2: 既にソート済みの配列
  {
    vector<int> arr = {1, 2, 3, 4, 5};
    vector<int> expected = {1, 2, 3, 4, 5};
    if (runSortTest("ケース2 (ソート済み)", arr, expected)) passedCount++;
    totalTests++;
  }

  // テストケース3: 逆順の配列
  {
    vector<int> arr = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    if (runSortTest("ケース3 (逆順)", arr, expected)) passedCount++;
    totalTests++;
  }

  // テストケース4: 重複を含む配列
  {
    vector<int> arr = {4, 2, 4, 1, 3, 2};
    vector<int> expected = {1, 2, 2, 3, 4, 4};
    if (runSortTest("ケース4 (重複あり)", arr, expected)) passedCount++;
    totalTests++;
  }

  // テストケース5: 単一要素
  {
    vector<int> arr = {42};
    vector<int> expected = {42};
    if (runSortTest("ケース5 (単一要素)", arr, expected)) passedCount++;
    totalTests++;
  }

  // テストケース6: 空配列
  {
    vector<int> arr = {};
    vector<int> expected = {};
    if (runSortTest("ケース6 (空配列)", arr, expected)) passedCount++;
    totalTests++;
  }

  // テストケース7: 浮動小数点数
  {
    vector<double> arr = {3.14, 1.41, 2.71, 1.73};
    vector<double> expected = {1.41, 1.73, 2.71, 3.14};
    if (runSortTest("ケース7 (浮動小数点数)", arr, expected)) passedCount++;
    totalTests++;
  }

  // テストケース8: 文字列
  {
    vector<string> arr = {"orange", "apple", "banana", "grape"};
    vector<string> expected = {"apple", "banana", "grape", "orange"};
    if (runSortTest("ケース8 (文字列)", arr, expected)) passedCount++;
    totalTests++;
  }

  // 結果を表示
  cout << "\n全" << totalTests << "テスト中 " << passedCount << "個成功 (" 
       << (passedCount * 100 / totalTests) << "%)" << endl;
}

int main() {
  cout << "=== バブルソート自動テスト ===" << endl;
  runAllTests();
  return 0;
}
