% FH FSK
% Use the idea of matlab bluetooth example to achieve CPFSK hopping
function data_stream1 = Transmit(M)
% clc
% close all
% clear all
 
% M = 2;                              %M-ary FSK; BFSK = 2
T = 1/20;                 %symbol duration 6.25ms from Green's 2010 c
freq_spc = 1/T;            %20
fs = 500;                     %sampling frequency
symblen = fs*T;                 %sampling num per bit in BFSK
fc =110;                          %central frequency
Bit_num = 10;
Nt = 1;
sig_bit = [1 0 0 1 1 1 0 0 1 0];
% amp = 1;

%%%%%%%%%%%%%%%%%%
% Preamble Signal %
%%%%%%%%%%%%%%%%%%
% 
% Tpre = 10*T; 
% tpre = linspace(0,Tpre,fs*Tpre);
% Tg = 2*T;
% sig_preamble = zeros(Nt, fs*Tpre+fs*Tg);
% 
% sig_preamble(1,1:fs*Tpre) = chirp(tpre, fc-2*50, Tpre, fc+2*50);


% sig_bit = randsrc(Nt,Bit_num,[0,1]); 

Symb_num = Bit_num;
% Symb_num = Bit_num/log2(M);

%%%%Generate CPFSK%%%%%


% k = coder.Constant(M);
% k = coder.newtype('constant',M);
hCPFSK = comm.CPFSKModulator(2, 'BitInput', true, 'ModulationIndex', 1, 'SamplesPerSymbol', fs*T);


t = linspace(0, T*Symb_num, symblen*Symb_num);
carrier_freq = exp(-1j*2*pi*fc*t).';
% a = zeros(250);
% b = zeros(1);
cpfsk = complex(zeros(250,1));
data_stream1 = zeros(250,1);
for nt = 1:Nt
    cpfsk(:,nt) = step(hCPFSK, sig_bit(nt,:).');

    data_stream1(:,nt) = real(cpfsk(:,nt).*carrier_freq); % Hopping
 
end


% data_stream3 =[sig_preamble.'; data_stream1];



%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%   transmit signals
%%%%%%%%%%%%%%%%%%%%%%%%%%%%

% amp = 2;
% data_out1 = amp*data_stream1;

end
% a = arduino;
% a.AvailablePins.A0 = data_out;
% 
% plot(data_stream);
% [f,Y] = spectrum (data_stream3, fs, 50, 150);
% [f,Y] = spectrum (data_stream2, fs, 50, 150);
