btinfo=Bluetooth('bitirmetezi',1);
%%
fopen(btinfo);
%%
for i=1:15
       for y=1:12
           Bluetooth_Read=fgets(btinfo);
           gelenveri(1,y)=str2double(Bluetooth_Read);           
       end
       gelenveri
end
%%
for i=1:180
       for y=1:12
           Bluetooth_Read=fgets(btinfo);
           hareketdegiskeni(i, y)=str2double(Bluetooth_Read);           
       end
       i
end
%%
fclose(btinfo);
