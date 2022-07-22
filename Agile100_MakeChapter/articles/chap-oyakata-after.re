= 執筆だってアジャイルに行こう

//flushright{
おやかた@oyakata2438
//}

本書企画、編集のおやかた@oyakata2438です。

本書のふりかえりと編集後記を兼ねてのポエムにお付き合いください。

== 本書・本企画におけるアジャイル

この本のテーマは、実体験を幅広く集めるということで、@<strong>{「ぼくのアジャイル100本ノック」}というタイトルになりました。

本書の企画において、最重要としたのは、@<strong>{実体験を集めたい}という点です。小ネタやくだらない（と各章の著者本人が思う）ネタであっても、刺さる人がいるのです。初心者だから書けない、知識内から書けない、そんな思い込みはポイです。


そのため、編集関係のやり取りは、Agile Tech EXPOのDiscordサーバーの中に@<strong>{#100本ノック}というチャンネルを作って行いました。できるだけ常駐するようにし、困ったことはなるはやで解決する、フィードバックはすぐに行う、ということに留意しました。

ネタに困った、相談したい、というときに、すぐにポジティブなフィードバックが来たらうれしくなりませんか？「あ、ニーズあるんだ、続き書いてみよう」と思ってくれたら大成功ですよね。

編集後記といいつつ、この章を書いているのは、初稿締め切りの日中です。

そのあとどうなったのかは、本書を見ていただければと思います。

@<strong>{初稿、あるいは目次だけでも外に出してみましょう}という声掛けは、繰り返し繰り返し行いました。参加者の呼びかけ、あるいは原稿出してねの声掛けは、目標の100本に届いてなかったという実務的な要請以外にも、少しづつ「小出し」にすることで、迅速なフィードバックを期待してのことです。

小さい進捗を共有することで、迅速なフィードバックとそれに基づく方向修正、加速こそ、様々な書籍やトークで触れられているアジャイルの本質だと思っています。そのための方法論が様々にありますが、本書に参加した方は、それが実体験として得られたなら幸いです。

執筆だって、アジャイルに進めることができるんです。

執筆以外にも、たいていのプロジェクトもので使えるのでは？もちろんこの辺りは様々な考え方があるでしょう。アンチパターン、失敗例もあるに違いありません。

== 執筆者の皆様へ

書いてみた皆さん、参加した感想はいかがだったでしょう？

思ったよりサクッと書けましたか？やっぱり、あるいは想像以上に難産でしたか？参加すると手を上げてはみたけれどやっぱりやめておけばよかった、なんて後悔してますか？

本企画に手を上げてくださった方（特に最初に手を上げてくれた人）は、すでに様々なアウトプット（ブログや登壇、執筆など）をされている方がやはり多かったように思います。ですが、徐々に「初めてです！」「初めて書いてみます」という人が増えてきたように思います。もちろんオーガナイザーの皆さんの声掛けがあってこそ、たくさんの方に声が届きその背中を押すことになったのですが、「初めてのアウトプット」に踏み出す人の背中を押す機会としたいという本企画の目的も達成できたと感じています。

初めて、@<strong>{自分の意思で}アウトプットをしてみた方、やってみた感想はどうでしょうか？思考や経験の整理になった、悩んでたことに解決の糸口が見つかった、過去を見直すきっかけになった、などが得られたらうれしいです。執筆の感想は、ぜひブログ等で書いてみてください。それも立派なアウトプットです。そのブログを見かけた人、Tweetを見かけた人が、新しいアウトプットを始めるかもしれません。

また、難しかった点、困った点などもぜひ教えてください。次の企画に反映させます。

=== 執筆・編集におけるアジャイル

この本は、原稿ファイルをGitHubで管理しています。複数人で同時並行で書くとき、競合しないとか、コンパイルエラーがあったときに変更点がわかりやすいなどのメリットもありますが、ブランチ運用としてMainブランチへの直Push/Pull Requestを推奨しています。

普通のソフトウエア開発において（チームや会社によって流儀はあるにせよ）、Mainへのマージは、本番環境へのリリースに近い意味があるでしょうし、開発ブランチで様々な検証が行われることでしょう。

一方で本においては、表に見えない/検証が必要な目に見えないバグというものはほぼ存在しません。であれば、Main一本で運用して人の目に触れるようにした方が確実にブラッシュアップされます。コメントも付けやすいですよね。他の人のネタ・原稿からアイディア、インスピレーションを得て自分の原稿に反映したり、といったプロセスも期待しています。

あとは、編集側としても、直接修正、あるいは最新バージョンを見て修正のお願いをするなどの運用が楽になります。

また、本書では、細かい編集や体裁上の調整、誤字修正は編集長の方で行いますというのを明言して進めました。

どこをどう直したのかがわかりやすいというメリットもありますが、それ以上に編集などの面倒なところをやらなくて済むようにすることで、ネタ出し、執筆に集中してほしい、出せるものを出し切ってほしい、という意図があります。通常、合同誌の原稿は「完成原稿を集めます」という運用が普通です。そのレベルまでもっていくのが大変、という心理的ハードルもあるでしょう。困ったことがあっても相談しづらい、指定された形式で書く必要があって学習コストが高いなどハードルになります。これに対し、編集・組版は編集担当でやりますので、Markdown、プレーンテキスト、GoogleDocなどなんでもOKという運用でそのの部分のハードルも下げるように意図しています。執筆と編集は全く別のワークです。

別にGitHubで管理しているからアジャイルだ！なんていうつもりはありませんが、同時並行に少しづつでも確実に進捗を上げていく感じがわかっていただければうれしく思います。

また、もくもく会、読書会を通じてのブラッシュアップも、具体的運用の一つです。執筆者の皆さんも本業やプライベートを持つ中で時間をやりくりして執筆時間を捻出する必要があります。そこで、「もくもく会」の形でイベントとして設定しました。時間を明確にすることで集中できますし、Discordの音声チャンネルを利用してネタの相談や執筆上の困ったをその場で解決できるような形としました。

== 読者の皆さんへ

本書を読んで、いかがだったでしょうか？本章が第2章(冒頭)にあるため、頭から読んでいる方は、これから読むのにぁ…と思われるかもしれませんね。

やってみた、感銘を受けた、刺さった、もっといい事例・方法があるぞ、などなど、ぜひ教えてください。

@<strong>{#ぼくのアジャイル100本ノック}または、@<strong>{#100アジャ}のハッシュタグを付けて感想をつぶやいてください。何なら、各章の最後に著者のTwitterIDをのせていますので、メンションを付けて送ってください。必ず喜びます。

ちょっとちがうんだよなー、といった感想も大歓迎です。違うな、とか、もっといい方法があるぞ、と思った方、ぜひ執筆者としてご参加ください。いったん印刷しましたが、もう1冊、別の100本のネタを集めてもいいですよね。この企画は、ネタがあるだけ発行可能です。世の中には無数のチーム、プロジェクトがあります。あなたが参加、関係しているプロジェクトでも個別事情により、適用できることできないこと、考慮すべき事情や改善・改良した内容があるはずです。あるいは、失敗した事例など、様々寄せてくれたらと思います。

さて、本書を読んでみてどう感じたでしょうか？ここを先に読んだ方は、ぜひ読後にこの章に戻ってきて、「自分で本を書く」ということを考えてみてください。

やっぱり自分で書くにはハードル高いなー、と思っていますか？本書の著者の皆さんも実は開始当初は異口同音におなじようなことを言っていました。ふたを開けてみれば、案外書けるものです。アジャ100の次の企画、あるいはアジャ100に限らず、様々な合同誌企画、同人誌企画に参加してみてはいかがでしょう。本というアウトプットの形を作り上げる側になってみませんか？

この本を読んでみて、「知ってたら参加したのに！」と思っていただけていたら幸いです。次の企画でぜひ参加して下さい。

　

//embed{
    \begin{minipage}{.1\linewidth}
        \centering
        \includegraphics[width=.75\linewidth]{images/chap-oyakata/oyakata400.jpg}
    \end{minipage}
    \begin{minipage}{.89\linewidth}
        親方 @oyakata2438 https://twitter.com/oyakata2438\\
        サークル名：親方Project
        \end{minipage}
    \hspace{1ex}
//}

ワンストップ本シリーズ企画・編集（一部執筆）してます。コミケと技術書典に出没。ついには技術書同人誌博覧会（技書博）のコアスタッフとして運営側に参加しています。
