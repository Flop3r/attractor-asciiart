# ATTRACTOR-ASCIIART
Script that creates in terminal, simple ascii-art attractor of complex number set:

$$
c = 0.2 + 0.752 \cdot i
$$

$$
\langle a,b \rangle = [-1,1]\times[-1,1]
$$

$$
\begin{align}
 Z = {\langle a,b \rangle \in \mathbb{C}\, |\,\forall n\in \{0,1,...,199 \}\   |z_{n}| ^{2} < 4,\ z_{0} = a + b\cdot i,\ z_{_{n+1}} = z_{n} - z_{n} - c \}
\end{align}
$$

By deafult print resolution is set to x = 40, y = 25. You can change it by giving command-line arguments (arg1: x, arg2: y). Paramenter "c" is changeable. By giving arguments you can change real part and imaginary part of "c" (arg3: a, arg4: b)

$$
c = a + b \cdot i
$$

