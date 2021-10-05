import sys

def main(args):
    if not args:
        print('Please enter a project name')
        exit(1)
    
    if " " in args[0]:
        print('Please remove spaces and special characters from the project name')
        exit(1)

    with open('./CMakeLists.txt', 'r+') as f:
        print(f'Changing project name to {args[0]}')
        contents = f.read().replace('bubbles', args[0])
        f.seek(0)
        f.write(contents)
        f.truncate()

if __name__ == '__main__':
    main(sys.argv[1::])

