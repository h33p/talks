<!-- class: invert -->

# Macro metaprogramming is awesome!..
## Until it's not...

By Auri/h33p
github.com/h33p/talks

---

# What is all this?

* C preprocessor
* Glorified copy paste tool

---

# But why?

* C89 did not have constants
* Dennis Ritchie
* ... wanted to C the world burn

---

# What does it do?

Say we want to define and use a constant...

---

## Step 1 - define it

![](resources/1_simple_0.png)

---

## Step 2 - use it

![](resources/1_simple_1.png)

---

## Step 3 - preprocess it 

![](resources/1_simple_2.png)

---

## Step 4 - profit

![](resources/1_simple_3.png)

---

## Constant is just a named literal!

* But where madness?

---

# Level 1

## Parametrized macros!

---

## Step 1 - define it

![](resources/2_parametrized_0.png)

---

## Step 1 - define it

![](resources/2_parametrized_1.png)

---

## Step 2 - use it

![](resources/2_parametrized_2.png)

---

## Step 3 - preprocess it 

![](resources/2_parametrized_3.png)

---

## Step 3 - preprocess it

![](resources/2_parametrized_4.png)

---

## Step 4 - compile

![](resources/2_parametrized_5.png)

---

## Step 5 - profit

![](resources/2_parametrized_6.png)

---

# Level 2
## Cool strings

---

## Step 1 - notice the hashtag

![](resources/3_stringify_0.png)

---

## Step 2 - use as usual

![](resources/3_stringify_1.png)

---

## Step 3 - preprocess it

![](resources/3_stringify_2.png)

---

## Step 3 - preprocess it

![](resources/3_stringify_3.png)

---

## Step 4 - compile

![](resources/3_stringify_4.png)

---

## Step 5 - profit

![](resources/3_stringify_5.png)

---

# Level 3
## Generate functions

---

## Basic networked variables

![](resources/5_netvars_0.png)

---

## Basic networked variables

![](resources/5_netvars_1.png)

---

## Basic networked variables

![](resources/5_netvars_2.png)

---

## Basic networked variables

![](resources/5_netvars_3.png)

---

## Basic networked variables

![](resources/5_netvars_4.png)

---

## Same code as before

![](resources/5_2_netvars_0.png)

---

## Step 1 - function for netvar

![](resources/5_2_netvars_1.png)

---

## Step 2 - define netvars

![](resources/5_2_netvars_2.png)

---

## Step 3 - use them!

![](resources/5_2_netvars_3.png)

---

## Step 4 - preprocess...

![](resources/5_2_netvars_4.png)

---

## Step 4 - preprocess

![](resources/5_2_netvars_5.png)

---

## Step 4 - preprocess

![](resources/5_2_netvars_6.png)

---

## Step 5 - run!

![](resources/5_2_netvars_7.png)

---

## Step 5 - run!

![](resources/5_2_netvars_8.png)

---

# Level 4
## Config system

---

## Step 1 - some config variable

![](resources/6_1_config_0.png)

---

## Step 2 - future DLC...

![](resources/6_1_config_1.png)

---

## Step 3 - use it!

![](resources/6_1_config_2.png)

---

## Step 4 - use it more!!!

![](resources/6_1_config_3.png)

---

## Step 5 - save config

![](resources/6_2_config_0.png)

---

## Step 6 - load config

![](resources/6_2_config_1.png)

---

## Step 7 - DOCONFIG?

![](resources/6_3_config_0.png)

---

## Step 7 - DOCONFIG?

![](resources/6_3_config_1.png)

---

## Step 7 - Oh no

![](resources/6_3_config_2.png)

---

## Step 7 - SCONFIG

![](resources/6_4_config_0.png)

---

## Step 7 - LCONFIG

![](resources/6_4_config_1.png)

---

## Step 8 - Use it!

![](resources/6_5_config_0.png)

---

## Step 8 - Use it!

![](resources/6_5_config_1.png)

---

## Step 8 - Use it!

![](resources/6_5_config_2.png)

---

## Step 8 - Use oh...

![](resources/6_6_config_0.png)

---

## Step 9 - Debug it!

![](resources/6_7_config_0.png)

---

## Step 9 - Debug it!

![](resources/6_7_config_1.png)

---

## Step 9 - Debug it...

![](resources/6_7_config_2.png)

---

## Step 9 - Yikes.

![](resources/6_7_config_3.png)

---

## Step 10 - Cry!

![](resources/6_7_config_4.png)

---

# So... Macros

* Really awesome
* Get tempted to fly to the moon
* Get grilled, like Icarus!

---

# Some links

* github.com/h33p/talks - Obfuscation example :)

