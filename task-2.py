import matplotlib.pyplot as plt


with open('coordinates.txt', 'w') as f:
    n=int(input("Enter number of coordinates"))
    for i in range(n):
        x=int(input("Enter x values: ")) #constant increment
        y1=int(input("Enter y1 coordinate: "))
        y2=int(input("Enter y2 coordinate: "))
        y3=int(input("Enter y3 coordinate: "))
        y4=int(input("Enter y4 coordinate: "))
        f.write(f'{x} {y1} {y2} {y3} {y4}\n')
print('Coordinates saved to file.')

with open(f'coordinates.txt', 'r') as f:
    data = f.readlines()
    x,y1,y2,y3,y4=zip(*[line.strip().split() for line in data])
    figure, axis=plt.subplots(nrows=2,ncols=2)
    axis[0,0].plot(x,y1)
    axis[0,1].plot(x,y2)
    axis[1,0].plot(x,y3)
    axis[1,1].plot(x,y4)
    plt.xlabel('X Values')
    plt.ylabel('Y Values')


plt.suptitle('Static Graphs')

plt.show()
"""
x=[]
y=[]
f=open("coordinates.txt","r")
for row in f:
    row=row.split(' ')
    for i in range(0,len(row)):
        x.append(row[i])
        y.append(row[i+1])"""


