## ```uname```

Parāda pašreizējo OS

## ```who```

Parāda visus aktīvos lietotājus 

## ```whoami```

Parāda pašreizējo lietotāju

## ```pwd```

Parāda, kur pašlaik atrodas lietotājs (mape vai fails)

## ```ls```

Parāda esošajā directory pieejamās mapes un failus

- Command options

- - -l failus un mapes sastāda sarakstā (list)
- - -a parāda visus failus, ieskaitot slēptos, kuri sākas ar "." (all) 
- - -la sastāda sarakstu ar visām mapēm un failiem directory 

Lai iegūtu pilno sarakstu, nav svarīgi, kādā secībā raksta -la, arī, kad abas opcijas raksta atsevišķi

Punkts "." ir pašreizējā mape
Punkti ".." ir "līmenis augstāk"

## ```cd```

Pārslēdz pašreizējo mapi vai failu uz norādīto

```cd ..``` aiziet uz mapi augstāk

```cd ~``` ar var ātri tikt uz "mājām"

Vislabāk ir cd izmantot pēc ls izmantošanas, lai viegli varētu norakstīt no iepriekšējās rindas jaunās mapes vai faila precīzu nosaukumu

Rakstot mapes vai faila atrašanās vietu, slīpsvīrta ```/``` norāda absolūto adresi. 

```cd /``` aiziet uz root datni

## ```nano```

Izveido jaunu teksta datni

## ```cat```

Nodrukā datnes saturu. Piemēram, izveidota datne ar tekstu nevis atvērs editor, bet vienkārši parādīs tās saturu. Cita veida datnes atgriezīs simbolus un vērtības.

## ```gcc```

### Pirmais sarakstītais kods - main () {return 0;}

Kompilē sarakstīto kodu C valodā

- ```-o file.name``` Nosauc output datni vēlamā nosaukumā

- ```-save-temps``` saglabā īslaicīgos datus

## ```echo $#```

Parāda, vai iepriekšējā terminal komanda tika izpildīta veiksmīgi, un izdrukā kļūdu skaitu (ja kļūdu nebija, atgriež 0)

# Datņu tipi

## .c

"Character device". Satur tekstu, kuru parasti izmanto koda rakstīšanai

## .s

"Socket". Izmanto, lai padotu informāciju no programmas programmā
