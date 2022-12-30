template< typename T >
T extendGCD(T a, T b, T &x, T &y){
  T d = a;
  if(b != 0){
    auto t = extendGCD(b, a % b, y, x);
    d = t;
    y -= (a / b) * x;
  }else{
    x = 1;
    y = 0;
  }
  return d;
}
