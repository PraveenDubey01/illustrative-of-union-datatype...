union point
{
	int x;
	int y;
}p={10,20};
void main()
{
  union point p={1},q={2};
  printf("%d\n",&p);
  printf("%d %d\n",p.x,q.x);
  printf("%d\n",sizeof(p));
  getch();
}
