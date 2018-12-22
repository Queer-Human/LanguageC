-bash-4.2$ gcc rangen.c -o rangen -std=c11
rangen.c: 関数 ‘test_random’ 内:
rangen.c:23:3: 警告: 関数 ‘srandom’ の暗黙的な宣言です [-Wimplicit-function-declaration]
   srandom(10);
   ^
rangen.c:26:5: 警告: 関数 ‘random’ の暗黙的な宣言です [-Wimplicit-function-declaration]
     r = random();
     ^
-bash-4.2$ gcc rangen.c -o rangen -std=c99
rangen.c: 関数 ‘test_random’ 内:
rangen.c:23:3: 警告: 関数 ‘srandom’ の暗黙的な宣言です [-Wimplicit-function-declaration]
   srandom(10);
   ^
rangen.c:26:5: 警告: 関数 ‘random’ の暗黙的な宣言です [-Wimplicit-function-declaration]
     r = random();
     ^
