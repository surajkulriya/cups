---
title: How To Restrict User Access To A Class Of Printers
layout: post
permalink: /blog/:year-:month-:day-:title.html
---

Two ways of restricting users from accessing a class of printers
    /usr/sbin/lpadmin -p class -u allow:all 
    /usr/sbin/lpadmin -p class -u allow:peter,paul,mary
    /usr/sbin/lpadmin -p class -u deny:peter,paul,mary 

 # Deny everyone except for users peter, paul and mary
 <Class my_class>
 ...
 AllowUser peter
 AllowUser paul
 AllowUser mary
 </Class>
 
 # Accept everyone except for users peter, paul and mary
 <Class my_class>
 ...
 DenyUser  peter
 DenyUser  paul
 DenyUser  mary
 </Class>
