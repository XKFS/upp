TITLE("Výrazový kalkulátor")
TOPIC_TEXT(
"[2 $$0,0#00000000000000000000000000000000:Default][b100;a50;K* $$1,0#23046025415494101427921008701515:Paragraph][i167;b50;a25;kKN1;~~~>.3917;* "
"$$2,0#52185223490867151055420261384346:Toc1`.Heading1][i333;kN11;~~~>.3917;* $$3,0#36545033421193513457240054113541:Toc2`.Heading2][i500;kN111;~~~>.3917; "
"$$4,0#65092512416424580164828413186219:Toc3`.Heading3][i167;b50;a25;kKNA;~~~>.3917;* "
"$$5,5#92291332474308709450111162202673:AppToc1`.AppHeading1][i333;kNA1;~~~>.3917;* "
"$$6,15#61887903412252554674480251236992:AppToc2`.AppHeading2][i500;kNA11;~~~>.3917; "
"$$7,7#03533551421653050355120437860335:AppToc3`.AppHeading3][i500;b100;a100;KN1;*4 "
"$$8,0#94145093439740438411010082165944:Heading1][i500;b100;a50;kKN11;*+117 $$9,0#10901425421210535753260366156531:Heading2][i500;b100;a25;kKN111;* "
"$$10,0#53209141402041366431858192225431:Heading3][i500;b100;a100;KNA;*4 $$11,8#32912651424211307887950041245434:AppHeading1][i500;b100;a50;kKNA1;*+117 "
"$$12,8#51232055453458524230328032001901:AppHeading2][i500;b100;a25;kKNA11;* $$13,8#34108020439428305453439845463579:AppHeading3][b100;a50;k*4 "
"$$14,0#49239115434362547028389207250014:Heading][b50;a25;k~~~>.3917;* $$15,15#40743698422276745552070108434023:Toc`.Heading][b100;a50;K~~~>.3917;*+117 "
"$$16,16#15422850471211852294098111138263:Topics1][l167;b50;a50;K~~~>.3917;* $$17,17#35241722455500657380289596243808:Topics2][l333;~~~>.3917; "
"$$18,18#31041344429742018840308064013200:Topics3][b83;a42;K* $$19,0#46440151113795363000000595230845:Paragraph][{_}%EN-US "
"[s0; Výrazový kalkulátor je výpočetní systém, který umožňuje počítat "
"hodnoty uživatelsky zadaných výrazů. Vstupem pro výpočet je [/ zdrojový text "
"výrazu], což je textový řetězec obsahující výraz utvořený podle níže "
"popsaných pravidel, a [/ kontext výpočtu], což je vazba mezi výrazem a hostitelskou "
"aplikací, ve které je výrazový systém použit. Kontext výpočtu může podle "
"charakteru aplikace definovat například přídavné funkce a konstanty v_závislosti "
"na aktu�")
TOPIC_TEXT(
"�lním nastavení a_hodnotách zpracovávaných v_hostitelské aplikaci.&][s0; &][s0; "
"Syntaxe výrazů rámcově vychází z_konvencí pro výrazy v_[/ programovacím "
"jazyce C], obdobně jako Java nebo JavaScript. Základem výrazu jsou [/ literály] "
"(čísla, textové řetězce uvedené přímo ve zdrojovém textu výrazu), [/ proměnné "
"](identifikátory odkazující se na konstanty nebo funkce podle kontextu výpočtu "
"výrazu) a [/ operátory], pomocí nichž lze hodnoty různě kombinovat a_zpracovávat.&][s0; "
"&][s0; Základní výrazový systém podporuje práci s_hodnotami následujících "
"datových typů:&][s0; &][s0;i150;O0; [* číslo] (v_plovoucí řádové čárce)&][s0;i150;O0; "
"[* řetězec] (textová hodnota)&][s0;i150;O0;* datum/čas&][s0;i150;O0; [* pole "
"hodnot] (jednotlivé prvky pole mohou být i různých typů)&][s0;i150;O0; [* lambda`-výraz] "
"(část výpočetního výrazu, kterou lze předávat do funkcí jako parametr)&][s0; "
"&][s0; Kontext výrazu (hostitelská aplikace používající výrazový systém) "
"může podle svých potřeb rozšiřovat tento základní repertoár o další datové "
"typy a_funkce.&][s1; Operátory&][s0; Operátory slouží podobně jako funkce k_výpočtu "
"hodnot z_jiných zdrojových hodnot. Narozdíl od funkce, kterou lze vyvolat zápisem "
"[/ identifikátor`_funkce(parametr1, parametr2...)], se operátory obvykle používají "
"způsobem [/ výraz1 <operátor> výraz2] (tzv. [/ binární operátor]), případně "
"[/ <operátor> výraz] ([/ prefixový unární operátor]).&][s0; &][s0; Kromě toho "
"výrazový systém podporuje několik speciálních operátorů s_jiným způsobem "
"zápisu. Jedná se o_následující operátory:&][s1; `[<p1>, <p2>, <p3>, ...`]: "
"konstruktor pole&][s0; Vložením posloupnosti hodnot nebo výrazů oddělených "
"čárkami do hranatých závorek vznikne pole obsahující zadané hodnoty jako své "
"prvky.&][s0; &][s0;* Příklad: `[1, 2, 3 `+ 4`]&][s1; `[<p1> .. <p2>`]: konstruktor "
"posloupnosti&][s0; ")
TOPIC_TEXT(
"Pokud do hranatých závorek napíšete dvě číselné hodnoty nebo výrazy oddělené "
"dvěma tečkami (dvě tečky musí následovat ihned po sobě bez mezery), výsledkem "
"takto vytvořeného výrazu je pole obsahující posloupnost hodnot [/ p1, p1 `+ "
"1, p1 `+ 2, p1 `+ 3] atd. až po hodnotu [/ p2]. Pokud rozdíl hodnot [/ p1] a [/ "
"p2 ]není přesně celočíselný, poslední prvek pole bude mít hodnotu v_rozsahu "
"[/ `[p2`-0.5, p2`+0.5)]. Pokud je [/ p2 <`= p1 `- 0.5], je výsledkem prázdné pole "
"(pole neobsahující žádný prvek).&][s0; &][s0;* Příklad: `[1..7`] `= `[1,2,3,4,5,6,7`]&][s1; "
"<p1> ? <p2> : <p3>: podmíněný výraz&][s0; Podmíněný výraz lze použít v_situaci, "
"kdy potřebujete rozhodnout pro jednu ze dvou variant na základě platnosti logické "
"podmínky. Při výpočtu výrazu se nejprve vyhodnotí [/ p1]; pokud je jeho logická "
"hodnota pravdivá (je to nenulové číslo nebo neprázdný textový řetězec), "
"vyhodnotí se dále výraz [/ p2] a jeho hodnota je výsledkem celého výrazu ?:. "
"Pokud podmínka neplatí, vyhodnotí se obdobně výraz [/ p3] a výsledkem výrazu "
"je jeho hodnota.&][s0; &][s0;/ [*/ Příklad][/ : ][*/ 5 % 2 `=`= 0 ? `\"sudé`\" "
": `\"liché`\"] `= `\"liché`\"&][s1; <p1>`{<m1>, <v1>, <m2>, <v2>, ... `}: podmíněný "
"výraz s výběrem&][s0; Pomocí funkce lze vybrat jednu ze zadaných hodnot (výrazů) "
"podle hodnoty řídicího výrazu [/ p1]. Při výpočtu se nejprve vyhodnotí tento "
"výraz; další postup závisí na počtu parametrů v_složených závorkách.&][s0; "
"&][s0;i150;O0;/ [*/ 1 parametr][/ : pokud je v_závorkách jen jeden výraz (]m1[/ "
"), otestuje se, zda je hodnota výrazu ]p1 [/ prázdná (][/^dpp`:`/`/AppDoc`/`/`:`:`/`/Calc`$Cis`_nullV^ "
"is`_null][/ ). Pokud prázdná není, ponechá se výraz ]p1[/  beze změny a vrátí "
"se jako výsledek celého zápisu. Pokud je hodnota prázdná, vyhodnotí se výraz "
"]m1[/  a výsledkem celého výrazu `{`} je pak hodnota ]m1.&][s0;i150;O0; [* sudý "
"počet parametrů")
TOPIC_TEXT(
"]: pokud je počet parametrů sudý (a nenulový), program po vyhodnocení [/ p1] "
"postupně prochází výrazy v_závorkách na [/ lichých pozicích] ([/ m1, m2, "
"m3...]). Každý tento výraz vyhodnotí a porovná s hodnotou výrazu [/ p1]; pokud "
"se hodnoty shodují, program vyhodnotí a vrátí odpovídající výraz na následující "
"sudé pozici ([/ v1, v2, v3...]). Pokud ani jedna z hodnot [/ m1, m2, m3]... není "
"rovna [/ p1], je výsledkem výrazu přímo původní [/ p1] beze změny.&][s0;i150;O0; "
"[* lichý počet parametrů]: pokud je počet parametrů lichý (a větší než "
"jeden), program po vyhodnocení obdobně jako v_případě sudého počtu parametrů "
"testuje rovnost s_parametry na lichých pozicích [/ m1, m2, m3...]. a_v_případě "
"rovnosti vrátí parametr na následující nulové pozici. Pokud není nalezena "
"ani v_jednom z případů shodná hodnota, program vyhodnotí a_vrátí poslední "
"(nepárovou) hodnotu v_závorkách.&][s1; #<výraz>: lambda`-výraz&][s0; Lambda "
"výraz se používá v_situacích, kdy je třeba samotný výpočetní výraz poslat "
"jako parametr do jiné funkce nebo operátoru (v_opačných případech do operátoru "
"nebo funkce přichází jako parametr až [/ vypočtená hodnota] tohoto výrazu). "
"Způsob nakládání s_matematickým výrazem v_této funkci závisí na charakteru "
"konkrétní funkce. Obvykle jde o_to, že v_rámci jiné funkce je potřeba takto "
"předaný výpočetní výraz několikrát postupně vyhodnotit (vypočítat), případně "
"v_různém kontextu, a_získat tak několik výsledků, které se pak dále zpracují.&][s1;*/ "
"[*/ Příklad: ][*/^dpp`:`/`/AppDoc`/`/`:`:`/`/Calc`$CsumASC^ sum][*/ (`[1..4`], "
"`\"x`\", #(x `* x))] `= 1 `* 1 `+ 2 `* 2 `+ 3 `* 3 `+ 4 `* 4 `= 1`+4`+9`+16 `= 30&][s1; "
"<výraz>.<identifikátor>: objektové volání funkce&][s0; Operátor [/ tečka] "
"umožňuje zápis některých výrazů způsobem připomínajícím objektové programovací "
"jazyky. Jedná se čistě o nástroj přehledněj")
TOPIC_TEXT(
"šího zápisu, vnitřně se všechny takovéto zápisy chápou jako volání funkcí. "
"Zápis [/ a.id] má stejný význam jako [/ id(a)], zápis [/ a.id(b, c, d)] je totéž "
"co [/ id(a, b, c, d)].&][s0; &][s0;/ [*/ Příklad: sin(pi)] `= pi.sin `= 0, [*/ "
"(1/3).nls(`-2)] `= nls(1/3, `-2) `= 0,33&][s14;3 Skupiny funkcí výrazového kalkulátoru&][s0; "
"Obecné funkce a operátory výrazového kalkulátoru patří do následujících "
"skupin:&][s0;i150;O0;^topic`:`/`/TCore`/appdoc`/CalcArith`$cs`-cz^ Aritmetické funkce "
"a operace&][s0;i150;O0;^topic`:`/`/TCore`/appdoc`/CalcTrans`$cs`-cz^ Transcendentní "
"matematické funkce&][s0;i150;O0;^topic`:`/`/TCore`/appdoc`/CalcText`$cs`-cz^ Práce "
"s texty&][s0;i150;O0;^topic`:`/`/TCore`/appdoc`/CalcDate`$cs`-cz^ Práce s datem/časem&][s0;i150;O0;^topic`:`/`/TCore`/appdoc`/CalcArray`$cs`-cz^ "
"Práce s poli hodnot&][s0;i150;O0;^topic`:`/`/TCore`/appdoc`/CalcLog`$cs`-cz^ Logické "
"operace&][s0;i150;O0;^topic`:`/`/TCore`/appdoc`/CalcSys`$cs`-cz^ Systémové operace&][s0; "
"]")