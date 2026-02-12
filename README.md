# Libft

*This project has been created as part of the 42 curriculum by etasci.*

---

## Proje Açıklaması (Description)

Libft, 42 müfredatının temel projelerinden biridir. Bu projenin amacı, C programlama dilinde standart kütüphane (libc) fonksiyonlarının çalışma mantığını derinlemesine anlamak ve bu fonksiyonları `ft_` öneki ile sıfırdan yeniden yazmaktır.

Bu proje sayesinde:

- Bellek yönetimi (memory management)
- Pointer aritmetiği
- String manipülasyonu
- Düşük seviyeli veri işleme
- Dinamik veri yapıları (linked lists)

konularında güçlü bir temel oluşturulmuştur.

Oluşturulan `libft.a` statik kütüphanesi, 42 sürecindeki sonraki projelerde kullanılmak üzere tasarlanmıştır.

---

## Talimatlar (Instructions)

### Derleme

Proje dizininde aşağıdaki Makefile komutlarını kullanabilirsiniz:

Kütüphaneyi oluşturmak için:

```bash
make
```

Object dosyalarını temizlemek için:

```bash
make clean
```

Object dosyaları ve kütüphaneyi silmek için:

```bash
make fclean
```

Projeyi tamamen yeniden derlemek için:

```bash
make re
```

---

## Kullanım (Usage)

`libft.a` oluşturulduktan sonra projelerinizde şu şekilde kullanabilirsiniz:

```bash
cc main.c -L. -lft -o program_adi
```

Kod dosyanıza header eklemeyi unutmayın:

```c
#include "libft.h"
```

---

## Kütüphane İçeriği (Library Contents)

### 1. Libc Fonksiyonları (Part 1)

Karakter Kontrolleri:
- ft_isalpha
- ft_isdigit
- ft_isalnum
- ft_isascii
- ft_isprint

String İşlemleri:
- ft_strlen
- ft_strlcpy
- ft_strlcat
- ft_strchr
- ft_strrchr
- ft_strncmp
- ft_strnstr

Bellek İşlemleri:
- ft_memset
- ft_bzero
- ft_memcpy
- ft_memmove
- ft_memchr
- ft_memcmp

Dönüştürme:
- ft_toupper
- ft_tolower
- ft_atoi

Bellek Yönetimi:
- ft_calloc
- ft_strdup

---

### 2. Ek Fonksiyonlar (Part 2)

- ft_substr
- ft_strjoin
- ft_strtrim
- ft_split
- ft_itoa
- ft_strmapi
- ft_striteri
- ft_putchar_fd
- ft_putstr_fd
- ft_putendl_fd
- ft_putnbr_fd

---

### 3. Linked Lists ( Part 3)

- ft_lstnew
- ft_lstadd_front
- ft_lstsize
- ft_lstlast
- ft_lstadd_back
- ft_lstdelone
- ft_lstclear
- ft_lstiter
- ft_lstmap

---

## Kaynaklar ve AI Kullanımı (Resources)

### Referanslar

Bu proje geliştirilirken aşağıdaki kaynaklardan yararlanılmıştır:

- Man Pages
- C Standard Library Documentation
- GNU Make Dokümantasyonu

### Yapay Zeka Kullanımı

Bu proje geliştirilirken yapay zeka araçları:

- Hata ayıklama sürecinde
- Pointer aritmetiği ve bellek yönetimi konularında teorik açıklamalar almak için
- Kod davranışlarını analiz etmek için

destekleyici bir kaynak olarak kullanılmıştır.

Projenin temel mantığı ve implementasyonu şahsım tarafından gerçekleştirilmiştir.
