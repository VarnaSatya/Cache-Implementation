struct cache
{   
    char valid;
    char tag[49];
    char cb[32];
}cache[1024];

int m=64;
int bo=5;
int bn=10;
int tag=49;