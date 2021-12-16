# ぼくのアジャイル100本ノック 概要
～あじゃてくの仲間たちの体験記～

アジャイルに関する色々を詰め込んだ合同誌。

## 期待するネタ
* アジャイルとは？（僕の理解
* アジャイルやってみた
* こんなところに困った
* 困ったことがあったが解決した
* チームがこう変わった
* こんないいことがあった
* 抵抗にあった
* 失敗した・アンチパターン・反省
* 本・イベント・ブログが参考になった（勝手に書評
* スクラムマスター/プロダクトマネージャ/アジャイルコーチのおしごと
* ぼくの夢/決意表明
* 大企業/古い企業/古いところに入れようとした
* 人材育成・チームへの導入
* アジャイルイベント参加記録、得たこと、学んだこと、こんなイベントがある。
* 悩んだ用語辞典。これはこういうことだよー。
他もOK。

## 執筆のモチベーション（読者が得られること
* アジャイルについての本はあるが、実体験は少ない。
* 抵抗にあったり、失敗した記述は少ない。
* お隣の人はどうやってるのかしら？
* 他の人の実体験から知見を得たい。
* よい教科書、情報源のインデックスとして。
* 界隈の人を知れる、つながれる。
* 赤裸々な体験談が欲しい。（守秘義務には注意

## 執筆のモチベーション（執筆者が得られること
* 自分の経験を書き出すことで整理・体系化する。
* アウトプットの練習。ブログ、TweetよりもボリュームもレベルもUP。
* 内容自体は既存のものでよい。過去のブログ・登壇の焼き直しなど。
* お隣の人はどうやってるのかしら？
* 他の人の実体験から知見を得たい。
* アジャイル本執筆者とつながる？
* 他の人からのフィードバックも期待できる（X章よかった。刺さった、など。）

## 著者紹介兼あとがき
Contributers.re内に、テンプレートに従って記入ください。

## スケジュール
* ターゲット　2021年2月26日　技書博（技術書同人誌博覧会）＠都産貿台東館（浅草）
* 2022.2.26　発行　（イベント当日） 
* 2022.2.5　入稿
* 2022.1.25　原稿最終締切
* 2022.1.10　初稿提出締切
* 2021.12.10　募集開始

## 執筆にあたってのお願い
CIでコンパイルが通ることを確認してください。エラーのまま放置はなるべくやめてください。

Confrictが発生した場合は、解決お願いします。

push -f等はやめましょう。（歴史を書き換えてはいけません。

相談事：
Issue立ててください。

雑談、ざっくばらんな相談については、Agile Tech Expo のDiscordがあります。
参加方法は、親方まで。https://twitter.com/oyakata2438

## 執筆方法

本書は、easybooks を使って発行されています。easybooks では Markdown か Re:VIEW で記述します。

* [Markdownでの書き方](https://raw.githubusercontent.com/erukiti/easybooks/master/example/about-easybooks.md)
* [Re:VIEWチートシート](https://gist.github.com/erukiti/c4e3189dda179a0f0b73299fb5787838) を作ってみたので、参考にしてみてください。

また、プレーンテキストやWordとかでの提出も可能です。編集部にてコンバートします。

## CI
https://app.wercker.com/oyakata2438/agile100/runs
でPDFが書きだされます。
一番上のBuildをクリックすると展開されるので、
Output Artifactをクリックして、Download artifactをクリックすると、
tarで固めたpdfがダウンロードできます。

## インストール

細かい準備(TeX入れたり)は[『技術書をかこう！』](https://github.com/TechBooster/C89-FirstStepReVIEW-v2)に準じます。

### Dockerを使う方法

Dockerを使うのが一番手軽です。とても面倒なTeXのインストールなどを全てDockerでやってくれるため、何も悩むことはありません。

```sh
$ docker run -t --rm -v $(pwd):/book vvakame/review:3.2 /bin/bash -ci "cd /book && yarn && yarn build"
```

このコマンドの実行が成功すれば、コンパイルされたPDFが、`.review/Onestop-Online.pdf` として出力されています。

Mac なら `open .review/Onestop-Online.pdf` で PDF を開くことができます。

### WindowsでReviewを使う方法

https://qiita.com/implicit_none/items/398c6e0bbedc8b160621
暗黙の型宣言さんが詳しく書いてくれてます。あるいは、技術同人誌を書こう‐アウトプットのススメ‐をご覧ください。

Windows10(Home/Pro問わず)であれば、WSL＋docker越しにRe:VIWEを扱う方法もあります。https://qiita.com/hoshimado/items/7592cee28c1bde545b78

※2019/11/04時点で、次の環境にて後述のdockerコマンドからコンパイル出来ることを確認済み。

<!-- (3.1指定は、2.x環境と共存のため) -->

* Microsoft Windows 10 Home Version 1903 
* Ubuntu 16.01
* Docker version 17.03.2-ce, build f5ec1e2
* Docker image : vvakame/review (tag:3.1)
* Docker image : vvakame/review (tag:3.2)

### Dockerを使わずにビルドする

* TeX をインストールする
* Ruby をインストールする
  * review gem をインストールする
* Node.js をインストールする

```sh
yarn && yarn build
```

### 権利

ベースには、[TechBooster/ReVIEW\-Template: TechBoosterで利用しているRe:VIEWのテンプレート（B5/A5/電子書籍）](https://github.com/TechBooster/ReVIEW-Template) を使っています。

  * 設定ファイル、テンプレートなど制作環境（techbooster-doujin.styなど）はMITライセンスです
    * 再配布などMITライセンスで定める範囲で権利者表記をおねがいします
