import os

nome_commit = '3.0'

os.system("git add .")
os.system(f"git commit -m '{nome_commit}' ")
os.system("git push")
