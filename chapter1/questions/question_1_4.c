#include <stdio.h>

// 问题4:逻辑运算符号“&&”、“||”和“!”(表示逻辑非)的相对优先级是怎样的?
// 也就是 说，a&&b||c应理解成(a&&b)||c还是a&&(b||c)，或者随便怎么理解都可以?

// 实验思路：a b c 分别用0 1 做枚举, 看加入括号是否影响结果，

// 实验输出：
// a:0 b:0 c:0
// a&&b||c: 0
// a&&(b||c): 0
// a||b&&c: 0
// a||(b&&c): 0

// a:0 b:0 c:1  
// a&&b||c: 1
// a&&(b||c): 0
// a||b&&c: 0
// a||(b&&c): 0

// a:0 b:1 c:0
// a&&b||c: 0
// a&&(b||c): 0
// a||b&&c: 0
// a||(b&&c): 0

// a:0 b:1 c:1
// a&&b||c: 1
// a&&(b||c): 0
// a||b&&c: 1
// a||(b&&c): 1

// a:1 b:0 c:0
// a&&b||c: 0
// a&&(b||c): 0
// a||b&&c: 1
// a||(b&&c): 1

// a:1 b:0 c:1
// a&&b||c: 1
// a&&(b||c): 1
// a||b&&c: 1
// a||(b&&c): 1

// a:1 b:1 c:0
// a&&b||c: 1
// a&&(b||c): 1
// a||b&&c: 1
// a||(b&&c): 1

// a:1 b:1 c:1
// a&&b||c: 1
// a&&(b||c): 1
// a||b&&c: 1
// a||(b&&c): 1


// 实验结论： 
// 1) 观察a=0,b=0,c=1的情况，a&&b||c 和 a&&(b||c)不一样，说明|| 的优先级小于等于 && ;
// 2) 观察a||b&&c和a||(b&&c）在所有情况都一致，说明 && 的优先级大于 ||；
// && 优先级高于 ||

// 其他材料：https://stackoverflow.com/questions/65356670/c-operators-and-precedence


int main() {

	for (int a = 0; a < 2; a++) {
		for (int b = 0; b < 2; b++) {
			for (int c = 0; c < 2; c++) {
  				printf("a:%d b:%d c:%d\n", a, b, c);
  				printf("a&&b||c: %d\n", a && b || c);
  				printf("a&&(b||c): %d\n", a && (b || c));
  				printf("a||b&&c: %d\n", a || b && c);
  				printf("a||(b&&c): %d\n\n", a || ( b&&c ));
			}
		}
	}

}