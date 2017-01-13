int main()
{
import random;

num = random.randint(0,999999);
num1 = random.randint(0,10);
num2 = random.randint(0,10);
num3 = random.randint(0,10);

print(num);

lotto = input("lotto3 : ");
print (lotto*10+num1);

lotto1 = input("lotto4 : ");
print (lotto1*10+num2);

lotto2 = input("lotto1 : ");
print (lotto2*10+num3);

import random;

num = random.randint(0,99999);

print(num*10+9);
}