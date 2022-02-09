- 問題URL
  https://atcoder.jp/contests/abc195/tasks/abc195_b

- 問題メモ
A(最小の重さ) B(最大の重さ) W(合計の重さ)

- 重さがキログラム単位だと扱いにくいのでグラム単位に変換（1000を掛ける）  
- みかんの数を全部探索する。重さにあったオレンジの数が用意できる条件は  
A * (みかんの数) <= W <= B *　(みかんの数)  
である。よってこの条件のときの数の時に最大数と最小数を更新すれば良い。  
一回も更新されてなかったらどの数でも用意できなかったということになるのでUNSATISFIABLEを出力

- ソース
https://github.com/mofrun/Competitive-programming/blob/main/AtCoder/ABC195/B%20-%20Many%20Oranges.cpp


- 余談  
題名がオレンジなのに日本語問題文はみかんにするのね
