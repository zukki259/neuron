# neuron
勉強用

##ファイルの説明  
sigmoid.c: シグモイド関数の定義  
sigmoid.h: double sigmoid(double x)をincludeする  
test_sigmoid.c: シグモイド関数のテスト用コード  
neurons.c: ニューラルネットワークの動作の定義  
neurons.h: 仕様用途未定。  
Makefile: 今の所次のコマンドが使える  
make test_sigmoid  
make clean  

##これから作る予定のもの  
1.訓練データや実験用のデータをテキストファイルなどから読み込めるようにする  
2.ニューラルネットワークの誤差逆伝播法による最適化の実装  
3.畳み込みニューラルネットワークの実装  
