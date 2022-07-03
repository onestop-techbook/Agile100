= 失敗したと思ったスクラムをなぜ失敗したかを考える

//flushright{
98lerr @98lerr
//}

スクラムとの出会いは、人によってそれぞれだと思います。不幸な形で出会ってしまった方もいるのではないでしょうか。
しかし、不幸な形のスクラムを作った人たちも、周りを不幸にしようとして取り組んでいたわけではありません。そうであったと信じています。  


自分の体験元に一部創作したケーススタディをあげます。それはどのような善意から生まれたか、どんなかけ違いが起きてしまったのか、この中で考えていきたいと思います。  

== ケース : トップダウンで始めたスクラム


スクラムは、複数チームを統括するチーフの号令から始まりました。リリース予定のサービスの完成が延期を続けていたことに対しての提案で、スクラム未経験のメンバーで始めました。  


決めたルールは、2つ。一つ、毎朝前日やったこととその日やる予定のこと、前日計画通り進まなかった理由を話すこと。一つ、週に一度会議室で2時間、1週間の在り方を見直すこと。それぞれの会には当面、チーフも参加することとなりました。

毎朝その日やることを宣言し、翌日の朝会で終わらなかった理由を反省を込めて話します。
そして、週に一度の会はチーフによる進捗確認とメンバー個人への総評。タスク計画や取り組み方の問題点の指摘を受け、各自で翌週以降の取り組みへの改善を考えます。  


しかし、この申請のスクラムチームはチーフの思うようにはなりませんでした。
ガントチャート文化に慣れたメンバーは、日々の報告は「計画した作業が予定通り終わった」か、あるいは「遅延したのであとどれぐらい必要」の報告だけになりました。時に遅延の理由、はまっているところについての質問をチーフから行われますが、明確な回答は出ませんでした。

また、週に一度の「進捗確認と総評の会」は、次第にメンバーにとって恐怖のイベントになっていきました。自分の番が来れば「すみません」「力不足でした」を繰り返し、他の人の番ではその責められる姿に見兼ねてひたすら下を向くしかありませんでした。  


そんな中でも、チームは無事サービスのリリースを終えることができました。リリースできたという「成功体験」を得たチームは、チーフが去った後もこの仕組みをもとにチームを回していくことにしました。  

== 裏目に出た善意


スクラムをご存知の方なら、前述の内容の「スクラム」の中にある数々の違和感に気付かれたことでしょう。ただ、これらは当然「仕事をやりにくくしよう」といった悪意をもとにしたものではなく、善意から生まれてきているものです。

どんな善意かを考え、何が裏目に出てしまったのか。
アプローチの良し悪しはチームや状況でも変わってきますが、その一例として考察を挙げていきます。  

=== 「まず走り切る体験をする」という名の変わらない働き方


何事も、やってみて体験から自分の言葉になって実践できるようになる。よくある始め方だと思います。ここでは難しい方法は除き、シンプルに「日次確認」と「週次確認」の2つのみを導入しました。たくさんのことを覚えず、日々のリズムの中に立ち止まり、むきなおるタイミングを作るだけでも違うだろうという考えのもとだったと思います。

これはわかりやすいようでいて、難しい始め方でした。実際に起きていたのは、いわゆる「日報」「週次定例」というものと変わらないものになったということです。個人が自分の割り当てタスクをこなして報告する形になっていたのが、この状況の表す一つの症状だったのでしょう。

=== 「言葉に踊らされない」つもりがスクラムから乖離していく


透明性(Transparency)、検査(Inspection)、適応(Adaptation)の3つの柱。スクラム初学者が「なかなかイメージしにくい」という話しをし、徐々に理解していこうということも多い気はしています。しかし、理解できるかに関わらず、これを意識して活動出来るか否かは大きな差を産むのでは無いかと思います。

「透明性」があるということは、各々が今何を何のためにしていて、自分に立ちはだかる壁を可能な限り言語化している状態にあるいうことになります。透明性が保たれるからこそ、「検査」をチーム内で行い、教える、あるいは尋問するといった形でなく、相談することができます。自らで作った透明性に対して行われた検査だからこそ、それぞれは自身を「適応」させることができますし、それはチームとしても同様です。  


言葉に踊らされないようにと、スクラム特有の言葉を使わずに進む結果、この重要な相互協力のための形が失われました。イメージがしにくいなりに、そしてこれはスプリントゴールやプロダクトゴールに向かえているかと同様に繰り返し考え直したい内容です。スクラムが実現したい姿、そしてなぜ自分達がスクラムをやっているかをチーム考えることで、よりチームをよりよくするプロセスが働くのでしょう。  

=== 「伴走」のはずが尋問になる


チーフはアジャイルコーチかスクラムマスター、あるいはその両方の役割を持とうとしたのでしょうが、こうしたところから開発者たちの自律的な動きはなかなか成立しませんでした。

前述の通り、毎朝の会も、毎週の会も、ただの報告会としてしか成立しませんでした。この状況下では、チーフからのアドバイスは叱責に、困りごとの共有はチーフへのお伺いのような形になります。この状態が始まると、チーフが善意を持ってアドバイスを試みても、メンバーは萎縮し、さらに自律性を失っていくことになります。
結果、メンバーにとってはどんどんとスクラムが辛いものになり、チーフにとってもその状況を見るのが辛くなっていきます。  

== 前に進むために


ここまで、悪い話を書いてきました。
しばらくこの状況は続くのですが、いくつかのきっかけで前を向いていく話も共有します。とはいえ、これらは皆「まず始めてみる」ために省略されたスクラムイベントを始めることでその歪さが解消されていったというものです。実際どうなのかはわかりませんが、スクラムイベントを省略して始めるにしろ、数スプリント以内にイベントは実施していった方が良いのでしょう。  

=== 成果物の確認


極度に「週次ミーティングでの成果に対する追求」を恐れるようになっていたチームは、その後しばらく、週次ミーティングはタスクの完了と、次の週のやることの整理のみを行うようになりました。しかし、その進め方だと次第に「今週終わらなかったから来週引き続き」ということが多くなってきました。

チームは進め方を見直し、「スプリントレビュー」に定義される成果物の確認を計画に入れました。これは同時に、プラニングで「完了の定義」を行うことにつながります。チームは、これを通して毎週何が出来るかを意識し、個人で悩みすぎずにチームでどうやって達成するかを考えやすくなりました。

=== ふりかえり


同様に「反省会」を恐れるチームは、週次ミーティングでもレトロスペクティブを避けるようになっていました。しかし、そこを打破するきっかけになったのは年間ふりかえりです。
タイムラインを使い、一年通してのポジティブ、ネガティブ 両方の感想をふりかえる中、ポジティブなふりかえりの中に相互共有したい学びがたくさんあることに気づきます。「ふりかえり＝反省会」から脱出できた瞬間でした。

一度そこに気づくと、ふりかえりは途端に楽しいものに変わります。週次のイベントに組み込まれると共に、学びの共有、深堀が大事なものであるとチームで認識を持つことができるようになりました。  

== 最後に


この機会に、自分が最初に体験した(そしてうまくいかなかったと感じていた)スクラムで何が難しかったのかを言語化してみました。自分自身にとって考え直す良い機会になりました。

こういった「導入初期のうまくいかない」はチームによって様々でしょうし、たらればの話なのでこのチームがこれらを意識したらうまくいっていたかもわかりません。しかし、陥りがちな問題への対処例の一つとして共有することが、どなたかの助けになればと思います。  

　

//embed{
    \begin{minipage}{.1\linewidth}
        \centering
        \includegraphics[width=.75\linewidth]{images/98lerr.jpg}
    \end{minipage}
    \begin{minipage}{.89\linewidth}
        98lerr @98lerr https://twitter.com/98lerr\\
        \end{minipage}
    \hspace{1ex}
//}

SIerに所属。自律的に楽しく働けるチームはどう育てられるんだろうと考え、色々試すのが好きです。
