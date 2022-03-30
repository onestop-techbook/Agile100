= 大学のゼミ活動でのアジャイル


今給黎 隆（@imagire, 東京工芸大学　芸術学部　ゲーム学科　教授）


この文章は、認定スクラムプロフェッショナル - スクラムマスターが大学教員になって、アジャイルの方法をどのようにゼミの活動に導入しているのかという物語です。

== 背景


自分が教えている学科では3年次からゼミ活動が始まります。名称としては「ゼミ」になってはいないのですが、3年の初めに学科の教員のいずれかが指導教員となって各教員が考えたプログラムの下で活動しています。


ゼミの方針ですが、自分の研究室では、3年次は個人の力を伸ばすための場としています。
前期は書籍の輪講を行い、後期は論文を輪講しています。
それ以外にもプログラミング力向上のために、AtCoder@<fn>{atcoder}の問題をモブプログラミングで解いたりしています（本番のコンテストは、もちろん個人戦です）。

//footnote[atcoder][AtCorder @<href>{https://atcoder.jp/, https://atcoder.jp/}]


4年次は卒業研究もしくは卒業制作になります。芸術学部なので、研究でなくて作品制作でも大丈夫です。自分の研究室では、チーム制作での卒業制作でゲームを作ったりもします。チーム制作の場合はアジャイルの手法が素直に当てはめられるので、スクラムを普通に適用します。

== 研究活動とアジャイル


これを読まれている方は、卒業研究をされた方が多いのでしょうか。
そのような方は、自分の時との違いを考えてもらいながら。卒研がまだだったり卒業制作などであった方は、こんな感じなのか（？）と、読んでもらえればと思います。


研究とは何でしょうか？


ざっくりと言うと、研究とは、新規性のあるネタを考えて、その考えを既存の手法と比較して、それなりの違いが出たところで論文としてまとめるプロジェクトと言えます。
卒業研究は、研究者となるための訓練や、おためし研究体験という意味合いも強く、論文誌に載るような研究になることは少ないのですが、学会発表で研究成果を発表することをゴールにしている研究室も多いです。


研究とアジャイルの親和性はとても高いです。
研究は、ゴールまでの道筋があらかじめ決まっているわけではありません。
最初に考えた方法を実装しようとしても、実現できなかったり効果がないことは当たり前、研究を進めていくうちに新しいアイデアが出てくることも日常茶飯事です
（というか、最初から最後までスムーズに進むような研究は、誰もが考えつくような新規性が低いアイデアの可能性が高いので、もっと背伸びをしてチャレンジしましょう）。
研究が進むにつれて目標を修正することは避けられません。
かといって、自転車操業で来週やることを毎週末に決めるのも先が見えなくて危険です。
卒業研究では「卒業」という強い〆切があるので、限られた期間の中でどのように成果を出すのかという事がとても重要になってきます。
教員としては、卒業研究のテーマになると、それまでの経験から大体の質・難易度の落としどころは想像しており、まったく間に合わなくはならないようになんとなく誘導はするのですが、それでもままならないことは多くあります。
この、作業を進めるにしたがってゴールが変化するという状況は、ソフトウェア開発で生じる現象と同じものと言えるでしょう。


そのような中、成果を最大化しようとするのにアジャイルの考え方・手法は役に立ちます。


なお、今回はチームではなく、個人研究のお話が主となります。
同じ研究室の人と相談はできるものの、主体的に進める人は一人しかいません。チーム開発で用いられているプラクティスのうち、複数人数を前提としていたり、暗に仮定している手法は使えないのが要注意ポイントです。

== 階層型のフィードバックサイクル


自分が意識しているのはフィードバックの多重性です。
「スクラムによって数週毎のイテレーションを回しているだけで良い」というのは、やはりありえません。全体的なプロジェクトの締め切りを見据えながら、そして中間で確認をするマネジメントはとても重要です。


「エクストリーム・プログラミングの計画とフィードバックのループ」でも、秒・分・時間・日・複数日・週・月といった周期の多重のフィードバックが紹介されています。
この階層的なフィードバックを卒業研究に適応しようと考えると、いくつかのはめやすい周期があるので、
その期間を基準にプロセスを構築しています。
いくつかの試行錯誤を繰り返して、現在は4階層のプロセスを実施しています。


//image[loop][ゼミ運営の階層型フィードバック][scale=0.3]

=== 毎年・3か月ごとの目標設定


大きな輪から見ていきましょう。1つ目のイテレーションの期間は1年です。
学校では、なんだかんだ言って学年ごとにカリキュラムが考えられています。
年度で全体スケジュールを考えなくてはならないことから、1年単位にふりかえるのは自然な事といえるでしょう。


この1年という期間が一番大きなものになるので、このイテレーションでは目指す目標を設定したい所です。
目標設定という点では、4年次は就活や卒研という目標があるので分かりやすいです。一方、3年次は「この1年で就活に対する準備をする」という、本来は幾ら時間があっても足りないぐらいなのですが、状況が見えにくく、ただ準備するように言っても何もしないことになりがちな危うい時期です。


こんな時に大事なのが表出化だと思っています。内面に持つものを強制的に書き出すことで、目標を目に見える状態にして、意識付けをしています。
具体的には、3年次に配属した最初のタイミングで、ビジョンステートメントとして自分の将来について考えてもらいます。

 * あなたの人生の目標は何ですか？
 * 人生の目標に達するためのステップはどのようなもので、何時までに達したいですか？
 * 人生のステップを進むために、大学卒業時にはどのようになるべきですか？



しかし、ただ目標を考えるだけでは、推進するための力としては弱いでしょう。OKR、といえるほどきちんと行えていないのですが、目標を短期間でできる成果に分解してもらっています。

 * 卒業時の姿になるまでに、3ヵ月単位で何ができているべきですか？
 * 3年終了時にできているものを用意するために、この3ヵ月間で何をしますか？



大学としては、前期・後期と半年ごとにカリキュラムが分かれているので、目標を半年ごとに管理する方が自然なのですが、半年ごとの管理では目標のチェックとして長いと感じているので、その半分ぐらいの3ヵ月単位での指標に詳細化してもらっています。

=== 毎月の1on1


目標ができたかどうかの確認ですが、毎日や毎週のふりかえりでは期間が短すぎて、なかなか3ヵ月単位の話と反りが合いません。
目標を確認するための機会は、ふりかえりとは別に必要です。それがOKRの内側のイテレーションになります。


自分のゼミでは、1on1をゼミの前の時間に行っています。
ゼミの開始前の30分を使って、毎週入れ替わりで30分か15分の長さで1on1をしています。
長さが複数あるのは、対象とする学生数の違いです。
3年生や4年生、院生は、ゼミの曜日を分けています。5, 6人ぐらいまでなら毎回30分話せるのですが、その人数を超えると、それぞれの学生と離す間隔が2ヵ月ぐらいになってしまいます。
なるべく1か月程度の周期で話ができるように、1on1を実施する長さの方を調整して、人数が多い場合は毎回2人の15分1on1をしています。


1on1で話す内容は、将来の目標についての確認と見直しや、4年次であれば就活相談をしています。それだけだとプレッシャーをかけまくる感じになりがちなので、現在やっているゲームや読んでいる本・マンガや見ているアニメなどを教えてもらったりもします（ゲーム学科だからね）。

=== 毎週のふりかえり


今回一番内側のループは、おなじみのふりかえりです。


学校は、時間割という形で強制的な時間の区切りが作られます。
大学4年のような卒業年次になると卒業研究以外の授業は取らないことも多いので（実情はともかく、なるべくそうなっていて欲しいです…）、時間割に縛られないのではないかと思うかもしれません。ですが、教員が他の講義・委員会の会議等で拘束されるので、週ごとの予定を決めるのがなんだかんだ言ってしっくりきます。
という事で、自然と一週間が1つのイテレーションの周期となります。


多くゼミでは、進捗報告が毎週あることが多いです。
これは、アジャイルの用語としてはレビューに当たるでしょう。
自分の研究室では、ゼミの時間の進捗報告や輪講をした後でふりかえりをしています。
一通りゼミでやることを終えた後に、ホワイトボードに付箋紙を貼ってふりかえりをしています。
オフラインで合えない場合には、zoomでmiroを画面共有しています。


ふりかえりの方法は、最初は「広く知られている」という事でKPTをするのですが、YWTに移っていくことが多いです。
KPTだと「やったこと」を思い出すステップが追加で必要になりがちなので、時間の省力化でYWTにしてしまいがちです（ブラック思考なので単純に真似しちゃダメ！）。


ただ、KPTやYWTでのふりかえりの方法はあまりよくないと悩んでいます。
個人での卒業研究のふりかえりとなると、普段の活動が個人単位の作業になるので、ふりかえりをみんなで行ったとしても他の人のTRYを考えるのはなかなかできません。
創発を促すようなファシリテーションをしたこともあるのですが、どうしても無理やり感が否めなかったので、強制的に他の人の付箋紙も観察してもらうのは止めています。
他にも、チーム全体としてのふりかえりでないと、自然と「誰誰さんはどの場所」と各人の書く位置が決まりがちです。
形式が固定化されてしまうのは、よろしくないと考えているのですが、よい改善はできていません。

== まとめ


自分のゼミをどのように運営しているのかという事を紹介しました。
試行錯誤を続けていて、まだまだ改善の途中です。
もっと、個人でできるアジャイル手法が確立できれば良いなと思っています。

　

//embed{
    \begin{minipage}{.1\linewidth}
        \centering
        \includegraphics[width=.75\linewidth]{images/chap-imagire/imagire.jpg}
    \end{minipage}
    \begin{minipage}{.89\linewidth}
        今給黎 隆 @imagire https://twitter.com/imagire\\
        東京工芸大学　芸術学部　ゲーム学科　教授
        \end{minipage}
    \hspace{1ex}
//}

いつかの会社でゲームプログラマをした後、大学の先生に転身。最近はアジャイルコミュニティへのコミットメントは、ほぼほぼできていませんが、ちょっと前にウィキペディアのエクストリーム・プログラミングの日本語ページを頑張って英語版の内容に近づけました。
