= Be Agile with TDDBC.

//flushright{
@PoohSunny
//}

== はじめに


こんにちは。PoohSunnyといいます。普段はリクルートという会社でエンジニア組織のグループマネージャーをやっています。また、コミュニティとしてTDD Boot Camp（以下TDDBC）@<fn>{tddbc}のスタッフとして運営のお手伝いをしています。


私にとってTDDBCは自分のこれまでのエンジニア人生を語る上でとても貴重な存在です。今日は、TDDBCを紹介することを目的として、TDDBCに導かれる中で私がどのようにアジャイルの世界に惹かれ、どのように人を知り、知識と経験をしてきたのかをご紹介したいと思います。

//footnote[tddbc][@<href>{http://devtesting.jp/tddbc/, http://devtesting.jp/tddbc/}]

== TDDBCとの関わり


TDDBCはテスト駆動開発をハンズオン形式で学べるイベントです。2009年に初回が実施されました。@<fn>{1st}
以来全国津々浦々で複数回に渡って実施されています。

//footnote[1st][@<href>{https://kokucheese.com/event/index/750/, https://kokucheese.com/event/index/750/}]


=== 和田さんの「TDDのこころ」と出会う


私がTDDBCのことを知ったのは、Info talkというイベントでした@<fn>{infotalk}。当時私はとんでもないレガシーコードと格闘しており、その改善の足がかりを見つけるためにJenkinsの講演を聞きに行きました。


たまたまですが、その講演が二部構成で、前半がJenkinsのお話、後半が和田卓人さんの「TDDのこころ」でした。その講演を聞き、かつ懇親会でお話しすることができ、TDDとTDDBCのことを知りました。

//footnote[infotalk][@<href>{https://sites.google.com/a/aiit.ac.jp/infotalk/home/20120720, https://sites.google.com/a/aiit.ac.jp/infotalk/home/20120720}2012年7月20日]

=== TDDBCに初参加


そこで、TDDBCにも参加してみることにしました。運よく横浜2ndの募集が間も無くあり、そこで初めて参加することができました。


初参加した時のことは今も記憶に残っています。TDDBCは基調講演、ペアプロのデモ、体験、レビュー、質問、懇親会と言った流れで進むのですが、川西さんの基調講演や、ペアプロの体験とレビュー、TA（ティーチングアシスタント）の皆さんへのQAタイムはもちろんとして、懇親会でLT大会がありその内容で爆笑したことなど、TDDを体験して知識・経験をつけるだけでなく、世の中のエンジニアはこんなすごい人がいるんだと目から鱗でした。


その年のおしまいにTDDのアドベントカレンダーも企画されたので、参加した感想も踏まえて書いたのですがはっきりとその喜びと、次回は運営のお手伝いがしたいことを書いていました。
@<href>{https://poohsunny.hatenablog.com/entry/2012/12/20/110958, https://poohsunny.hatenablog.com/entry/2012/12/20/110958}

=== スタッフのお手伝いへ


TDDBCの経験が楽しかったことへのありがとうという意味と、そこにいる人たちへの憧れと言った感情から、勇気を出してスタッフとしてお手伝いすることにしました。


最初にスタッフとして参加した時のこともしっかり記憶に残っているのですが、参加者として参加した時は「参加してくれてありがとうございました」とお声がけいただいたのが、スタッフ初回の初日に「今日はよろしくお願いします」って挨拶いただいたのがとても印象的でした。新参スタッフで右も左もわからず、どちらかというとスタッフとして混ぜていただいてありがとうごあいますという気分だったのですが、意外なほどgentleな対応してもらったことに感動しました。HRTの原則ということがありますが、それを体験したのもTDDBCでした。


そこから運営として、複数回のTDDBCに参加させてもらうようになり、他のスタッフの皆さん（繰り返しますが、自分のエンジニアとしての憧れの対象です）に追いつけるように、あるいはその人たちに貢献できるように、とコミュニティの中でチャレンジするようになり、ペアプロデモを担当したり、TDDBCのgithubの運営を手伝ったりとできることを増やしていきました。


最近の状況からTDDBCも開催場所をオフラインからオンラインに移し、基調講演等も録画がYoutubeで見られるようになったりと進化を遂げています。最近はそのオンライン基調講演の補足リンク集を作りました。

== Agile系のイベントへ


TDDは「アジャイルのライトウィング」と言われることもあります@<fn>{rightwing}が、この辺りから本格的にAgile系のイベントにも出入りするようになります。


例えば、先日あじゃてくでも読書会@<fn>{agiletech}をした『アジャイルサムライ』@<fn>{agilesamurai}読者を中心にしたイベントであるAgile Samurai Base Campと言ったイベントのスタッフをやらせてもらって自分の仕事でのTDD実践活動を事例紹介したりしました@<fn>{basecamp}。

//footnote[rightwing][@<href>{https://blogs.itmedia.co.jp/hiranabe/2012/09/rightwing-and-leftwing-of-agile.html, https://blogs.itmedia.co.jp/hiranabe/2012/09/rightwing-and-leftwing-of-agile.html}]

//footnote[agiletech][@<href>{https://agiletechexpo.connpass.com/event/226472/, https://agiletechexpo.connpass.com/event/226472/}]

//footnote[agilesamurai][@<href>{https://www.ohmsha.co.jp/book/9784274068560/, https://www.ohmsha.co.jp/book/9784274068560/}]

//footnote[basecamp][@<href>{https://poohsunny.hatenablog.com/entry/2013/12/09/202352, https://poohsunny.hatenablog.com/entry/2013/12/09/202352}]

=== フィードバックサイクルとともに成長する


このように複数のコミュニティや勉強会に出入りするようになり、そこでの学びを仕事などでも活かすようになると、自分の携わった活動に様々なフィードバックをもらえるようになったことに気づきました。


そのいただいたフィードバックを活かし、成長するとともに、そこで出会った縁で新たな活動をさせてもらうようになりました。現職もそれらの縁の延長線上に存在しています。

=== ふりかえる


このように思い返してみると、自分はTDDBCを通してアジャイルの練度を高めてきたと思います。それは知識・スキルだけでなく、周りにいる凄腕のエンジニアの人たちに刺激を受けたり、その人たちに追いつきたいと思ったり、という様々な縁に導かれた結果自然にそうなっていた、という話でした。


『プログラマが知るべき97のこと』@<fn>{97}の和田さんの紹介欄に「その後様々な縁に導かれソフトウェアパターンやXP(eXtreme Programming)を実践する人たちと出会い、後のテスト駆動開発の誕生を知る」という記述があります。


私はこの表現が大好きで、自分も和田さんをきっかけにしてTDDBCで様々な縁に導かれて、エンジニアとしてのキャリアを続けてきたと感じます。この縁のサイクルを、仕事でも、それ以外でも紡いでいければと考えています。

//footnote[97][@<href>{https://www.oreilly.co.jp/books/9784873114798/, https://www.oreilly.co.jp/books/9784873114798/}]

== Be Agile with TDDBC


先述の通り、TDDBC自体も、近年のオンライン開催など、引き続き進化を続けています。


もしもTDDに興味がある人、テスト駆動開発なにそれ？という人、テストやTDDに挑んだけど絶望してしまった人、いろんなエンジニアと関わって自分の視野を広めたい人がいたら、ぜひTDDBCに遊びにきませんか。


二回目三回目の人も歓迎ですし、もし興味がある人が入れば勇気を持ってスタッフやTA（Teaching Assitant）として運営を手伝っていただくのも大歓迎です。（私がそうだったように、ちょっと背伸びするくらいの期待値でお待ちしています）


というわけで、TDDBCとともに「Be Agile」になっていきましょう！

　

//embed{
    \begin{minipage}{.1\linewidth}
        \centering
        \includegraphics[width=.75\linewidth]{images/chap-poohsunny/photo.png}
    \end{minipage}
    \begin{minipage}{.89\linewidth}
        高橋陽太郎 @PoohSunny https://twitter.com/poohsunny\\
        \end{minipage}
    \hspace{1ex}
//}

ERPパッケージベンダー、勤怠SaaSエンジニアを経て、株式会社リクルートジョブズ（当時）入社。入社以来一貫してHR領域、特にタウンワークをはじめとしたアルバイト、パート領域の開発に携わり、2019年からはマネージャーとして開発組織を牽引し、現在はリクルートで開発組織の深化・進化に力を注いでいる。また社外では、TDDBC等のコミュニティ運営にも携わっており、著作として『エキスパートが教えるSelenium最前線』（共著）がある。
