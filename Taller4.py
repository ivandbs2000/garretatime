from sys import stdin
import math

#PRIMER PUNTO##################################################################################################

def f(x):
	return x**(math.sqrt((4*x)-3)) 

def orden1_p(x,h):
	ans = (f(x+h) - f(x))/h
	print("Para h = {0} , la derivada con presicion de primer orden es : {1}".format(h,ans))

def orden1_s(x,h):
	ans = (f(x) - f(x-h))/h
	print("Para h = {0} , la derivada con presicion de primer orden es : {1}".format(h,ans))


def orden2_p(x,h):
	ans = (f(x+h) - f(x-h))/(2*h)
	print("Para h = {0} , la derivada con presicion de segundo orden es : {1}".format(h,ans))
 
def orden2_s(x,h):
	ans = (f(x+h) -(2*f(x)) + f(x-h) )/(h**2)
	print("Para h = {0} , la segunda derivada con presicion de segundo orden es : {1}".format(h,ans))



orden1_p(2,1)
orden1_p(2,0.1)
orden1_p(2,0.01)
print()
orden1_s(2,1)
orden1_s(2,0.1)
orden1_s(2,0.01)
print()
orden2_p(2,1)
orden2_p(2,0.1)
orden2_p(2,0.01)
print()
orden2_s(2,1)
orden2_s(2,0.1)
orden2_s(2,0.01)
print()
#SEGUNDO PUNTO##################################################################################################

def g(x):
	return math.exp(-(x)**2)

def rectangulo_s(a,b):
	ans = (b-a)*g((a+b)/2)
	print("rectangulo simple",ans)

def trapezoide_s(a,b):
	ans = ((b-a)/2)*(g(a)+g(b))
	print("trapezoide simple",ans)

def simpson_s(a,b):
	ans = ((b-a)/6)*(g(a) + (4*g((a+b)/2)) + g(b) )
	print("simpson simple",ans)

rectangulo_s(0,1)
print()
trapezoide_s(0,1)
print()
simpson_s(0,1)
print()

def part(a,b,n):
	p = (b-a)/(n-1)
	ans = []
	cnt = a
	while cnt < b:
		ans.append(cnt)
		cnt+=p
	ans.append(b)
	return ans

def rectangulo_c(a,b,n):
	ans = 0
	x = part(a,b,n)
	i = 1
	while(i < n):
		ans += (x[i]- x[i-1])*g((x[i-1]+x[i])/2)
		i+=1
	print("rectangulo compuesto",ans)

def trapezoide_c(a,b,n):
	ans = 0
	x = part(a,b,n)
	i = 1
	while(i < n):
		ans += (x[i]- x[i-1])*(g(x[i-1])+g(x[i]))
		i+=1
	ans = ans/2
	print("trapezoide compuesto",ans)

def simpson_c(a,b,n):
	ans = 0
	x = part(a,b,n)
	i = 1
	while(i < n):
		ans += (x[i]- x[i-1])*(g(x[i-1]) + (4*g((x[i-1]+x[i])/2)) + g(x[i]) )
		i+=1
	ans = ans/6
	print("simpson compuesto",ans)

rectangulo_c(0,1,3)
print()
trapezoide_c(0,1,3)
print()
simpson_c(0,1,3)
print()