int tab[100];
for(i=0;i<n;i++)
tab[i]=i;
printf(«%d\n »,tab[0]);//m valeur 
printf(«%d\n »,*tab); // m valeur 
printf(«%d %d\n »,*(tab+1),tab[1]); //m valeur 
printf(«%x %x\n»,tab,&tab[0]); // m adresse 