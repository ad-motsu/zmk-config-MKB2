# Futhesia Moduora (MeKaBu) - フセシア・モデュオラ（メカブ）

[![Build ZMK firmware](https://github.com/te9no/zmk-config-MKB2/actions/workflows/build.yml/badge.svg?branch=main)](https://github.com/te9no/zmk-config-MKB2/actions/workflows/build.yml?query=branch%3Amain)

```
                                                                                         
                                :-:                                                      
                               =@@@%=                                                    
                               .#@@@@%-                                                  
                                 =@@@@@=         :%%#:                                   
                    :*#*:         :@@@@@-        *@@@%                                   
                    +@@@@#.        +@@@@#        %@@@%                                   
                     =@@@@@-       -@@@@%       +@@@@*                                   
                      .#@@@@=      -@@@@%     .#@@@@%.                                   
                        #@@@@.     #@@@@=    =@@@@@%:                                    
                        :@@@@=    *@@@@*   -%@@@@@*                                      
                        :@@@@=   *@@@@#   +@@@@@*:   -#%#-                               
                        =@@@@.  =@@@@#   #@@@@#:    -@@@@%                               
                        *@@@#   %@@@@.  *@@@@=    .=@@@@@=                               
                        %@@@*   @@@@*  -@@@@-   :*%@@@@@=                                
                        #@@@#   #@@@=  #@@@=  .#@@@@@#+.                                 
                        =@@@@-  -@@@+  %@@*  :@@@@#=.                                    
         --.             +@@@@:  +@@%  #@@: :@@@#:                .--                    
       .%*=%*=======:     -%@@@=  *@@- *@@  %@@-      -==========*%+*%.                  
       :@*-%#++++++*@#.     -#@@#: #@# =@% +@%:     -%%++++++++++#@-+@:                  
        .==:        .*@+      :+@@= %@:-@*.@%.    .*@=            :==.                   
           .:         :#%=      .+@+-@*=@=#%.    +@*.            :.                      
         .%**%=-----:   -%#---:   +@*%%%@%@:  :=%#:   :--------=%**%:                    
         -@=-@#*****%#:   =***#%+*@@@@@@@@@%+#%*-   -%%********#@--@=                    
          :++-       +@#:      .+@@@@@@@@@@@*-    :#%=          -++-                     
                      .*@#*******%@@@@@@@@@@*****#@+                                     
                        .:::::::::::::::::::::::::.                                      
                                                                                         
```

A distributed knowledge-type input device discovered in Realm of Split IV.  
分割界・第四層で発見された集合知式入力装置群

## Classification | 分類
- **Species**: Synaptica Modularis (集合知式入力装置群)
- **Common Name**: MeKaBu (メカブ)
- **Origin**: Realm of Split IV (分割界・第四層)
- **Distribution**: Personal Workshops & Community Development Zones (個人工房、コミュニティ開発圏)
- **Nature**: Extensible, Autonomous, Harmonious (拡張可能・自律型・協奏性)

## Overview | 概要
Futhesia Moduora is an intellectually and structurally evolving input device born from the collective knowledge and experience of multiple developers. While based on a split-grid input surface, its form can be freely altered through external modules (known as Nodes).

フセシア・モデュオラは、複数の開発者が知識と経験を持ち寄ることによって生まれた、知的・構造的進化を続ける入力装置である。その外見は、左右に分かれた格子状の入力面を基軸としながらも、外部モジュール（通称：Node）によって自在に形を変える。

## Key Features | 特徴
- **Cognitive Lattice (知の格子)**: Key layouts designed at the intersection of functional beauty and logic
- **Modular Nexus (拡張構造)**: Freely interchangeable pointing devices, encoders, and sensors
- **Resonant Evolution (共鳴型進化)**: Organic integration of developer codes and designs
- **Tectonic Mode (テンティング適応)**: Physically adaptable form-factor

## Natural Habitat | 生態／運用環境
Thrives in collaborative environments, particularly hackathons and technical conventions.
単体での生息よりも、共創型の環境下において最も高いパフォーマンスを発揮する。

### Current Keymap Configuration | 現在のキーマップ構成
![Keymap](keymap-svg/MKB.svg)

## Etymology | 語源
The name "MeKaBu" encompasses multiple meanings:
- Mechanical Components (メカニカルな部品群)
- Sprouting Stock - branching growth structure (芽株 - 分岐して増殖する構造)

---
*This configuration exists in the liminal space between reality and digital dreams.*  
*この設定は、現実とデジタルの夢の間の境界に存在する。*

---

## レイヤー・プロファイル・AML の使い方

> このセクションの内容は設定ファイル上の変更です。実機での動作確認はまだ行っていません。

レイヤーの並びと役割は、[LiNEA40 キーマップの固定コミット `9b4dcf7`](https://github.com/ad-motsu/zmk-config-LiNEA40/blob/9b4dcf7e4d25dcd4cee6ae6b0c7906b2d6b4554f/config/LiNEA40.keymap)(`9b4dcf7e4d25dcd4cee6ae6b0c7906b2d6b4554f`)に合わせています。LiNEA40 は 41 キー、この MKB は 58 キー(12・12・12・10・10 の 5 行 + モジュール 2 個)なので、LiNEA40 の並びを MKB のキー位置に当てはめ直しています。MKB58の構成を使い、LiNEA40にない外側列や下段ナビ/ABも含めて定義しました。

### レイヤー構成

| ID | 名前 | 役割 |
|---:|---|---|
| 0 | Mac | ベース。Mac / US 配列の OS 向け |
| 1 | iPad | ベース。US 配列の OS (iPad) 向け。Mac との違いは下記 |
| 2 | WinJIS | ベース。Windows で OS 側を JIS 配列にした場合 |
| 3 | Mouse | 手動マウス層。AML の起動先でもある |
| 4 | Arrow | Mac / iPad の Fn 層 (F キー・矢印・ショートカット) |
| 5 | Num | Mac / iPad の数字・記号層 |
| 6 | ArrowWin | WinJIS の Fn 層 (Windows のショートカット) |
| 7 | NumWin | WinJIS の数字・記号層 (テンキー数字) |
| 8 | Scroll | ボールスクロール層 |
| 9 | BT | Bluetooth・プロファイル切替 |
| 10 | Excel | Excel 用の補助層 (WinJIS の `-` 長押し) |

- **Mac / iPad / WinJIS の 3 つのベースは、全 58 キーを明示した完全な定義**です (`&trans` なし)。キーマップエディタで JIS を含む配列全体が見えます。
- iPad は Mac のコピーに次の変更を加えたものです: Scroll が I (8 番)、K (20 番) は普通のキー、スクリーンショットが `Cmd+Shift+3` (43 番)、エンコーダの向きが逆。
- WinJIS は Mac のコピーに Windows 用のキーを重ねたものです。36 番が Win/Esc、38 番がタップで無変換・長押しで Ctrl、39・41 番が ArrowWin、40 番がタップで変換・長押しで Scroll、42 番が NumWin、43 番がスクリーンショット (Win+Shift+S)。
- すべてのベースで 24 番 (Shift)、37 番 (Alt)、44 番 (右 Ctrl) は同じ位置にあります。
- キー位置は 0-11 が 1 段目、12-23 が 2 段目、24-35 が 3 段目、36-45 が 4 段目、46-55 が 5 段目、56・57 が A / B のモジュールです。
- 旧版の 0〜9 のレイヤー番号の記述、疎なJIS層 (差分だけ定義して下層を透過する方式)、旧 Auto Mouse の空き枠は廃止しました。番号は**並べ替えました** (下記「移行」)。

### プロファイル切替

BT 層 (右端下段 45 番の `Grave` 長押し) を押したまま、**H = Mac**、**J = iPad**、**`-` (23 番) = WinJIS**。

- 切替は「US→JIS 変換のオン/オフ」と「ベースレイヤー (0 / 1 / 2)」を同時に行います。**Bluetooth のペアリングは変えません** (ペアは `BT_SEL` キーで別に選びます)。
- どれも保存しないので、**再起動すると Mac プロファイル (変換オフ) に戻ります**。
- WinJIS を使うには、接続先 OS 側のキーボード配列を **JIS** にしてください。
- 変換の対象は `&kp` を通る US 記号です。Dvorak と Ctrl/Cmd 入れ替えは有効にしていません。
- 旧版では J が JIS の選択でしたが、**J は iPad、WinJIS は `-`** に移りました。

### 手動の Mouse 層・Excel 層

- **Mac / iPad**: ホームポジション段の右端 (23 番) の **`-` キー**。タップで `-`、200 ms 以上の長押しで Mouse 層です。
- **WinJIS**: `-` (23 番) は Excel 層になるので、Mouse 層は **Delete (11 番)** の長押しにしました (タップは Delete のまま)。LiNEA40 は 41 キーで余りがなく、MKB の 58 キーに合わせた変更です。
- どちらも長押し中は AML のタイムアウトやキー入力で層が消えないよう保護されます。離すと保護が解除され、通常の AML の動作に戻ります。
- **Excel 層** (WinJIS の `-` 長押し): ほかのキーは下のベースのままで、H (18 番) だけが `Ctrl+Shift+;` の生のキー操作です。JIS 変換を通さない (`&original_key_press`) ため、OS の JIS 配列でも LiNEA40 と同じ物理キー操作が送られます。Excel の日付・時刻入力になるかは確認していません。

### エンコーダ

1 つ目は層ごとに次のようになります。2 つ目はどの層でも PageUp / PageDown です。ホイール速度は `ZMK_POINTING_DEFAULT_SCRL_VAL` = 150 (`config/MKB.keymap` 先頭)、`&msc` は LiNEA40 と同じ設定です (`delay-ms` 3、`trigger-period-ms` 3、`time-to-max-speed-ms` 100、`acceleration-exponent` 0)。

| 層 | 1 つ目の右回り / 左回り |
|---|---|
| 0 Mac | ホイール 下 / 上 |
| 1 iPad | ホイール 上 / 下 |
| 2 WinJIS | ホイール 下 / 上 |
| 3 Mouse | 定義なし (ベースを引き継ぐ) |
| 4 Arrow | ホイール 下 / 上 (旧版は音量) |
| 5 Num | 音量 下げる / 上げる |
| 6 ArrowWin | ホイール 右 / 左 |
| 7 NumWin | 音量 上げる / 下げる |
| 8 Scroll | `→` / `←` キー (ボールはスクロール) |
| 9 BT | 定義なし (ベースを引き継ぐ) |
| 10 Excel | 定義なし (ベースを引き継ぐ) |

実際のスクロール量はビヘイビアのレポート間隔と接続先 OS の設定に依存し、1 ステップが 150 ホイール単位になるとは限りません。

### ボールスクロール・Fn 中のカーソル速度・矢印

- **K 長押し** (iPad は I)、または左親指の長押し (Mac / iPad は LANG1、WinJIS は変換、40 番) で Scroll 層 (8) に入り、ボールがスクロールになります。
- Arrow (4) / ArrowWin (6) の長押し中はスクロールではなく、通常のカーソル速度の **半分** で動きます。離すと通常速度に戻ります。優先順位は Scroll > Arrow / ArrowWin > Num / NumWin です。
- この半分は、現在のランタイムのマウス設定を適用した後の値に対する比率です (Studio のマウス倍率が 2 倍なら、結果は 1 倍になります)。この間は AML による Mouse 層の起動を行いません。
- Num (5) / NumWin (7) 中は、ボールが矢印キーになり、カーソルは動きません。
- Studio の mouse / scroll ランタイム設定の「アクティブレイヤー」のマスクは **0** にしてください。旧版の層番号で保存した値が残っていると、古いフィルタが効いてしまいます。

### AML (ボールを動かすとマウス層が出る機能)

- AML は **通常の Mouse (3)** を起動します (ランタイム入力プロセッサの名前は `aml3`)。ボールを動かしたとき、直前 150 ms 以内にキー入力がなければ Mouse 層になり、最後のボール入力から 500 ms で戻ります。
- 名前を `aml` から `aml3` に変えたのは、以前 Studio で保存した `aml` の設定が新しい対象を上書きしないためです。感度・方向・CPI などは変えていません。
- AML は、Mouse 層でキーを押したとき、そのキーが指す先が修飾キーのホールドなら Mouse 層を維持します (Shift / Ctrl / Cmd 等を押しながらのクリックのため)。判定に使うビヘイビアは **`&mt`** (`snippets/Default/Default.overlay` の `temp-layer-kp-behavior`) で、`&mt` の長押し側の修飾キーを読みます。
  - Mouse 層の 35・36・38 番は `&trans` です。有効なベースの通常の `&mt` (Mac は Ctrl / Cmd、WinJIS は Win / Ctrl) がそのまま働きます。**これらの `&mt` を別のホールドタップに置き換えないでください。** 判定が効かなくなります。
  - 24 番 (Shift)、37 番 (Alt)、44 番 (右 Ctrl) は 3 つのベースで同じ `&kp` なので、Mouse 層にも同じものを書いています。この 3 つのコピーは**ベース側と同じに保ってください**。

### 日本語記号 (WinJIS)

- WinJIS 中の `&kp` は US 記号を自動で JIS キーに変換します。
- NumWin (7、Num の位置の長押し) は LiNEA40 の JIS 用数字層に合わせた配置です。LiNEA40 の生の JIS コードは、同じ文字が出る US 記号に**一度だけ**置き換えて書いています (`@` ← 生の `[`、`^` ← 生の `=`、`&` ← 生の `^`、`+` ← 生の `Shift+:`、`~` ← 生の `+`、`"` ← 生の `@`、`*` ← 生の `Shift+'`、`:` ← 生の `'`)。
- 数字はテンキーの数字です。Windows ではテンキー数字に NumLock が必要なので、**0 番に NumLock** を置きました。`^` は中央 (20 番) にあります。
- 外側のキー: 0 番 NumLock、11 番 `{`、12 番 半角/全角、23 番 `}`。下段は 36 番 `.`、37 番 テンキー 0、39 番 `=`、43 番 `|`、44 番 `~`、45 番 `"` です。旧 JNum の `~` は 43 番から 44 番へ、`|` は 36 番から 43 番へ移りました。
- ¥ キーは直接入力 (IME オフ) で **バックスラッシュ U+005C** を出します。フォントによって ¥ に見えます。
- WinJIS の日本語 IME: 38 番 (タップで **無変換** `INT_MUHENKAN`、長押しで Ctrl)、40 番 (タップで **変換** `INT_HENKAN`、長押しで Scroll)、NumWin の 12 番が **半角/全角** (`LANGUAGE_5`)。Mac / iPad の LANG1 / LANG2 は WinJIS では使いません。
- zmk-layout-shift を v2 (`c242c13`) に上げ、`config/MKB_jis.dtsi` で `_`・`\`・`|` の出力を正しい HID 値に差し替えています。JIS 記号変換は、Shift 付きの変換を左 Shift・右 Shift・両方同時の 3 通りに展開して、どの Shift でも動くようにしています。この変換は変更していません。
- `config/MKB_jis.dtsi` は上流 (ZMK Contributors) の MIT ライセンスのコードを元にしており、著作権表示とライセンス全文をファイル先頭に残しています。

### キーマップエディタとの互換性

- `config/MKB.keymap` の右 Ctrl 付きキー (Arrow の `RC(UP_ARROW)` / `RC(SPACE)`、ArrowWin の `RC(C)` / `RC(V)`、Excel 層の `RC(RS(SEMICOLON))`) は、エディタが解釈できる標準の `RC(...)` で書いています。以前の `APPLY_MODS(MOD_RCTL, ...)` はエディタに「非対応のマクロ」と警告されました。
- ZMK の `RC` は、キー修飾 `RC(keycode)` と行列座標 `RC(row, col)` の 2 つの定義があり、同じ名前で引数の数が違うため、最後に読み込んだ定義が有効になります。`config/MKB_modifiers.h` が引数の数で両方を使い分けます。
- `config/MKB.keymap` では `#include "MKB_modifiers.h"` を JIS・キー・ボード系ヘッダーの **後** に置いてください。このヘッダーを削除した場合や、これより後に読み込むヘッダーが `RC(row, col)` を再定義した場合は、右 Ctrl 付きキーのビルドが再び失敗する可能性があります。`ZMK_POINTING_DEFAULT_SCRL_VAL` はすべての `#include` より前に定義してください。
- レイヤー番号の `#define` (`DEF 0` … `EXCEL 10`) は、エディタが読めるよう `config/MKB.keymap` の先頭にそのまま置いています。インクルードファイルへ移さないでください。
- これらの内容は設定ファイル上の変更で、ブラウザ上のエディタや実機での確認はまだ行っていません。

### 移行 (重要): レイヤー番号を並べ替えました

レイヤー番号は LiNEA40 の並びに合わせて**並べ替えました**。**旧版の Studio の JSON をそのまま再インポートすると割当がずれるため、そのまま読み込まず新しい番号へ設定し直してください。**

| 旧 | 新 |
|---|---|
| 0 Def | 0 Mac |
| 1 Fnc | 4 Arrow |
| 2 Num | 5 Num |
| 3 Mouse | 3 Mouse |
| 4 Scr | 8 Scroll |
| 5 BT | 9 BT |
| 6 旧 Auto Mouse | 廃止 |
| 7 JIS | 2 WinJIS |
| 8 JFnc | 6 ArrowWin |
| 9 JNum | 7 NumWin |
| (なし) | 1 iPad、10 Excel (新規) |

手順:

1. **書き込む前に** Studio の設定を JSON で書き出す。
2. **旧ファームウェアのまま**、書き込む前に Studio の Restore Stock を実行する。
3. 新しいファームウェアを書き込む。
4. **新ファームウェアで**、書き込んだ後にもう一度 Restore Stock を実行する。
5. 上の対応表を見ながら、個人設定を新しい番号順にあらためて設定する (旧 JSON を丸ごと読み込まない)。

Restore Stock は現在のストック設定との差分だけを消すので、2 と 4 の両方が必要です (片方だけだと旧番号のエントリが残る場合があります)。Restore Stock はキーマップ関連の設定だけが対象で、BLE のボンドや入力プロセッサの保存値は消えません。ペアリングも消える `settings_reset` はお勧めしません。何も保存していない新品の状態なら、コンパイル時の既定値がそのまま使われます。実機での動作は未確認です。

この変更は中央 (左手側) コントローラーのファームウェアに適用されます。実機での動作は未確認です。書き込み用の UF2 は `firmware` フォルダーにあります。

### 保存済みの設定について

Studio で保存したキーマップはこのソースより優先されます。反映が見られないときは、先に Studio の設定を JSON でバックアップしてから、該当のバインディングだけを編集してください。上の移行手順以外では、どちらのリセットも必須ではありません。参考までに、`settings_reset` はボンド (ペアリング) を含む設定全体を初期化し、Restore Stock は保存済みのキーマップ関連設定だけを初期化します (ペアリングは消えません)。
