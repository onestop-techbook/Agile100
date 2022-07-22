= kintoneでのアジャイルについて

//flushright{
ふーれむ@ditflame
//}


実は私、この本の執筆過程@<fn>{history}で転職する事になりました。次職ではkintoneを触る事になりそう
なのですが、「良いらしい」とかねがね噂に聞いていたkintone SIGNPOST@<fn>{signpost}(Ver1.1)という書籍を
この度入手し、読んでみたところなるほどな……となるポイントが色々とありました。


この本を手に取られる方はしっかりしたアジャイル開発をされてる方も多いと思うのですが、そういった方にも
本書の内容は有用だろうと考え、ここで紹介したいと思います。

//footnote[history][本書は2022年2月に開催予定の技書博６で発行予定でしたがコロナ禍で開催中止に。その為執筆時期が長くなった経緯が。]

//footnote[signpost][@<href>{https://kintone.cybozu.co.jp/kintone-signpost/, kintone SIGNPOST https://kintone.cybozu.co.jp/kintone-signpost/} なおWeb版は無料で誰でも読めます。輪読するなどであれば書籍の方が良いかもしれません。]

== kintone SIGNPOSTについて


さて、kintone SIGNPOSTとは一体何でしょうか？　書籍版の序文には次の記載があります。


『「kintone SIGNPOST（キントーン サインポスト）」は「kintoneで継続的な業務改善をするための道しるべ」と
して、kintone経験者の考え方やコツを体系的・網羅的にまとめたコンテンツです。』


kintoneにおける「継続的な業務改善」ですって？　どうにもアジャイルの香りがしますね。ここからは具体的なkintone SIGNPOSTの内容について確認していきましょう。

== kintone SIGNPOSTの全体サイクル


kintone SIGNPOSTの全体でのサイクルは大きく７つ(kintone概念理解、目的設定、プロジェクト企画、設計と構築、リリースと定着、運営、継続企画)のステップに分かれており、
それぞれの関係性は以下の様に図示されます。（@<strong>{書籍版}のP.6から引用）


//image[cycle][全体でのサイクル][scale=0.6]


さて、次からはそれぞれのステップについて紐解いてみましょう。

=== kintone概念理解


ここではkintoneの特性を概念的に理解するために手助けをしてくれる５つのパターンが示されます。
なお、このステップで言及されている５つのパターンはkintoneの利活用全体にかかわる考え方、動き方になるため、@<strong>{コアパターン}と呼ばれるようです。


アジャイル的な内容に絞って言及すると、「0-02 素早く繰り返す」@<fn>{素早く繰り返す}は簡単にいえばラピッドイテレーションしよう　という話です。
また、「0-03 開かれた情報」@<fn>{開かれた情報}はXPでの@<strong>{ソースコードの共同所有}を業務改善全般に展開したような内容になっています。


kintoneは「現場の人がkintoneで業務改善システムを作っちゃう」ユースケースを主な利用シナリオとして構築されており、
そのため「こういうレベルから情報公開をしましょう！」と認識を共有する必要があるんですね。

//footnote[素早く繰り返す][@<href>{https://kintone.cybozu.co.jp/kintone-signpost/pattern/0-02.html, 0-02 素早く繰り返す https://kintone.cybozu.co.jp/kintone-signpost/pattern/0-02.html}]

//footnote[開かれた情報][@<href>{https://kintone.cybozu.co.jp/kintone-signpost/pattern/0-03.html, 0-03 開かれた情報 https://kintone.cybozu.co.jp/kintone-signpost/pattern/0-03.html}]

=== 目的設定

ここではkintoneを効果的に用いる目的設定を行うための８つのパターンが示されます。


前項と同様にアジャイル的な内容や文脈に沿ったものをピックアップすると、「1-07 システム化のコンセプト」@<fn>{システム化のコンセプト}は例えばエレベーターピッチの様な、具体的な方向性・優先順位の提示ですし、
「1-08 現場とIT部門のチーム」@<fn>{現場とit部門のチーム}はXPにおけるチーム全体と同様の考え方ですね。他にもスモールスタートを説く「1-11 一足先に」@<fn>{一足先に}などがあります。

//footnote[システム化のコンセプト][@<href>{https://kintone.cybozu.co.jp/kintone-signpost/pattern/1-07.html, 1-07 システム化のコンセプト https://kintone.cybozu.co.jp/kintone-signpost/pattern/1-07.html}]

//footnote[現場とit部門のチーム][@<href>{https://kintone.cybozu.co.jp/kintone-signpost/pattern/1-08.html, 1-08 現場とIT部門のチーム https://kintone.cybozu.co.jp/kintone-signpost/pattern/1-08.html}]

//footnote[一足先に][@<href>{https://kintone.cybozu.co.jp/kintone-signpost/pattern/1-11.html, 1-11 一足先に https://kintone.cybozu.co.jp/kintone-signpost/pattern/1-11.html}]

=== プロジェクト企画


ここではkintoneを用いたプロジェクト企画のための８つのパターンが示されます。


「2-16 オープンな閲覧権限」@<fn>{オープンな閲覧権限}は情報共有の一貫ですし、「2-17 未来の変化への備え」@<fn>{未来の変化への備え}はもう
そのまんまアジャイルですし、「2-20 小さなリリース単位」@<fn>{小さなリリース単位}もXPでいうところの@<strong>{小さなリリース}そのものですね。


また、kintoneならではのトピックがあるのも面白いところではあります。「2-14 基本機能から考える」@<fn>{基本機能から考える}などは
パッケージソフトウェア利用時におけるベストプラクティス@<fn>{パッケージベスプラ}そのものです。


//footnote[オープンな閲覧権限][@<href>{https://kintone.cybozu.co.jp/kintone-signpost/pattern/2-16.html, 2-16 オープンな閲覧権限 https://kintone.cybozu.co.jp/kintone-signpost/pattern/2-16.html}]

//footnote[未来の変化への備え][@<href>{https://kintone.cybozu.co.jp/kintone-signpost/pattern/2-17.html, 2-17 未来の変化への備え https://kintone.cybozu.co.jp/kintone-signpost/pattern/2-17.html}]

//footnote[小さなリリース単位][@<href>{https://kintone.cybozu.co.jp/kintone-signpost/pattern/2-20.html, 2-20 小さなリリース単位 https://kintone.cybozu.co.jp/kintone-signpost/pattern/2-20.html}]

//footnote[基本機能から考える][@<href>{https://kintone.cybozu.co.jp/kintone-signpost/pattern/2-14.html, 2-14 基本機能から考える https://kintone.cybozu.co.jp/kintone-signpost/pattern/2-14.html}]

//footnote[パッケージベスプラ][一般的にパッケージソフトウェアで２割以上改造するならば、フルスクラッチで全部作った方が工数的に有利になると言われていますね。]

=== 設計と構築


ここではkintoneにおける設計、構築での１２のパターンが示されます。


筆者が特徴的だなと感じたものでいうと、例えば「3-26 担当別アプリ」@<fn>{担当別アプリ}でしょうか。アプリケーション設計においては共通部分は得てして
共通化したい！　となるケースが多いですが@<fn>{プログラミング作法}、kintoneは平易に使えるように設計・実装している事もあり、
むしろ@<strong>{担当が違うなら分離してそれぞれの取り回しを良くしましょう}というのが大方針として提示されている点が、kintoneならではという感じです。


また、アジャイルと直接深い関係は無いような気がしますが、たとえば３案以上の案を考えてトレードオフを検討しよう　という
「3-22 ３つ以上のアイデア」@<fn>{３つ以上のアイデア}や平易に開発を行うための「3-32 開発環境の用意」@<fn>{開発環境の用意}は大事ですね。@<fn>{開発環境ランドスケープ}

//footnote[担当別アプリ][@<href>{https://kintone.cybozu.co.jp/kintone-signpost/pattern/3-26.html, 3-26 担当別アプリ https://kintone.cybozu.co.jp/kintone-signpost/pattern/3-26.html}]

//footnote[プログラミング作法][ここらへんは例えばカーニハン先生の「プログラミング作法」という書籍にも２回までの同一ソースの記載は許容できるが３回以上同一のソースを分散して書いているのであれば関数化・モジュール化を検討せよという話があったりしますね。]

//footnote[３つ以上のアイデア][@<href>{https://kintone.cybozu.co.jp/kintone-signpost/pattern/3-22.html, 3-22 ３つ以上のアイデア https://kintone.cybozu.co.jp/kintone-signpost/pattern/3-22.html}]

//footnote[開発環境の用意][@<href>{https://kintone.cybozu.co.jp/kintone-signpost/pattern/3-32.html, 3-32 開発環境の用意 https://kintone.cybozu.co.jp/kintone-signpost/pattern/3-32.html}]

//footnote[開発環境ランドスケープ][個人的にはSAPみたいに３システムランドスケープを置こう！という感じで、複数ステージ環境を取れる方が良いのは非常に理解できます。まあ、SAPみたく３環境も取るのはやり過ぎな気もするので、現実的にはテスト/本番の２環境ぐらいに落ち着くのかなと思いますけども。最近は個人で環境持てたり良い時代になりましたよね……]

=== リリースと定着


ここではkintoneにおける実際の利活用での４パターンが示されます。


パターン数は少ないのですが、筆者としては個人的に秀逸な視点が多いと感じたセクションです。「4-33 現場代表」@<fn>{現場代表}などは
まさにアジャイルプロセスで速攻使うべきレベルですね。「利用者サイドの人に使い方を説明してもらいましょう」というのが要旨なのですが、
個人的にはあまり各種アジャイルプロセスではそこまで明確でなかった論点のような気がしています。どうなんでしょうか。
（まあ、利用者サイドも巻き込んでXP的に開発を進めた場合、自然と利用者側のメンバーが説明する事になる気はするのですが。）


また「4-35 要望箱アプリ」@<fn>{要望箱アプリ}ではユーザーニーズの継続的な取得、また要望や不安を集め、定着率向上のために情報収集アプローチをしましょう　と
いう話が説かれていたり、「4-36 利用率の把握」@<fn>{利用率の把握}で利用率を把握し、それを元に改善方針・優先順位を決定しましょうという話は大事ですね。
（特にkintoneにおいてはユーザ数に応じて課金されるので、利用率が低いのであればユーザを外すか利用率を上げる検討も必要となる様です。）

//footnote[現場代表][@<href>{https://kintone.cybozu.co.jp/kintone-signpost/pattern/4-33.html, 4-33 現場代表 https://kintone.cybozu.co.jp/kintone-signpost/pattern/4-33.html}]

//footnote[要望箱アプリ][@<href>{https://kintone.cybozu.co.jp/kintone-signpost/pattern/4-35.html, 4-35 要望箱アプリ https://kintone.cybozu.co.jp/kintone-signpost/pattern/4-35.html}]

//footnote[利用率の把握][@<href>{https://kintone.cybozu.co.jp/kintone-signpost/pattern/4-36.html, 4-36 利用率の把握 https://kintone.cybozu.co.jp/kintone-signpost/pattern/4-36.html}]

=== 運営


ここではkintoneにおける情報システムの運営での３パターンが示されます。


「5-37 継続的な振り返り」@<fn>{継続的な振り返り}はまさしくScrumの@<strong>{レトロスペクティブ}ですね。またアジャイルかといわれると難しい所ですが、
「5-39 トラブル対応フロー」@<fn>{トラブル対応フロー}は一般的なシステムでも必要な内容ですね。普通の情報システムであれば
運用管理の観点から設計・実装・運用がなされているかと思いますが、kintoneを使う層にはそういった観点が薄いだろうという考えが
背景にあるのでしょうね。こういった基礎的な内容も丁寧に説明が入っている点は非常に好感が持てます。

//footnote[継続的な振り返り][@<href>{https://kintone.cybozu.co.jp/kintone-signpost/pattern/5-37.html, 5-37 継続的な振り返り https://kintone.cybozu.co.jp/kintone-signpost/pattern/5-37.html}]

//footnote[トラブル対応フロー][@<href>{https://kintone.cybozu.co.jp/kintone-signpost/pattern/5-39.html, 5-39 トラブル対応フロー https://kintone.cybozu.co.jp/kintone-signpost/pattern/5-39.html}]

=== 継続企画


ここでは継続的に企画、推進を行うための４パターンが示されます。


「6-40 担い手を増やす」@<fn>{担い手を増やす}では利用者をどんどん開発者にしよう　という話が説かれます。なんともXPっぽい感じがあります。
恐らくですが、どんどんペアプログラミングや相互レビューで開発者が増えていくシナリオがモデルケースとして想定されているんでしょうね。

//footnote[担い手を増やす][@<href>{https://kintone.cybozu.co.jp/kintone-signpost/pattern/6-40.html, 6-40 担い手を増やす https://kintone.cybozu.co.jp/kintone-signpost/pattern/6-40.html}]

== おわりに


この章では最近テレビＣＭ@<fn>{ＣＭ}を良く見るようになったkintoneにおけるアジャイルについて、そのガイドラインであるkintone SIGNPOSTの内容を紹介しました。


今回、この記事を書くにあたりkintone SIGNPOSTの内容を確認してみましたが、実際アジャイルプロセスとの親和性は高く、相互に関連する内容も多かった様に思います。
kintone SIGNPOSTアジャイルプロセスを導入する際の副読本として用いたり、kintoneをまず前段で導入した後にアジャイルプロセスを本格的に導入していく　という方針も
現実的に有りではないかなという気がしました。

//footnote[ＣＭ][「ヒョウケイさんが開かない！」でよくみるあのＣＭですね。]


　

//embed{
    \begin{minipage}{.1\linewidth}
        \centering
        \includegraphics[width=.75\linewidth]{images/chap-ditflame2/ditflame_400x400.jpg}
    \end{minipage}
    \begin{minipage}{.89\linewidth}
        ふーれむ @ditflame https://twitter.com/ditflame\\
        Qiita(あんまり書いてないけど、とあるタグだとランカー) https://qiita.com/ditflame
        \end{minipage}
    \hspace{1ex}
//}



おやかたさんが合同誌企画を立ち上げると最近は大抵横にいる人です。大阪在住。一応エンベデッドスペでセスペでデスペな人だったりもします。経歴的には受諾開発SE→社内SE(内製型)→サポートエンジニア
