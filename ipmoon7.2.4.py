while True:
    print("문자 또는 정수 하나를 입력해주세요.")
    i=input()

    if int(len(i))==0:
        continue
    else:
        i=int("%d"%ord(i))

        if 65<=i<=90:
            print('%s'%chr(i+32))
            continue
        elif 97<=i<=122:
            print('%s'%chr(i-32))
            continue
        elif 48<=i<=57:
            print('%d'%(i-48))
            continue
        else:
            print("exit")
            break
