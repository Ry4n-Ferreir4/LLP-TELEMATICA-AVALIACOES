import os

nome_commit = str(input('Digite o nome do commit: '))

os.system("git add .")
os.system(f"git commit -m '{nome_commit}' ")
os.system("git push")
