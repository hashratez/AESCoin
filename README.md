Node Build

This install works for Ubuntu 16.04, 18.04 (see Linux-on-Windows despository) & This install also works on MintLinux 19  

1. Login as the desired user (not root) make sure the user has sudo privileges.  You can run this command to make sure user is sudo.
```
sudo usermod -aG sudo username
```
Get updates via:
```
sudo apt-get update
```
```
sudo apt-get upgrade
```
2. Make sure you have dependencies:
```
sudo apt-get install -y build-essential python-dev gcc g++ git cmake libboost-all-dev
```

3. Recommend nano for editing: 
```
sudo apt-get install nano
```
4. Make sure you have GIT: 
```
sudo apt-get install git
```
5. Git the package
```
git clone -b master --single-branch https://github.com/hashratez/aescoin
```
6. A new directory will be created for you install "aescoin"
```
cd aescoin
```
```
mkdir build && cd $_
```
```
cmake ..
```
```
make 
```
(this process can take several minutes--be patient!)

7.  Open ports on your firewall (if you don't have one ufw is great)
P2P Port: 18111
RPC Port: 18112

8. Start AESCoin by navigating to directory:
```
cd ~/aescoin/build/src
```
Start the daemon:
``` 
./AESCoind
```
(to run in the background or to keep running upon terminal exit use: 
```
nohup ./AESCoind &
```

9. Create new wallet & address
```
cd ~/aescoin/build/scr
```
```
./AESWallet
```
(follow the simple instructions--make sure save your KEYS AND NEUMONIC SEED!)

10. Start mining to your new address
```
cd ~/aescoin/build/scr
```
```
./AESminer --threads 1 --log-level 3 --address YOUR-WALLET-ADDRESS-HERE
```
Wallet address alaways starts with "ascn" and looks something like this:
ascnhaGXNwWPnekKav3DN11qUrqYDaNyrWNHHBBFi8w1jmYbVneog4z4jKI$f@GNh7ck9oR5PJwfjjWL7gStb3fZNX3g7kaqIIk2


....

MUCH MORE TO FOLLOW ON GUI WALLET ETC....
More info on CLI Wallet:
https://github.com/turtlecoin/turtlecoin/wiki/Using-Zedwallet


```
// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
// Copyright (c) 2014-2018, The Monero Project
// Copyright (c) 2018, The TurtleCoin Developers
// 
// Please see the included LICENSE file for more information.
```

#### Thanks
Cryptonote Developers, Bytecoin Developers, Monero Developers, Forknote Project, TurtleCoin Community
```
