# JPEG_Encoder-Decoder_Module

%%
Introduction
This is a lab assignment of SoC Design course. The objective of this lab is to design a JPEG encoder/decoder unit by using systemC. 

The steps involved for successful JPEG compression are as follows: Discrete Cosine Function, Quantization, Zigzag, Entropy Encoding. To do the decompression is to do the same steps reversely. Since the most computational consuming part is DCT/IDCT, the accelerators for calculating are built while the other steps are implemented by using software functions. More specific information can be found in the lab manual.

For this lab a .bmp file is used for simplicity, since they usually possess a standard header size and are easier to decode. The basic ideolgy and theory are the same for both types of images.
