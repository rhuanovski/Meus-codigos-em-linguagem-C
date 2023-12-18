using System;
using System.Numerics;

public static class DiffieHellman
{
    public static BigInteger PrivateKey(BigInteger primeP) 
    { 
        Random random = new Random();
        BigInteger privateKey = random.Next(1, (int)primeP-1);
        
        return privateKey;
    }

    public static BigInteger PublicKey(BigInteger primeP, BigInteger primeG, BigInteger privateKey) 
    {
        BigInteger A = DiffieHellman.ModPow(primeG, privateKey, primeP);       
        return A;
    }

    public static BigInteger Secret(BigInteger primeP, BigInteger publicKey, BigInteger privateKey) 
    {
        BigInteger s = DiffieHellman.ModPow(publicKey, privateKey, primeP);
        return s;
    }

     private static BigInteger ModPow(BigInteger baseNumber, BigInteger exponent, BigInteger modulus)
    {
        if (modulus == 1)
            return 0;

        BigInteger result = 1;
        baseNumber = baseNumber % modulus;

        while (exponent > 0)
        {

            if (exponent % 2 == 1)
                result = (result * baseNumber) % modulus;

    
            exponent >>= 1;
            baseNumber = (baseNumber * baseNumber) % modulus;
        }
          return result;
    }
}