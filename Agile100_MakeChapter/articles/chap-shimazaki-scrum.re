= スクラム導入の一例

//flushright{
島崎純一@junsora
//}


皆さんは「アジャイル」と言うと、どのようなフレームワークを想像しますか？エクストリームプログラミング（XP）、カンバン、スクラム etc... 人によって想像されるものは変わってきますね。


私自身は、その中でも、カンバンやスクラムの馴染みが強く、関わった経験も多いフレームワークになります。そして、特にスクラムは、組織のアジャイル化に向けて導入される、今ではポピュラーとなるフレームワークになります。


この章では、アジャイルの経験が無いメンバーに対し、スクラムフレームワークを導入していくまでをお伝えいたします。人やプロダクトの状況、タイミングにより、導入の流れは異なると思いますが、一つの参考として、読者の皆様に伝われば良いと思います。

== チームとプロダクトの状況


スクラムフレームワークを導入する際、スクラムチームとなるメンバーの知見や性格、プロダクトの性質によって導入の方法、容易さなど差が出てきます。


例えば、チームメンバーがスクラムを理解していて、変化を歓迎するメンバーであれば、導入すると決まってからのスピードは早く、容易に導入できることが考えられます。しかし、会社や組織全体がスクラムに対し批判的であったり、プロダクトとして仮説検証が不要で、作るべきものが既に定まっている状態であれば、導入前に組織的な理解を得るために苦労したり、導入したけど上手くいかないといったことになると考えられます。


そのため、まずは私が導入に関わったチームについて簡単にご紹介いたします。

=== チームメンバーの性質


今回対象になったチームについては、スクラムガイド@<fn>{scrumguide}で定義されている、プロダクトオーナー、開発チーム、スクラムマスターの他に、関連プロダクトに関わる開発アドバイザー、プロダクトマネジメントオフィス(PMO)、クオリティマネジメント(QM)と、シンプルではないスクラムチームになります。

//footnote[scrumguide][スクラムガイド @<href>{https://scrumguides.org/docs/scrumguide/v2020/2020-Scrum-Guide-Japanese.pdf, https://scrumguides.org/docs/scrumguide/v2020/2020-Scrum-Guide-Japanese.pdf}]

==== プロダクトオーナー


プロダクトオーナーはプロダクトマネージャとして参画しています。新しい事が好きで、チームメンバーのやり易さを重視する考えを持っています。アジャイル、スクラム経験は無いが、プロダクトを作る上で、知識は持っている状態でした。

==== 開発チーム


開発チームは5人。リーダー、インフラ1名、バックエンド開発1名、フロント開発2名。基本的には社内のメンバーですが、フロント開発はシステムエンジニアサービス（SES）で参画いただいています。技術に対して、新しいことをしたいメンバーが多い中、アジャイル経験者は少なく、知識も多くは持っていない状態でした。

==== スクラムマスター


本章を執筆している人。アジャイル開発が好きで、アジャイルの価値は理解しているつもりです。スクラム開発経験は、スクラムマスター兼保守開発として2年経験しており、認定スクラムマスターは所持しています。スクラムに関わってはいたが、導入は行った経験はありません。スクラムマスターだけでなく他プロダクトのプロダクトマネージャ兼任中です。

=== 組織の性質


組織として、プロダクトは多く所持しているものの、開発体制が特殊なことが多く、スクラムのような事はしているが、ウォーターフォールを連続させていることが多いです。ただし、進め方などは比較的プロダクトマネージャに任せているのが現状です。

=== 対象プロダクトの性質


プロダクトを生み出す段階。事業部要求とプロダクト構想はあるが、顧客への価値が見出しにくいプロダクトだったため、事業部要求を元に、小さく繰り返し、顧客への価値を探求する形で進める必要がありました。技術的にも、知見のない技術を使い、やりたいことにマッチできるのか、使う上での課題等、確認しながら進める必要がありました。

== スクラムを開始する


ここからは、私が実際にチームに導入していく話をお伝えします。チームで変化のあったSprintを切り出しています。

==== Sprint -1 スクラムで進めると決めるまで


プロダクトの性質上、どのようにすれば、顧客に価値があり、使われるプロダクトになるのか分からなかった事もあり、事業部要求を元に仮説を立て、最低限必要な機能を付けたものをMinimumValueProduct（MVP）とし開発することになりました。MVPに必要なタスクを全て洗い出し構築後、その他必要な機能は顧客ヒアリングを通し価値を上げていく作戦です。


MVP開発後、価値探求をするためにはどのようにするか？スクラム開発の出番です。スクラム開発として、チームで動けるようチーム文化を構築しながら、経験のない開発チームにスクラムを体験してもらい、価値探求できるよう準備していく形でPOや開発チームと話がまとまりました。

==== Sprint 0 スクラムを導入するための準備


チームメンバーからしたら初めてのスクラムです。細かいルールが無いと、うまく進まない事も多々あるが、チームとして必要なルールやフローにすべきだと判断し、出来る限り用意はしないようにしました。ただし、何も無いと話しが進まないので、ベースに必要な下記は用意しています。

 * カンバンでチケット管理する
 * 1スプリントは1週間とする
 * デイリースクラムの流れと時間
 * スプリントプランニングの流れと時間
 * スプリントレビューの流れと時間



スクラムイベントも、やるべきタスクが決まっており、タスク消化する時間を確保すべきだと考えたことから、あえて検査と適応の場であるスプリントレトロスペクティブを削りました。もはやスクラムとは言えなくなりますが、MVPリリース後にスクラムとして価値探求が出来るように経験してもらうことが重要なため目を瞑ります。

==== Sprint 1 初めてのスプリント


不慣れなこともあり、チケットをどう扱ったらいいのか、カンバンをどう活用したらいいのか、各イベントで何を話したらいいのか、メンバー的にもわからないことだらけだった事もあり、進みは非常に悪かったです。


そんな中、スプリントレビュー時に勇気を出して提案してくれるメンバーがいたため、いくつかのカイゼンが行われました。

 * レビューに向けて用意するもの定義
 * 各ステータスのフローやチケットを動かすルール
 * タスク洗い出し
 * 困ったことリストの作成



カイゼンの中で特徴的だったのが、困ったことリストです。わからない事、どうしたらいいかわからない事、なにか引っかかる事を自由にチケット化してよいカンバンが作成されました。


また、ルールを少なくした結果、最初の動き出しは淀みがちですが、チームメンバーが決めることで、モチベーションへの影響や自己管理化に繋がると感じました。

==== Sprint 4 ゴールの見える化


ここまでの経験値を元に、各イベントをこなすことができるようになりました。あるべきは、レトロスペクティブ等で課題を出し合ったり、スクラムマスターから問いを投入すべきでしたが、タスク消化することをメインで進めたかったため、引き続き実施せず、進めました。


ただし、ゴールの見える化は必要だと感じたので、「アジャイルな見積もりと計画作り」@<fn>{agile_estimate}を元に、残タスクの消化可能なスケジュールを提示し始めました。


この見える化により、タスクを消化し切る時期が見えるようになり、チーム全員がゴールを意識するようになります。

//footnote[agile_estimate][アジャイルな見積もりと計画作り @<href>{https://www.amazon.co.jp/dp/B00IR1HYGW, https://www.amazon.co.jp/dp/B00IR1HYGW}]

==== Sprint 8 起点


スクラムの流れにも慣れ始め、困った事リストを活用し、悩みが共有されるようになっていました。
開発チームとしては、技術検証している点もあったため、デイリースクラム後、課題詳細を話す技術ミーティングが自発的に設けられ、技術検証だけでなく、相互理解が進んでいました。


しかし、起点が訪れます。スケジュール的に少し遅れが目立ってきていた事もあり、ゴールがどこなのか、今の進め方が本当に正しかったのか？疑問に思うメンバーも出始めます。そこで、スプリントレトロスペクティブの時間を設けるように変更し、開発チーム、POともやもやした内容を共有を始めることになりました。

==== Sprint 9 ふりかえり導入


スプリントレトロスペクティブを導入し、スクラムイベントがすべて実施されました。


初回のスプリントレトロスペクティブでは、「Good/Bad/もやもや」を出しました。実施した結果、開発メンバーはアジャイルにもっと進めたいと考えていた点が共有され、POが考えるゴールの共有が行われた結果、手が行き届いていない機能が発覚し、新しいタスクが生まれました。

==== Sprint X これから


各スプリントを通して、スクラムフレームワークの進め方、チーム文化の構築、スクラムの価値基準や3本柱の経験をしていただくことが出来たかと思います。チームレベルとしてはまだまだ「do agile」なので、引き続き支援し、「be agile」に育てる必要はありますが、最初の一歩としては歩き出せたと思います。

== 全体を通した所感


ルールの作成を最小限に抑えた点は全体的に良かったと感じています。ルールが無いから困る事は多いですが、この「困る事」をチームで共有し、チームで解決できたのがポイントです。


レトロスペクティブの導入は遅かったかもしれません。でも、気づいたときにすぐに行動することがベストだと思うので、カイゼンまでのスピード、また、それに適応できるメンバーは素晴らしいと思います。


　

//embed{
    \begin{minipage}{.1\linewidth}
        \centering
        \includegraphics[width=.75\linewidth]{images/chap-shimazaki/junsora.jpg}
    \end{minipage}
    \begin{minipage}{.89\linewidth}
        島崎純一 @junsora https://twitter.com/JuKoA453\\
        \end{minipage}
    \hspace{1ex}
//}

プロダクトマネージャ&スクラムマスター ◁ スクラムマスター ◁ DevOps 人を知り、チームでプロダクトを作る中、社内企画を通し、組織を作る人。