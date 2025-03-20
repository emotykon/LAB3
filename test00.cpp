//
// Created by jakubmotyka on 20.03.25.
//
gfdgdf
int;

generowanie klucza
ssh-keygen
cd /home/jakubmotyka/.ssh
cat id_rsa.pub

ssh-rsa AAAAB3NzaC1yc2EAAAADAQABAAABgQDa+4uPjDD5Fajx4Ae9A4ZF1UxNrWS8z6Ctbok+oUtOm4lfdyuZqbgGkFR5lrdZutsF0QmiXkSkuuxi3TlqKjyQs+1I0IQFeviD2UmMDna8cwLV3u3XA4N3i1UKtTO1517VFqsRmiCww/DkiFyg02aeh0adweNM2fvepvJURvl9EWC6ySpUQn7UQJwr+wrj/triHBwubNbDymRlD1sm3Pacf9X2q/Kky8AHuX9haXueozwg7u9VP018wqwYn0bAZBsPCyASq42Iey98uGh3+G8Cx2GJmbBybKfba599K2PsRd8dNxbIVGiuynGKcg9OwGadDvZE6L+CfA9b+RLqee764UeHJwQyf2IMdBOVZXmKrQZMMtJdM9RVxcFkES7eBfWtWr5odoNb1YdRRD/CuHYe1F3slA1P45Za4KzY9I0j0vwMnNH2sS8BNHIH3SlpG9SzA1led3GqnFbbyJxPyLVD58rpzkYgV+BKUzbdPJqyFBAN29hBAG4t0QxBYRaualM= jakubmotyka@jakubmotyka

    i dodaje to jako klucz

        ssh -T git@github.com
dodawanie na gita:
    git status
    git commit -a -m "etap1"
    git push
