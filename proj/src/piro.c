/**
 */

int main(int argc, char *argv[])
{
  printf("----\n");
  for (int i = 1; i < argc; i++) {
	printf("%s\n", argv[i]);
  }
  printf("----\n");
  return 0;
}
