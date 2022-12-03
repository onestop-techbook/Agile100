= 巨大な縦割りプロジェクトの中で① - アジャイル導入編 - 

//flushright{
岡島一樹(@k-okajima)
//}

== はじめに


普段私はエンジニアや現場リーダーとして開発に携わっていますが、今回のお話は私が最近まで携わっていた巨大ウォーターフォールプロジェクトの中にほんの一部アジャイルを導入してみたお話になります。このような特殊な状況下でアジャイルを導入するためにはどんな苦労があったのか、それに対してどんな工夫をしてきたのかを紹介していきたいと思います。

== プロジェクトの概要とアジャイルを導入するに至った経緯

=== 巨大なウォーターフォールプロジェクト


このプロジェクトはとても巨大で、私自身も2年間在籍していたにも関わらず全体像がよく分からないほどでした（笑）。以下の図のように縦割りのチームが何チームも存在しています。プロジェクト全体の開発手法はいわゆるウォーターフォールです。設計部隊と実装部隊が分かれていて、設計部隊が設計した内容で実装部隊が実装&単体テストを実施するという流れになります。各チームのリーダーがスケジュールを作成し、ガントチャートを引いてスケジュールを管理していきます。


//image[project-all][プロジェクト全体図]

=== フロントエンド開発チーム


この中で私は所属していたフロントエンド開発チームに所属していました。フロントエンドチームは画面チームA、画面チームB、画面チームC・・・といった感じで更にチームが細分化されているのですが、今回フォーカスするのは各画面チームに対して画面の共通部品を提供するチーム（以下、共通部品チームと呼称）です。ちなみに私は画面チームCのチームリーダーを担当しておりました。


//image[frontend-all][フロントエンド全体図]

=== ガントチャートが引けない共通部品チーム


このチームは他チームとは異なり、各画面チームから報告されたバグや、機能追加等のエンハンスを行っていくのですが、対応しなければならないIssueは日々変動し、優先順位も刻々と変わっていきます。各開発チームが必要とするためリリースも頻繁に行わなければならず、スピード感が求められます。都度やることが変わっていく中でガントチャートを引いてスケジュールをアップデートしていくのは現実的でしょうか？それをやろうとするとガントチャートを引く職人が専用で必要になります。絶対無理ですよね（笑）。


//image[ganttchart][このようなガントチャートは引くのは非現実的]

=== アジャイル開発の導入


そこでフロントエンド開発チーム全体を統括するリーダーはこの共通部品チームに限ってアジャイルでまわしていくことを決意しました。チームリーダーから与えられたミッションはざっくりと以下の通りです。

 * 各画面開発チームとコミュニケーションを取りながらIssueの優先度を決定していく
 * 日々変わっていくIssueの優先度に対して柔軟に対応する
 * リリースのスピードを上げ、各画面チームの生産性向上に貢献する
 * 朝会等のチームのイベントを自分たちでまわしていく
 * 毎週ふりかえりを行い、チームのプロセス改善につなげていく



まさにスクラムですね！ということで私はこのアジャイルチームの立ち上げに協力することになりました。まずなによりも大事なことは、プロジェクト全体はウォーターフォールで動いていることを前提に考えなければなりません。ウォーターフォールプロジェクトと言えば進捗定例会はつきものですよね。今回のプロジェクトでは週一回・月曜日に週次進捗定例会を実施しており、フロントエンドチーム内の各チーム毎に進捗報告を実施しています。よって共通部品チームも例外なくこの進捗定例会に出席して毎週進捗を報告しなければなりません。ということでこのチームでは以下のように月曜日の進捗定例会を軸に他のイベントの時間割を決めてスプリントを回しました。


//image[event1][進捗定例会を軸にしたイベント時間割]


では次章からはこの時間割をもとに実際にスプリントを回してみて出てきた問題点や苦労したこと、実際にトライしてみたことなどを紹介していきたいと思います。

　

//embed{
    \begin{minipage}{.1\linewidth}
        \centering
        \includegraphics[width=.75\linewidth]{images/chap-k-okajima1/snake.png}
    \end{minipage}
    \begin{minipage}{.89\linewidth}
        岡島一樹@k-okajima\\
        https://www.agile-studio.jp/blog\\
        https://qiita.com/k-okajima
        \end{minipage}
    \hspace{1ex}
//}

現場リーダー兼エンジニア。2017年頃からモダンな開発スタイルに触れるようになり、2019年にLSMの資格を取得して以降、プロジェクトの進め方やカイゼンについて深く考えるようになりました。アジャイル・ウォーターフォールに関わらず、プロジェクトがより良くなるために何をすべきなのかを常に考えて行動し、得られた知見を発信しています。
