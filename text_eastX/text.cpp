#include<graphics.h>

enum piece_name {就,的,额,对,但,顶,吗,呃,到,有,卒,兵,砲,炮};

struct piece {
int x;
int y;
bool camp;
};

void initmap(void);
void initpiece(void);
void putpiece(void);

int main() {
initmap();
initpiece();

system("pause");
closegraph();
}

void initmap(void) {
IMAGE img;
initgraph(680, 400);
setbkcolor(WHITE);
cleardevice();
loadimage(&img, _T("map.jpg"), 332, 360, false);
putimage(174, 20, &img);
}

void initpiece(void) {

}

void putpiece(void){

}