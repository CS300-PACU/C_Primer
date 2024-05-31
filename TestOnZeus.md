[https://github.com/will4614/C_VSCode_Template/blob/main/TestOnZeus.md](https://github.com/will4614/C_VSCode_Template/blob/main/TestOnZeus.md)
## Test on Zeus


## Build connection between Zeus and GitHub 
#### Just do this once

### SSH Keys

```
ssh punetid@zeus.cs.pacificu.edu

ssh-keygen -t ed25519

cat ~/.ssh/id_ed25519.pub
```

[GitHub SSH Keys](https://github.com/settings/keys) - [https://github.com/settings/keys](https://github.com/settings/keys)

### Test SSH Keys
```
ssh -T git@github.com
```

### Clone to Zeus from GitHub
#### everytime you want to test on Zeus

#### On Codespaces
```
git add .
git commit -m "stkPush done!"
git push
```

Find your repository URL.

[https://github.com/CS300F23-PACU](https://github.com/CS300F23-PACU)

Code | Local | SSH

```
ssh punetid@zeus.cs.pacificu.edu
mkdir cs300f23 # just do this once this semester
cd cs300f23
git clone git@github.com:CS300F23-PACU/character_static_stack-will4614.git
ls
cd character_static_stack-will4614

make
bin/stktester
bin/stkdriver

cd ..
rm -rf character_static_stack-will4614
ls
```
