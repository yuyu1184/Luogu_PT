/*
《世末歌者》 中文版歌词

蝉时雨　化成淡墨渲染暮色
渗透着　勾勒出足迹与车辙
欢笑声　与漂浮的水汽饱和
隔着窗　同城市一并模糊了

拨弄着　旧吉他　哼着四拍子的歌
回音中　一个人　仿佛颇悠然自得
等凉雨　的温度　将不安燥热中和
寻觅着　风的波折

我仍然在　无人问津的阴雨霉湿之地
和着雨音　唱着没有听众的歌曲
人潮仍是　漫无目的地向目的地散去
忙碌着　无为着　继续

等待着谁　能够将我的心房轻轻叩击
即使是你　也仅仅驻足了片刻便离去
想着或许　下个路口会有谁与我相遇
哪怕只　一瞬的　奇迹

……盯着方寸泛光屏幕的学生、打着一丝不苟领结的憔悴文员、
衣摆溅上泥点的工人在街上短暂交汇，又匆匆向各自的目的地散去。
我不知道他们正忙碌着什么，尽管忙碌，
他们之中很大一部分面对自己的未来却相当茫然，
漫无目的地走在他们即将被横刀切断的人生道路上，日复一日……

……然而即使是我最近有些在意的那个女孩，也只是心不在焉地听一小会儿，
脸上大写着“嫌弃”白我一眼，就转起伞拖沓着步子走远了。
当时我竟然对那个女人以外的人感到了不甘心，清清嗓子坐直，
刚准备好好唱一首，就发现弹出的第一个音已经不准了……

……她专注于烟花短暂但接连不断的枯荣，瞳孔里倒映出夜空和她身侧的我。
那时我的心脏好像被羽尾搔挠，顷刻裂开了一条小缝，
但破土而出的是丝丝让人不知所措的甜蜜欣悦，而非疼痛。
我祈祷着这次的结局会有所不同，不要让我们来之不易的“现实”和回忆悉数归零……

夏夜空　出现在遥远的记忆
绽放的　璀璨花火拥着繁星
消失前　做出最温柔的给予
一如那些　模糊身影的别离

困惑地　拘束着　如城市池中之鱼
或哽咽　或低泣　都融进了泡沫里
拖曳疲惫身躯　沉入冰冷的池底
注视着　色彩褪去

我仍然在　无人问津的阴雨霉湿之地
和着雨音　唱着没有听众的歌曲
人潮仍是　漫无目的地向目的地散去
忙碌着　无为着　继续

祈求着谁　能够将我的心房轻轻叩击
今天的你　是否会留意并尝试去靠近
因为或许　下个路口仍是同样的结局
不存在　刹那的　奇迹

极夜与永昼　别离与欢聚
脉搏与呼吸　找寻着意义

我仍然在　无人问津的阴雨霉湿之地
和着雨音　唱着卖不出去的歌曲
浮游之人　也挣扎不已执着存在下去
追逐着　梦想着　继续

请别让我　独自匍匐于滂沱世末之雨
和着雨音　唱着见证终结的歌曲
人们终于　结束了寻觅呆滞伫立原地
哭泣着　乞求着　奇迹

用这双手　拨出残缺染了锈迹的弦音
都隐没于　淋漓的雨幕无声无息
曲终之时　你是否便会回应我的心音
将颤抖的双手牵起　迎来每个人的结局
*/

enum OnlineJudgeList {
    LuoguOJ, CodeForcesOJ, AtcoderOJ, HDOJ, POJ, OpenJudge, UVA, LA, ACdream, SPOJ, YBTOJ, LOJ, HYDRO, USACO, Vijos, 
    LightOJ, DMOJ, UOJ, QOJ, ZOJ, SCU, SGU, BaekJoon, TopH, FZU, Topcoder, ApexOJ, HiHoCoder, NowCoder, 
    Leetcode, nod51, noiOJ, MarsOJ, Aizu, NBUT, BestCoder, Hust, URAL, CodeChef, rab_PX_OJ, OtherOnlineJudge
};

const int OnlineJudge = CodeForcesOJ;

#pragma GCC optimize(114514)
#pragma GCC optimize(1919810)
#pragma GCC optimize(27726872)
#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
#define int long long
#ifdef __unix__
#define fgn getchar_unlocked
#else
#define fgn _getchar_nolock
#endif
#define int long long
using namespace std;
int read() {
    int x;
    char ch;
    int o = 1;
    while (!isdigit(ch = fgn())) {
        if (ch == '-') {
            o = -1;
        }
    }
    x = ch ^ 48;
    while (isdigit(ch = fgn())) {
        x = (x << 3) + (x << 1) + (ch ^ 48);
    }
    return x * o;
}
inline int max(int a, int b) {
    return a > b ? a : b;
}
inline int min(int a, int b) {
    return a < b ? a : b;
}
static inline void dswap(int &a, int &b) {
    a ^= b ^= a ^= b;
}
inline void swap(int &a, int &b) {
    if (a != b) {
        dswap(a, b);
    }
}
const int N = 2010, M = 1000, mod = 1e9 + 7;
int List[N];
bool vis[N][N];
int x[N], y[N];
bool delicious[N][N];
int ksm(int a, int b, int c) {
    if (!b) {
        return 1;
    }
    int ans = ksm(a, b >> 1, c);
    ans = ans * ans % c;
    if (b & 1) {
        ans = ans * a % c;
    }
    return ans;
}
#undef int
int main() {
    auto start = system_clock::now();
#define int long long
#ifdef Willem248
    freopen("a.in", "r", stdin);
    // freopen("a.out", "w", stdout);
#endif
    int n, k;
    k = read(), n = read();
    for (int i = 1; i <= n; i++) {
        x[i] = read(), y[i] = read();
    }
    for (int i = 1; i <= n; i++) {
        x[i] += M, y[i] += M;
        delicious[x[i]][y[i]] = true;
    }
    if (k <= 456) {
        int s = M, t = M;
        const int dx[] = {1, 2, 2, 1, -1, -2, -2, -1};
        const int dy[] = {2, 1, -1, -2, -2, -1, 1, 2};
        queue<tuple<int, int, int> > q;
        q.push({s, t, 0});
        vis[s][t] = true;
        List[0] = 1;
        while (q.size()) {
            auto f = q.front();
            q.pop();
            int x = get<0>(f), y = get<1>(f), z = get<2>(f);
            if (z == k) {
                continue;
            }
            for (int i = 0; i < 8; i++) {
                int nx = x + dx[i], ny = y + dy[i];
                if (delicious[nx][ny] || vis[nx][ny]) {
                    continue;
                }
                vis[nx][ny] = true;
                q.push({nx, ny, z + 1});
                List[z + 1]++;
            }
        }
        int sum = 0;
        for (int i = 0; i <= k; i++) {
            sum += List[i];
        }
        cout << sum << '\n';
    } else {
        int s = M, t = M;
        const int dx[] = {1, 2, 2, 1, -1, -2, -2, -1};
        const int dy[] = {2, 1, -1, -2, -2, -1, 1, 2};
        queue<tuple<int, int, int> > q;
        q.push({s, t, 0});
        vis[s][t] = true;
        List[0] = 1;
        while (q.size()) {
            auto f = q.front();
            q.pop();
            int x = get<0>(f), y = get<1>(f), z = get<2>(f);
            if (z == 456) {
                continue;
            }
            for (int i = 0; i < 8; i++) {
                int nx = x + dx[i], ny = y + dy[i];
                if (delicious[nx][ny] || vis[nx][ny]) {
                    continue;
                }
                vis[nx][ny] = true;
                q.push({nx, ny, z + 1});
                List[z + 1]++;
            }
        }
        int sum = 0;
        bool flag = false;
        for (int i = 0; i <= 456; i++) {
            sum += List[i];
            if (!List[i]) {
                flag = true;
                break;
            }
        }
        if (flag) {
            cout << sum << '\n';
            return 0;
        }
        auto gs = [&] (int x) {
            return x * (x + 1) % mod * ksm(2, mod - 2, mod) % mod;
        };
        sum %= mod;
        k -= 456, k %= mod;
        sum = (sum + gs(k) * 28 % mod + List[456] * k % mod) % mod;
        cout << sum << '\n';
    }
    auto end = system_clock::now();
    auto duration = duration_cast<microseconds>(end - start);
    cerr << "Time used " << double(duration.count()) * microseconds::period::num / microseconds::period::den << "s\n";
    #undef int
    return 0;
}
