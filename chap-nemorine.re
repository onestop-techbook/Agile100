= テストとチェックと探索と。（Testing vs. Checking vs. Exploring）

//flushright{
nemorine
//}

== TestingとCheckingとExploring

ソフトウェアテストの中では、「TestingやCheckingは違う」などと言われることがあります。本当にTestingとCheckingは違うものなのでしょうか？
そしてアジャイル開発と親和性が高いExploring（探索）はTestingと同じものなのでしょうか？それともTestingの一部なのでしょうか？それとも全くの別物なのでしょうか？
実はTestingとCheckingとExploringの定義は流派があります。
これからいくつかの流派を年代順に紹介していきますので、色々な人の意見を確認して自分にしっくりの定義を選んでもらえると良いと思います。


== Michael Boltonさんのサイト（2009/8/29）

Testing vs. Checking
https://www.developsense.com/blog/2009/08/testing-vs-checking/

簡単な要約

 * Checkingは確認である。(Checking Is Confirmation)
    * プログラムが失敗しないことにフォーカスを当てるものである。
 * Testingは探索と学習である。 (Testing Is Exploration and Learning)
    * 「プログラムがどのように動くか、どのように動かないかについて重要なことすべてをしっかりと学習する」ことにフォーカスを当てるものである。

検証と妥当性のどちらにおいても既知のことを確認する場合はCheckingになります。
一方、Testingは探索と学習と言っています。これは未知のものに対するアプローチになり、探索のみならず、システムや機能について学習することが求められます。またテストには「知性」が必要ということも書かれています。
ここでは完全にCheckingという概念とTestingを分けているのがポイントです。
要するに既知のことを確認する場合は、それはテストとは言わないということですね。自動テストも「自動チェッキング」にしたらどうかという提案もしています。


== James Bachさんのサイト（2013/3/26） with Michael Boltonさん

Testing and Checking Refined
https://www.satisfice.com/blog/archives/856

簡単な要約

 * Testingとは、製品を体験、探索、実験を通じて学習することにより製品の評価をおこなうプロセスである。これには質問、調査、モデリング、観察、推論などを含む。
 * Checkingとは、製品の確認にアルゴリズムをもった決定ルールを適用することにより評価をおこなうプロセスである。
 * CheckingはTestingの中の要素である。
     * TestingにはCheckingが含まれるが、CheckingにはTestingは含まれない。
 * Checkingの特徴は完全自動化できることだが、Testingは本質的に人間の活動である。
 * Checkingは3種類ある
     * 人間によるCheking
     * 機械によるCheking
     * 人間/機械によるCheking

この主張ではTestingとCheckingは完全に分離された概念ではなく、Testingの中の一部にCheckingがあるというイメージになっています。
またTestingは本質的に人間の活動であり、シャーロックホームズのイメージだと書かれています。


== Explore It! (2013/2/21) Elisabeth Hendricksonさん

Explore It!（書籍）
https://www.amazon.co.jp/dp/1937785025

簡単な要約

 * Tested = Checked + Explored
     * Testingには2つの側面があり、それがすなわちCheckingとExploring（探索）である。
     * CheckingとExploring（探索）の両方が終わるまでテストが完了したとは言えない。

いままでの流派では、CheckingとTestingを対比する定義が多かったですが、Explore It!では探索に重点を置いているのが分かります。
Testingが完了するのは、ソフトウェアが期待を満たすことをCheckingし、さらなるリスクが無いかについてのExploringが終わったときですと書かれていて、個人的には一番スッキリする定義だと思っています。

せっかくなので、Explore It!における探索的テストの定義を書いておきます。

Simultaneously designing and executing tests to learn about the system, using your insights from the last experiment to inform the next.
直近の実験から得た”気づき”を次の実験へ活用し、テスト設計と実行を同時に行い、システムについて学習していくこと。

ここでも「学習」が入ってきています。すなわちテストは学習の機会を提供する、と読み換えることもできると思います。

== まとめ

流派をまとめましたが、どの流派がいいかを決めるつもりで書いたわけではありません。
流れを紐解きながら先人たちの思考の課程を感じる。そして自分でも考えてみることが重要だと思います。
またプレゼンなどで引用されることも多いと思いますので、話者はどの定義を念頭におきながら話しているかが分かるだけでも、理解がより一層進むと思います。

Peace!

　

//embed{
    \begin{minipage}{.1\linewidth}
        \centering
        \includegraphics[width=.75\linewidth]{images/nemorine_400x400.jpg}
    \end{minipage}
    \begin{minipage}{.89\linewidth}
        nemorine @nemorine https://twitter.com/nemorine
        \end{minipage}
    \hspace{1ex}
//}

札幌の某半導体メーカに勤めるQAエンジニア。北海道と美味しいものをこよなく愛す。アジャイル系とソフトウェアテスト系の両方に足を突っ込んで社外活動をしている。アジャイル札幌代表。
