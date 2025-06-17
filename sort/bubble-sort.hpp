#pragma once

/**
 * @brief バブルソート - O(n^2)の比較ベースソートアルゴリズム
 * @tparam T 配列の要素の型
 * @param[in,out] arr ソートする配列
 * @param[in] verbose 詳細表示フラグ（デフォルトはfalse）
 * @return int 交換回数
 */
template <class T>
int bubbleSort(vector<T>& arr, bool verbose = false) {
  int n = arr.size();
  int swapCount = 0;

  for (int i = 0; i < n - 1; ++i) {
    bool swapped = false;

    // 各パスで最大値を右端に移動（降順に処理）
    for (int j = 0; j < n - 1 - i; ++j) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
        swapCount++;
        swapped = true;
      }
    }

    // 途中で交換が発生しなければ既にソート済み
    if (!swapped) break;

    // 詳細表示モード
    if (verbose) {
      cout << "Pass " << (i + 1) << ": ";
      for (int k = 0; k < n; ++k) {
        if (k > 0) cout << " ";
        cout << arr[k];
      }
      cout << endl;
    }
  }

  return swapCount;
}
