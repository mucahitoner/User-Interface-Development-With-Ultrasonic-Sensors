btinfo=Bluetooth('bitirmetezi',1);
%%
fopen(btinfo);
%%
for i=1:15
       for y=1:12
           Bluetooth_Read=fgets(btinfo);
           gelenveri(y, 1)=str2double(Bluetooth_Read);           
       end
       gelenveri
end
%%
for i=1:20
       for y=1:12
           Bluetooth_Read=fgets(btinfo);
           gelenveri(y, 1)=str2double(Bluetooth_Read);           
       end
       gelenveri
       sim(network1,gelenveri)
end
%%
fclose(btinfo);