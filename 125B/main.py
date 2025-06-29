xml = input().strip()
indent = 0
i = 0
n = len(xml)
result = []

while i < n:
    if xml[i] == '<':
        if xml[i+1] == '/':
            indent -= 1
            tag_start = i
            while xml[i] != '>':
                i += 1
            tag = xml[tag_start:i+1]
            result.append('  ' * indent + tag)
        else:
            tag_start = i
            while xml[i] != '>':
                i += 1
            tag = xml[tag_start:i+1]
            result.append('  ' * indent + tag)
            indent += 1
        i += 1
    else:
        i += 1

print('\n'.join(result))